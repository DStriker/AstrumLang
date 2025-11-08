#include "CppAdvanceCodegen.h"
#include "StringUtils.h"

#define GET_ELEMENT_AT out << "_parent.getAt(";\
for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())\
{\
	bool first = true;\
	if (auto t = param->theTypeId())\
	{\
		if (!first) out << ", ";\
		first = false;\
		out << "_" << param->Identifier()->getText();\
	}\
}\
out << ")";

void CppAdvanceCodegen::printGlobalVariables() const
{
	out.switchTo(true);
	if (!sema.globalVariables.empty())
	{
		out << "//###############################################################################\n";
		out << "//# Global variable declarations\n";
		out << "//###############################################################################\n";
	}
	for (const auto& var : sema.globalVariables)
	{
		out.switchTo(false);
		isUnsafe = var.isUnsafe;
		isVolatile = var.isVolatile;
		if (!var.compilationCondition.empty())
		{
			out << "#if " << var.compilationCondition << std::endl;
		}
		out << "#line " << var.pos.line << " \"" << filename << ".adv\"\n";
		if (var.access == AccessSpecifier::Private)
		{
			out << "static ";
		}
		else if (var.access == AccessSpecifier::Protected)
		{
			out << "namespace __" << filename << "_Protected { ";
		}
		if (var.isConst && var.access != AccessSpecifier::Private)
		{
			out << "extern ";
		}
		if (var.isThreadLocal) out << "thread_local ";
		if (var.isConst) out << "const ";
		if (var.isVolatile) out << "volatile ";
		bool isArray = false;
		currentDeclarationName = var.id;
		if (var.type)
		{
			symbolTable[var.id] = var.type->getText();
			isDeclaration = true;
			printTypeId(var.type);
			isDeclaration = false;
			isArray = var.type->arrayDeclarator();
		}
		else
		{
			out << "decltype(";
			printInitializerClause(var.initializer);
			out << ")";
		}
		out << " ";
		currentType = symbolTable[var.id];
		out << var.id;
		if (isArray) printArrayDeclarator(var.type->arrayDeclarator());
		if (var.initializer)
		{
			out << " = ";
			printInitializerClause(var.initializer);
		}
		else
		{
			out << "{}";
		}
		out << ";";
		if (var.access == AccessSpecifier::Protected) out << " }";
		out << std::endl;
		if (!var.compilationCondition.empty())
		{
			out << "#endif" << std::endl;
		}
		if (var.access == AccessSpecifier::Private) continue;
		out.switchTo(true);
		isUnsafe = false;
		if (!var.compilationCondition.empty())
		{
			out << "#if " << var.compilationCondition << std::endl;
		}
		out << "#line " << var.pos.line << " \"" << filename << ".adv\"\n";
		if (var.access == AccessSpecifier::Protected) out << "namespace __" << filename << "_Protected { ";
		if (var.isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
		out << "extern ";
		if (!DLLName.empty()) {
			if (var.access == AccessSpecifier::Public) out << DLLName << "_API ";
			else out << DLLName << "_HIDDEN ";
		}
		if (var.isThreadLocal) out << "thread_local ";
		if (var.isConst) out << "const ";
		if (var.isVolatile) out << "volatile ";
		isUnsafe = var.isUnsafe;
		if (var.type)
		{
			isDeclaration = true;
			printTypeId(var.type);
			isDeclaration = false;
		}
		else
		{
			out << "decltype(";
			printInitializerClause(var.initializer);
			out << ")";
		}
		//if (var.isVolatile) out << ">";
		out << " " << var.id;
		if (isArray) printArrayDeclarator(var.type->arrayDeclarator());
		out << ";";
		if (var.access == AccessSpecifier::Protected) out << " }";
		out << std::endl;
		if (!var.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	out.switchTo(false);
	for (const auto& field : sema.staticFields)
	{
		if (!field.compilationCondition.empty())
		{
			out << "#if " << field.compilationCondition << std::endl;
		}
		out << "#line " << field.pos.line << " \"" << filename << ".adv\"\n";
		if (field.templateParams)
		{
			printTemplateParams(field.templateParams);
			out << " ";
		}
		else if (field.isTypeSpecialization)
		{
			out << "template<> ";
		}
		if (field.isConst) out << "const ";
		if (field.isThreadLocal) out << "thread_local ";
		bool isArray = false;
		isDeclaration = true;
		printTypeId(field.type);
		isDeclaration = false;
		isArray = field.type->arrayDeclarator();
		currentType = field.type->getText();
		out << " ";
		if (field.access == AccessSpecifier::Protected) {
			out << "__" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << "::";
		}
		else if (isUnsafe)
		{
			out << "__Unsafe::";
		}
		auto parent = field.parentType;
		StringReplace(parent,".", "::");
		out << parent << "::" << field.id;
		if (isArray) printArrayDeclarator(field.type->arrayDeclarator());
		currentDeclarationName = field.id;
		if (field.initializer)
		{
			out << " = ";
			printInitializerClause(field.initializer);
		}
		else if (field.initializerList)
		{
			out << " = ";
			printInitializerList(field.initializerList);
		}
		out << ";";
		out << std::endl;
		if (!field.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	for (const auto& [pos,prop] : sema.properties)
	{
		if (!prop.isStatic) continue;
		if (!prop.compilationCondition.empty())
		{
			out << "#if " << prop.compilationCondition << std::endl;
		}
		out << "#line " << pos.line << " \"" << filename << ".adv\"\n";
		if (prop.parentTemplateParams)
		{
			printTemplateParams(prop.parentTemplateParams);
			out << " ";
		}
		else if (prop.parentTemplateSpecializationArgs)
		{
			out << "template<> ";
		}
		isUnsafe = prop.isUnsafeType;
		if (prop.isProtectedType) {
			out << "__" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << "::";
		}
		else if (isUnsafe)
		{
			out << "__Unsafe::";
		}

		auto parent = prop.parentType;
		StringReplace(parent, ".", "::");
		out << parent << "::__Property_" << prop.id << "<> ";
		if (prop.isProtectedType) {
			out << "__" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << "::";
		}
		else if (isUnsafe)
		{
			out << "__Unsafe::";
		}
		out << parent << "::" << prop.id << ";\n";
		if (!prop.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	currentDeclarationName.clear();
}

void CppAdvanceCodegen::printGlobalConstants() const
{
	out.switchTo(true);
	if (!sema.globalConstants.empty())
	{
		out << "//###############################################################################\n";
		out << "//# Global compile-time constants\n";
		out << "//###############################################################################\n";
	}
	for (const auto& var : sema.globalConstants)
	{
		out.switchTo(true);
		if (var.access == AccessSpecifier::Private) {
			out.switchTo(false);
		}
		if (!var.compilationCondition.empty())
		{
			out << "#if " << var.compilationCondition << std::endl;
		}
		out << "#line " << var.pos.line << " \"" << filename << ".adv\"\n";
		if (var.access == AccessSpecifier::Protected) out << "namespace __" << filename << "_Protected { ";
		if (var.templateParams) {
			isFunctionDeclaration = true;
            printTemplateParams(var.templateParams);
			isFunctionDeclaration = false;
			out << " ";
		}
		out << "inline constexpr ";
		bool isArray = false;
		if (var.type)
		{
			isDeclaration = true;
			printTypeId(var.type);
			isDeclaration = false;
			isArray = var.type->arrayDeclarator();
			currentType = var.type->getText();
		}
		else
		{
			out << "auto";
		}
		out << " " << var.id;
		if (isArray) printArrayDeclarator(var.type->arrayDeclarator());
		out << " = ";
		currentDeclarationName = var.id;
		printInitializerClause(var.initializer);
		out << ";";
		if (var.access == AccessSpecifier::Protected) out << " }";
		out << std::endl;
		if (!var.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	currentDeclarationName.clear();
}

void CppAdvanceCodegen::printGlobalTypeAliases() const
{
	out.switchTo(true);
	if (!sema.globalTypeAliases.empty())
	{
		out << "//###############################################################################\n";
		out << "//# Global type aliases\n";
		out << "//###############################################################################\n";
	}
	for (const auto& alias : sema.globalTypeAliases)
	{
		isUnsafe = alias.isUnsafe;
		out.switchTo(true);
		if (alias.access == AccessSpecifier::Private) {
			out.switchTo(false);
		}
		if (!alias.compilationCondition.empty())
		{
			out << "#if " << alias.compilationCondition << std::endl;
		}
		out << "#line " << alias.pos.line << " \"" << filename << ".adv\"\n";
		if (alias.access == AccessSpecifier::Protected) out << "namespace __" << filename << "_Protected { ";
		if (alias.templateParams)
		{
			isFunctionDeclaration = true;
			printTemplateParams(alias.templateParams);
			isFunctionDeclaration = false;
			out << " ";
		}
		out << "using " << alias.id << (isUnsafe? " [[clang::annotate(\"unsafe\")]]" : "") << " = ";
		printTypeId(alias.type);
		out << ";";
		if (alias.access == AccessSpecifier::Protected) out << " }";
		out << std::endl;
		if (!alias.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	isUnsafe = false;
}

void CppAdvanceCodegen::printGlobalFunctions() const
{
	out.switchTo(true);
	if (!sema.globalFunctions.empty())
	{
		out << "//###############################################################################\n";
		out << "//# Free function declarations\n";
		out << "//###############################################################################\n";
	}
	for (const auto& func : sema.globalFunctions)
	{
		out.switchTo(true);
		if (func.access == AccessSpecifier::Private) {
			out.switchTo(false);
		}
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl;
		}
		out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n";
		isUnsafe = func.isUnsafe;
		if (func.access == AccessSpecifier::Protected) {
			out << "namespace __" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << " { ";
		}
		else if (isUnsafe)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] ";
		}

		if (func.varargs >= 0)
		{
			out << "[[clang::annotate(\"varargs:" << (int)func.varargs << "\")]] ";
		}

		isFunctionDeclaration = true;
		if (func.templateParams) {
			printTemplateParams(func.templateParams);
			out << " ";
		}
		else if (func.templateSpecializationArgs)
		{
			out << "template<> ";
		}

		if (func.isConsteval)
		{
			out << "inline consteval ";
		}
		else if (func.isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (func.isInline)
		{
			out << "inline ";
		} else if (!DLLName.empty() && func.access != AccessSpecifier::Private && !func.templateParams)
		{
			if (func.access == AccessSpecifier::Public) out << DLLName << "_API ";
			else out << DLLName << "_HIDDEN ";
		}
		
		out << "auto " << func.id;
		if (func.templateSpecializationArgs) {
			out << "<";
			printTemplateArgumentList(func.templateSpecializationArgs);
			out << ">";
		}
		printFunctionParameters(func.params);
		isVariadicTemplate = false;
		isFunctionDeclaration = false;
		out << " ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		out << " -> ";
		if (func.isConstReturn) out << "const ";
		if (func.returnType)
		{
			printTypeId(func.returnType);
		}
		else if (func.isForwardReturn)
		{
			out << "decltype(auto)";
		}
		else if (func.expression && func.id != "operator delete")
		{
			out << "decltype(auto)";
		}
		else
		{
			out << "void";
		}
		if (func.isRefReturn) out << "&";
		out << ";";
		if (func.access == AccessSpecifier::Protected || isUnsafe) out << " }";
		out << std::endl;
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	isUnsafe = false;
}

void CppAdvanceCodegen::printForwardDeclarations() const
{
	out.switchTo(true);
	if (!sema.forwardDeclarations.empty())
	{
		out << "//###############################################################################\n";
		out << "//# Type forward declarations\n";
		out << "//###############################################################################\n";
	}
	for (const auto& type : sema.forwardDeclarations)
	{
		out.switchTo(true);
		if (type.access == AccessSpecifier::Private) {
			out.switchTo(false);
		}
		if (!type.compilationCondition.empty())
		{
			out << "#if " << type.compilationCondition << std::endl;
		}
		isUnsafe = type.isUnsafe;
		if (type.access == AccessSpecifier::Protected) {
			out << "namespace __" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << " { ";
		}
		else if (isUnsafe)
		{
			out << "namespace __Unsafe { ";
		}
		auto parts = StringSplit(type.id, '.');
		for (int i = 0; i < parts.size()-1; ++i)
		{
			out << "namespace " << parts[i] << " { ";
		}
		if (type.templateParams)
		{
			isFunctionDeclaration = true;
			printTemplateParams(type.templateParams);
			isFunctionDeclaration = false;
			out << " ";
		}
		
		out << "class " << parts.back() << ";";
		if (type.access == AccessSpecifier::Protected || isUnsafe) out << " }";
		for (int i = 0; i < parts.size() - 1; ++i)
		{
			out << " } ";
		}
		out << std::endl;
		if (!type.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	isUnsafe = false;
}

void CppAdvanceCodegen::printType(StructDefinition* type) const
{
	if (!type->compilationCondition.empty())
	{
		out << "#if " << type->compilationCondition << std::endl;
	}

	out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else if (type->templateSpecializationArgs)
	{
		out << "template<> ";
	}
	out << "struct ";
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	if (type->isRefStruct) out << "[[clang::annotate(\"ref_struct\")]] ";
	out << type->id;
	if (type->templateSpecializationArgs)
	{
		out << "<";
		printTemplateArgumentList(type->templateSpecializationArgs);
		out << ">";
	}
	if (type->isRefStruct)
		out << " : CppAdvance::RefStruct";
	out << " {\n" << std::string(++depth, '\t') << "private: using __self = " << type->id;
	if (type->templateSpecializationArgs)
	{
		out << "<";
		printTemplateArgumentList(type->templateSpecializationArgs);
		out << ">";
	}
	else if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << param->Identifier()->getText();
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(depth, '\t');
	sema.symbolContexts.push(sema.symbolContexts.top());
	for (const auto& nested : type->nestedStructs)
	{
		if (nested->access == AccessSpecifier::Private)
		{
			out << "private: ";
		}
		else
		{
			out << "public: ";
		}
		out << "\n" << std::string(depth, '\t');
		printType(nested.get());
		out << "\n" << std::string(depth, '\t');
	}
	for (const auto& field : type->fields)
	{
		bool prevUnsafe = isUnsafe;
		bool first = true;
		bool isArray = false;
		auto id = field.id;
		currentDeclarationName = id;
		if (!field.compilationCondition.empty())
		{
			out << "#if " << field.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << field.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		switch (field.access)
		{
		case AccessSpecifier::Public:
			out << "public: ";
			if (!isPrivateStruct && (field.isStatic || field.isThreadLocal) && !DLLName.empty()) out << DLLName << "_API ";
			break;
		case AccessSpecifier::Internal:
			out << "public: ";
			if (!isPrivateStruct && (field.isStatic || field.isThreadLocal) && !DLLName.empty()) out << DLLName << "_HIDDEN ";
			break;
		case AccessSpecifier::Private:
			out << "private: ";
			if (!isPrivateStruct && (field.isStatic || field.isThreadLocal) && !DLLName.empty()) out << DLLName << "_HIDDEN ";
			break;
		}
		if (field.isUnsafe) {
			isUnsafe = true;
			out << "[[clang::annotate(\"unsafe\")]] ";
		}
		if (field.isStatic || field.isThreadLocal)
		{
			out << "static ";
		}
		if (field.isThreadLocal)
		{
			out << "thread_local ";
		}
		if (field.isConst)
		{
			out << "const ";
		}
		if (field.isVolatile)
		{
			out << "volatile ";
		}
		if (auto t = field.type)
		{
			symbolTable[id] = t->getText();
			isDeclaration = true;
			printTypeId(t);
			isDeclaration = false;
			isArray = t->arrayDeclarator();
			out << " ";
		}
		currentType = symbolTable[id];
		out << id;
		if (isArray) printArrayDeclarator(field.type->arrayDeclarator());
		if (!field.isStatic && !field.isThreadLocal)
		{
			if (auto expr = field.initializer)
			{
				out << " = ";
				printInitializerClause(expr);
			}
			else if (auto init = field.initializerList)
			{
				out << "{ ";
				printInitializerList(init);
				out << " }";
			}
		}

		out << ";";
		if (!type->isRefStruct || field.isStatic || field.isThreadLocal) {
			if (!sema.contextTypes.contains(field.type) || !sema.contextTypes[field.type].ends_with(type->id)) {
				out << " ADV_CHECK_REF_STRUCT(";
				printTypeId(field.type);
				auto t = field.type->getText();
				StringReplace(t, "\"", "\\\"");
				out << ", \"" << t << "\");";
			}
		}
		out << "\n" << std::string(depth, '\t');
		first = false;
		isUnsafe = prevUnsafe;
		currentDeclarationName.clear();
		if (!field.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}

	for (const auto& constant : type->constants)
	{
		if (!constant.compilationCondition.empty())
		{
			out << "#if " << constant.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		switch (constant.access)
		{
		case AccessSpecifier::Public:
			out << "public: ";
			break;
		case AccessSpecifier::Private:
			out << "private: ";
			break;
		}
		bool isSelfType = sema.contextTypes.contains(constant.type) && sema.contextTypes[constant.type].ends_with(type->id)
			|| sema.contextTypes.contains(constant.initializer) && sema.contextTypes[constant.initializer].ends_with(type->id);
		if (isSelfType) selfConstants.push_back(constant);
		if (constant.templateParams) {
			isFunctionDeclaration = true;
			printTemplateParams(constant.templateParams);
			isFunctionDeclaration = false;
			out << " ";
		}
		out << "static ";
		if (isSelfType) {
			if (!isPrivateStruct && !DLLName.empty()) out << DLLName << "_HIDDEN ";
			out << "const ";
		}
		else out << "constexpr ";
		bool isArray = false;
		if (constant.type)
		{
			isDeclaration = true;
			printTypeId(constant.type);
			isDeclaration = false;
			isArray = constant.type->arrayDeclarator();
			currentType = constant.type->getText();
		}
		else if (isSelfType)
		{
			out << type->id;
		}
		else
		{
			out << "auto";
		}
		out << " " << constant.id;
		if (isArray) printArrayDeclarator(constant.type->arrayDeclarator());
		if (!isSelfType)
		{
			out << " = ";
			currentDeclarationName = constant.id;
			printInitializerClause(constant.initializer);
		}
		out << ";";
		out << std::endl << std::string(depth, '\t');
		if (!constant.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
		currentDeclarationName.clear();
	}
	for (const auto& alias : type->typeAliases)
	{
		isUnsafe = alias.isUnsafe;
		if (!alias.compilationCondition.empty())
		{
			out << "#if " << alias.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << alias.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		switch (alias.access)
		{
		case AccessSpecifier::Public:
			out << "public: ";
			break;
		case AccessSpecifier::Private:
			out << "private: ";
			break;
		}
		if (alias.templateParams)
		{
			isFunctionDeclaration = true;
			printTemplateParams(alias.templateParams);
			isFunctionDeclaration = false;
			out << " ";
		}
		out << "using " << alias.id << (isUnsafe ? " [[clang::annotate(\"unsafe\")]]" : "") << " = ";
		printTypeId(alias.type);
		out << ";";
		out << std::endl << std::string(depth, '\t');
		if (!alias.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}
	for (const auto& prop : type->properties)
	{
		isUnsafe = prop.isUnsafe;
		if (!prop.compilationCondition.empty())
		{
			out << "#if " << prop.compilationCondition << std::endl << std::string(depth, '\t');
		}
		bool isInline = false;
		bool isConstexpr = false;
		AccessSpecifier getAccess = prop.access;
		AccessSpecifier setAccess = prop.access;
		if (prop.setter)
		{
			if (sema.propertiesNeedField.contains(prop.setter)) {
				out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "private: ";
				if (prop.isStatic) out << "static ";
				if (prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << " p_" << prop.id;
				if (prop.isStatic)
				{
					sema.staticFields.push_back(
						VariableDefinition{ "p_" + prop.id, prop.parentTemplateParams, prop.type, prop.pos, prop.initializer, nullptr,
						prop.isProtectedType ? AccessSpecifier::Protected : AccessSpecifier::Private, prop.compilationCondition, prop.parentType,
						true, prop.isConst, false, false, prop.isUnsafeType, type->templateSpecializationArgs != nullptr });
				}
				else if (prop.initializer) {
					out << " = ";
					printInitializerClause(prop.initializer);
				}
				out << "; ADV_CHECK_REF_STRUCT(";
				printTypeId(prop.type);
				auto t = prop.type->getText();
				StringReplace(t, "\"", "\\\"");
				out << ", \"" << t << "\");";
				out << std::endl << std::string(depth, '\t');
			}

			out << "#line " << prop.setter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (auto acc = prop.setter->accessSpecifier())
			{
				if (acc->Public()) setAccess = AccessSpecifier::Public;
				else if (acc->Internal()) setAccess = AccessSpecifier::Internal;
				else if (acc->Private()) setAccess = AccessSpecifier::Private;
			}
			switch (setAccess)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}

			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}

			isFunctionDeclaration = true;
			if (auto body = prop.setter->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = prop.setter->shortFunctionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else
			{
				isInline = true;
			}
			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}
			else if (!DLLName.empty() && !type->templateParams)
			{
				if (setAccess == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			if (prop.isStatic) out << "static ";
			out << "auto set" << prop.id << "(const ";
			printTypeId(prop.type);
			out << "& value) ";
			if (!prop.isStatic) out << "-> __self&;";
			else out << "-> void;";
			out << std::endl << std::string(depth, '\t');
		}
		if (prop.getter)
		{
			out << "#line " << prop.getter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (auto acc = prop.getter->accessSpecifier())
			{
				if (acc->Public()) getAccess = AccessSpecifier::Public;
				else if (acc->Internal()) getAccess = AccessSpecifier::Internal;
				else if (acc->Private()) getAccess = AccessSpecifier::Private;
			}
			switch (getAccess)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}

			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}

			isFunctionDeclaration = true;
			isInline = false;
			isConstexpr = false;
			if (auto body = prop.getter->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = prop.getter->shortFunctionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else
			{
				isInline = true;
			}
			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}
			else if (!DLLName.empty() && !type->templateParams)
			{
				if (getAccess == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			if (prop.isStatic) out << "static ";
			out << "auto get" << prop.id << "() ";
			if (!prop.isStatic) out << "const ";
			out << " -> ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			out << ";" << std::endl << std::string(depth, '\t');
		}
		else if (!prop.setter)
		{
			out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			switch (getAccess)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}

			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}

			isFunctionDeclaration = true;
			if (prop.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (prop.isInline)
			{
				out << "inline ";
			}
			else if (!DLLName.empty() && !type->templateParams)
			{
				if (prop.access == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			if (prop.isStatic) out << "static ";
			out << "auto get" << prop.id << "() ";
			if (!prop.isStatic) out << "const ";
			out << " -> ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			out << ";" << std::endl << std::string(depth, '\t');
		}
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		auto parent = prop.parentType;
		StringReplace(parent, ".", "::");
		if (prop.setter)
		{
			if (prop.getter) {
				out << "ADV_PROPERTY_GETTER_SETTER";
				if (prop.isStatic) out << "_STATIC";
				out << "(";
				switch (prop.access)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				out << ", " << parent << ", ";
				if (prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << ", " << prop.id << ", ";
				switch (getAccess)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}
				out << ", get" << prop.id << ", ";
				switch (setAccess)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}
				out << ", set" << prop.id << ")";
			}
			else
			{
				out << "ADV_PROPERTY_SETTER";
				if (prop.isStatic) out << "_STATIC";
				out << "(";
				switch (prop.access)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				out << ", " << parent << ", ";
				if (prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << ", " << prop.id << ", set" << prop.id << ")";
			}
		}
		else
		{
			out << "ADV_PROPERTY_GETTER";
			if (prop.isStatic) out << "_STATIC";
			out << "(";
			switch (prop.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}

			out << ", " << parent << ", ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			out << ", " << prop.id << ", get" << prop.id << ")";
		}
		out << ";" << std::endl << std::string(depth, '\t');
	}
	for (const auto& func : type->methods)
	{
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl << std::string(depth, '\t');
		}
		if (func.indexerSetter)
		{
			out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "private: template<class __IdxT = ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << "> struct __IndexerAccessor_" << func.pos.line << " {\n" << std::string(++depth, '\t') << "private:\n" << std::string(depth, '\t');
			auto parent = func.parentType;
			StringReplace(parent, ".", "::");
			auto pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(func.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			out << "& _parent;\n" << std::string(depth, '\t');
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (auto t = param->theTypeId())
				{
					printTypeId(t);
					out << " _" << param->Identifier()->getText();
					out << ";\n" << std::string(depth, '\t');
				}
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
			}
			out << " friend class " << type->id;
			if (type->templateSpecializationArgs)
			{
				out << "<";
				printTemplateArgumentList(type->templateSpecializationArgs);
				out << ">";
			}
			out << ";\n" << std::string(depth, '\t');
			out << "public:\n" << std::string(depth, '\t');
			out << "FORCE_INLINE __IndexerAccessor_" << func.pos.line << "(";
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(func.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			out << "& parent, ";
			printParamDeclClause(func.indexerParams);
			out << ") : _parent(parent)";
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (auto t = param->theTypeId())
				{
					out << ", _" << param->Identifier()->getText() << "(" << param->Identifier()->getText() << ")";
				}
			}
			out << " {}\n" << std::string(depth, '\t');
			out << "FORCE_INLINE __IndexerAccessor_" << func.pos.line << "(";
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(func.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			out << " const& parent, ";
			printParamDeclClause(func.indexerParams);
			out << ") : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent))";
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (auto t = param->theTypeId())
				{
					out << ", _" << param->Identifier()->getText() << "(" << param->Identifier()->getText() << ")";
				}
			}
			out << " {}\n" << std::string(depth, '\t');
			bool isPrivate = false;
			if (auto spec = func.indexerSetter->accessSpecifier())
				isPrivate = spec->Private() || spec->Protected();
			if (func.indexerSetter->protectedInternal())
				isPrivate = true;
			if (isPrivate) out << "private: ";
			out << "template<class _ElemRight> FORCE_INLINE auto& operator=(_ElemRight&& other) { _parent.setAt(";
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (auto t = param->theTypeId())
				{
					out << "_" << param->Identifier()->getText() << ", ";
				}
			}
			out << "std::forward<_ElemRight>(other)); return *this; }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator+=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t+=u;} { return *this = __ref() += std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator-=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t-=u;} { return *this = __ref() -= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator*=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t*=u;} { return *this = __ref() *= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator/=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t/=u;} { return *this = __ref() /= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator%=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t%=u;} { return *this = __ref() %= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator&=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t&=u;} { return *this = __ref() &= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator|=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t|=u;} { return *this = __ref() |= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator^=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t^=u;} { return *this = __ref() ^= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator<<=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t<<=u;} { return *this = __ref() <<= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator>>=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t>>=u;} { return *this = __ref() >>= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator++() requires requires(__IdxT t) {++t;} { return *this = ++__ref(); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator++(int) requires requires(__IdxT t) {t++;} { auto copy = __ref(); *this = ++__ref(); return copy; }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator--() requires requires(__IdxT t) {--t;} { return *this = --__ref(); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator--(int) requires requires(__IdxT t) {t--;} { auto copy = __ref(); *this = --__ref(); return copy; }\n" << std::string(depth, '\t');

			isPrivate = false;
			if (auto spec = func.indexerGetter->accessSpecifier())
				isPrivate = spec->Private() || spec->Protected();
			if (func.indexerGetter->protectedInternal())
				isPrivate = true;
			if (isPrivate) out << "private: ";
			else out << "public: ";
			if (!func.isConstReturn)
			{
				out << "FORCE_INLINE operator __IdxT() { return ";
				GET_ELEMENT_AT;
				out << "; }\n" << std::string(depth, '\t');
				out << "FORCE_INLINE operator const __IdxT() const { return ";
				GET_ELEMENT_AT;
				out << "; }\n" << std::string(depth, '\t');
			}
			else
			{
				out << "FORCE_INLINE operator __IdxT() const { return ";
				GET_ELEMENT_AT;
				out << "; }\n" << std::string(depth, '\t');
			}
			out << "FORCE_INLINE decltype(auto) __ref() { return "; GET_ELEMENT_AT; out << "; }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) __ref() const { return ";
			out << "const_cast<std::remove_cvref_t<decltype(_parent)> const&>(_parent).getAt(";
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				bool first = true;
				if (auto t = param->theTypeId())
				{
					if (!first) out << ", ";
					first = false;
					out << "_" << param->Identifier()->getText();
				}
			}
			out << "); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator+() const requires requires(__IdxT t) {t = +t;} { return +__ref(); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator-() const requires requires(__IdxT t) {t = -t;} { return -__ref(); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator~() const requires requires(__IdxT t) {t = ~t;} { return ~__ref(); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t+u;} { return __ref() + std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t-u;} { return __ref() - std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t*u;} { return __ref() * std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t/u;} { return __ref() / std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t%u;} { return __ref() % std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t&u;} { return __ref() & std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t|u;} { return __ref() | std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t^u;} { return __ref() ^ std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t<<u;} { return __ref() << std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t>>u;} { return __ref() >> std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator[](_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) { t[u];} { return __ref()[std::forward<_ElemRight>(other)]; }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator[](_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t[u];} { return __ref()[std::forward<_ElemRight>(other)]; }\n" << std::string(depth, '\t');
			out << "template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) { return __ref()(std::forward<Args>(other)...); }\n" << std::string(depth, '\t');
			out << "template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) const { return __ref()(std::forward<Args>(other)...); }\n" << std::string(depth, '\t');
			out << "template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_" << func.pos.line << "<__IdxT>& elem) { return stream << elem.__ref(); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator*() requires requires(__IdxT t) {*t;} { return *__ref(); }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE decltype(auto) operator&() requires requires(__IdxT t) {&t;} { return &__ref(); }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE bool operator==(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t==u;} { return __ref() == other; }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE bool operator!=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t!=u;} { return __ref() != other; }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE bool operator<(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t<u;} { return __ref() < other; }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE bool operator<=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t<=u;} { return __ref() <= other; }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE bool operator>(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t>u;} { return __ref() > other; }\n" << std::string(depth, '\t');
			out << "template<class _ElemRight> FORCE_INLINE bool operator>=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t>=u;} { return __ref() >= other; }\n" << std::string(depth, '\t');
			out << "FORCE_INLINE explicit operator bool() const requires(!std::is_same_v<__IdxT,bool>) { return static_cast<bool>(__ref()); }\n" << std::string(depth, '\t');

			out << "\n" << std::string(--depth, '\t') << "};\n\n" << std::string(depth, '\t');
			out << "friend struct __IndexerAccessor_" << func.pos.line << "<";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << ">;\n" << std::string(depth, '\t');

			bool isInline = false;
			bool isConstexpr = false;
			if (auto body = func.indexerGetter->functionBody())
			{
				if (body->Equal()) {
					isInline = true;
					isConstexpr = true;
				}
				else if (body->Assign())
				{
					isInline = true;
				}
			}
			else if (auto body = func.indexerGetter->shortFunctionBody())
			{
				if (body->Equal()) {
					isInline = true;
					isConstexpr = true;
				}
				else if (body->Assign())
				{
					isInline = true;
				}
			}
			isUnsafe = func.isUnsafe;
			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}
			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}
			else if (!DLLName.empty() && !func.templateParams && !type->templateParams)
			{
				if (func.access == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << " getAt(";
			printParamDeclClause(func.indexerParams);
			out << ")";
			if (func.isOverride) out << " override";
			if (func.isFinal) out << " final";
			out << ";\n" << std::string(depth, '\t');
			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}
			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}
			else if (!DLLName.empty() && !func.templateParams)
			{
				if (func.access == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}
			if (!func.isConstReturn) out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << " getAt(";
			printParamDeclClause(func.indexerParams);
			out << ") const";
			if (func.isOverride) out << " override";
			if (func.isFinal) out << " final";
			out << ";\n" << std::string(depth, '\t');
			isInline = false;
			isConstexpr = false;
			if (auto body = func.indexerSetter->functionBody())
			{
				if (body->Equal()) {
					isInline = true;
					isConstexpr = true;
				}
				else if (body->Assign())
				{
					isInline = true;
				}
			}
			else if (auto body = func.indexerSetter->shortFunctionBody())
			{
				if (body->Equal()) {
					isInline = true;
					isConstexpr = true;
				}
				else if (body->Assign())
				{
					isInline = true;
				}
			}
			out << "template<class _ElemRight> ";
			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}
			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}
			else if (!DLLName.empty() && !func.templateParams)
			{
				if (func.access == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}
			out << "void setAt(";
			printParamDeclClause(func.indexerParams);
			out << ", const _ElemRight& value)";
			if (func.isOverride) out << " override";
			if (func.isFinal) out << " final";
			out << ";\n" << std::string(depth, '\t');
		}
		out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		switch (func.access)
		{
		case AccessSpecifier::Public:
		case AccessSpecifier::Internal:
			out << "public: ";
			break;
		case AccessSpecifier::Private:
			out << "private: ";
			break;
		}
		isUnsafe = func.isUnsafe;
		if (isUnsafe)
		{
			out << "[[clang::annotate(\"unsafe\")]] ";
		}

		if (func.varargs >= 0)
		{
			out << "[[clang::annotate(\"varargs:" << (int)func.varargs << "\")]] ";
		}

		isFunctionDeclaration = true;
		if (func.templateParams) {
			printTemplateParams(func.templateParams);
			out << " ";
		}
		else if (func.templateSpecializationArgs)
		{
			out << "template<> ";
		}

		if (func.isConsteval)
		{
			out << "inline consteval ";
		}
		else if (func.isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (func.isInline || func.indexerSetter)
		{
			out << "inline ";
		}
		else if (!DLLName.empty() && !func.templateParams)
		{
			if (func.access == AccessSpecifier::Public) out << DLLName << "_API ";
			else out << DLLName << "_HIDDEN ";
		}

		if (func.isStatic) out << "static ";

		bool isRegularMethod = !func.isConstructor && !func.isDestructor && !func.isConverter;
		if (isRegularMethod) out << "auto ";
		else if (func.implicitSpecification)
		{
			printImplicitSpecification(func.implicitSpecification);
			out << " ";
		}
		else if (func.isConverter || func.isConstructor && func.params->paramDeclClause() && func.params->paramDeclClause()->paramDeclList()->paramDeclaration().size() == 1)
		{
			out << "explicit ";
		}
		if (func.isConverter)
		{
			out << "operator ";
			printTypeId(func.returnType);
			if (func.isConstReturn) out << " const&";
			else if (func.isRefReturn) out << " &";
		}
		else out << func.id;
		if (func.id.ends_with(" new") || func.id.ends_with(" delete")) isNewDeleteOperator = true;
		if (func.templateSpecializationArgs) {
			out << "<";
			printTemplateArgumentList(func.templateSpecializationArgs);
			out << ">";
		}
		bool isIndexer = func.indexerParams;
		if (func.params) printFunctionParameters(func.params);
		else if (isIndexer)
		{
			out << "(";
			printParamDeclClause(func.indexerParams);
			out << ")";
		}
		else out << "()";
		isVariadicTemplate = false;
		isFunctionDeclaration = false;
		out << " ";
		if (!func.isStatic) {
			if (!isIndexer && !func.isMutating || isIndexer && func.isConstReturn) out << "const ";
		}
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		if (isRegularMethod)
		{
			out << " -> ";
			if (func.isConstReturn) out << "const ";
			if (func.indexerSetter)
			{
				out << "__IndexerAccessor_" << func.pos.line << "<";
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";
				out << ">";
			}
			else if (func.returnType)
			{
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";
			}
			else if (func.isForwardReturn)
			{
				out << "decltype(auto)";
			}
			else if (func.expression && func.id != "operator delete")
			{
				out << "decltype(auto)";
			}
			else
			{
				out << "void";
			}
		}
		else if (func.isDefault)
		{
			out << " = default";
		}

		if (!func.isStatic && func.isRefReturn)
			out << " LIFETIMEBOUND";
		out << ";";
		out << std::endl << std::string(depth, '\t');
		if (func.id == "operator++" || func.id == "operator--")
		{
			switch (func.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}

			isFunctionDeclaration = true;
			if (func.isConsteval)
			{
				out << "inline consteval ";
			}
			else if (func.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else
			{
				out << "inline ";
			}

			out << "auto " << func.id << "(int) ";
			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> " << type->id << ";" << std::endl << std::string(depth, '\t');
		}
		else if (isIndexer && !func.isStatic && !func.isConstReturn && !func.isMutating)
		{
			switch (func.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}

			isFunctionDeclaration = true;
			if (func.isConsteval)
			{
				out << "inline consteval ";
			}
			else if (func.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (func.isInline || func.indexerSetter)
			{
				out << "inline ";
			}
			else if (!DLLName.empty() && !func.templateParams)
			{
				if (func.access == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			out << "auto " << func.id << "(";
			printParamDeclClause(func.indexerParams);
			out << ") const ";
			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> const ";
			if (func.indexerSetter)
			{
				out << "__IndexerAccessor_" << func.pos.line << "<";
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";
				out << ">";
			}
			else {
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";
			}
			out << ";" << std::endl << std::string(depth, '\t');
		}
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
		isNewDeleteOperator = false;
	}
	out << "\n" << std::string(--depth, '\t') << "};";
	
	if (!type->compilationCondition.empty())
	{
		out << "#endif " << std::endl;
	}
}

void CppAdvanceCodegen::printTypeDefinitions() const
{
	out.switchTo(true);
	if (!sema.namedTuples.empty())
	{
		out << "//###############################################################################\n";
		out << "//# Type definitions\n";
		out << "//###############################################################################\n";
	}
	for (const auto& type : sema.globalStructs)
	{
		out.switchTo(true);
		if (type->access == AccessSpecifier::Private) {
			out.switchTo(false);
			isPrivateStruct = true;
		}
		else
		{
			isPrivateStruct = false;
		}
		isUnsafe = type->isUnsafe;

		if (type->access == AccessSpecifier::Protected) {
			out << "namespace __" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << " { \n" << std::string(++depth, '\t');
		}
		else if (isUnsafe)
		{
			out << "namespace __Unsafe { \n" << std::string(++depth, '\t');
		}

		selfConstants.clear();
		printType(type.get());
		if (!type->compilationCondition.empty())
		{
			out << "#if " << type->compilationCondition << std::endl;
		}
		for (const auto& constant : selfConstants)
		{
			out << "\n" << std::string(depth, '\t');
			if (!constant.compilationCondition.empty())
			{
				out << "#if " << constant.compilationCondition << std::endl << std::string(depth, '\t');
			}
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
			}
			else if (type->templateSpecializationArgs)
			{
				out << "template<> ";
			}
			auto parentType = constant.parentType;
			StringReplace(parentType, ".", "::");
			out << "inline constexpr " << parentType << " " << parentType << "::" << constant.id << " = ";
			currentDeclarationName = constant.id;
			printInitializerClause(constant.initializer);
			out << ";" << std::endl << std::string(depth, '\t');
			if (!constant.compilationCondition.empty())
			{
				out << "#endif " << std::endl << std::string(depth, '\t');
			}
			currentDeclarationName.clear();
		}
		if (!type->compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}

		if (type->access == AccessSpecifier::Protected || type->isUnsafe) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
		sema.symbolContexts.pop();
	}
	isUnsafe = false;
	for (const auto&[id,tuple] : sema.namedTuples)
	{
		out.switchTo(true);
		if (tuple.access == AccessSpecifier::Private) {
			out.switchTo(false);
		}
		if (tuple.access == AccessSpecifier::Protected) {
			out << "namespace __" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << " { ";
		}
		out << "namespace __ntuples {\n" << std::string(++depth, '\t');
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
        out << "struct " << tuple.id << " {";
		++depth;
		for (const auto& [field,type] : tuple.fields)
		{
			out << "\n" << std::string(depth, '\t');
			printTypeId(type);
			out << " " << field << ";";
		}
		out << "\n" << std::string(depth, '\t') << "FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }";
		out << "\n" << std::string(depth, '\t') << "FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }";
		out << "\n" << std::string(--depth, '\t') << "};" << "\n" << std::string(--depth,'\t') << "}";
		if (tuple.access == AccessSpecifier::Protected) out << " } ";
		out << std::endl;
		auto fullName = id;
		StringReplace(fullName, ".", "::");
		out << "namespace std {\n" << std::string(++depth, '\t');
		out << "template <> struct tuple_size<" << fullName << "> : integral_constant<size_t, " << tuple.fields.size() << "> {};\n" << std::string(depth, '\t');
		out << "template <size_t I> auto& get("<< fullName << "&);\n" << std::string(depth, '\t');
		out << "template <size_t I> const auto& get(const " << fullName << "&);\n" << std::string(depth, '\t');
		int i = 0;
		for (const auto& [field, type] : tuple.fields) {
			out << "template <> struct tuple_element<" << i << ", " << fullName << "> { using type = ";
			printTypeId(type);
			out << "; };\n" << std::string(depth, '\t');
			out << "template <> inline auto& get<" << i << ">(" << fullName << "& t) { return t." << field << "; }\n" << std::string(depth, '\t');
			out << "template <> inline const auto& get<" << i++ << ">(const " << fullName << "& t) { return t." << field << "; }\n" << std::string(depth, '\t');
		}

		out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
	}
	isUnsafe = false;
	depth = 0;
}

void CppAdvanceCodegen::printVersions() const
{
	out.switchTo(true);
	if (!sema.versions.empty())
	{
		out << "//###############################################################################\n";
		out << "//# Versions\n";
		out << "//###############################################################################\n";
	}
	for (const auto& ver : sema.versions)
	{
		out.switchTo(true);
		if (ver.access == AccessSpecifier::Private) {
			out.switchTo(false);
		}
		if (!ver.compilationCondition.empty())
		{
			out << "#if " << ver.compilationCondition << std::endl;
		}
		if (ver.isDefault) {
			out << "#ifndef ADV_VERSION_";
			if (ver.access == AccessSpecifier::Protected) out << "__" << StringUpper(filename) << "_PROTECTED_";
			out << ver.id << std::endl;
		}
		out << "#line " << ver.pos.line << " \"" << filename << ".adv\"\n";
		out << "#define ADV_VERSION_";
		if (ver.access == AccessSpecifier::Protected) out << "__" << StringUpper(filename) << "_PROTECTED_";
		out << ver.id << " " << ver.value;
		out << std::endl;
		if (ver.isDefault) out << "#endif\n";
		if (!ver.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
}

void CppAdvanceCodegen::print() const
{
	symbolTable.clear();

	//.h header
	out.switchTo(true);
	out << "#pragma once\n";
	out << "#include \"CppAdvance.h\"\n";
	if (!DLLName.empty())
	{
		out << "#include \"" << DLLName << "_export.h\"\n";
	}
	out << std::endl << "namespace __Unsafe {} namespace __" << filename << "_Protected__Unsafe {}" << std::endl;

	//.cpp header
	out.switchTo(false);
	out << "#include \"" << filename << ".h\"\n\n";

	sema.symbolContexts.push({});

	//versions
	printVersions();

	//type forward declarations
	printForwardDeclarations();

	//global type aliases
	printGlobalTypeAliases();

	//type definitions
	printTypeDefinitions();

	//global functions
	printGlobalFunctions();

	//global consts
	printGlobalConstants();

	//global vars
	printGlobalVariables();

	out.switchTo(true);
	out << "//###############################################################################\n";
	out << "//# Function definitions\n";
	out << "//###############################################################################\n";

	out << std::endl;
	out.switchTo(false);
	depth = 0;
	printDeclarationSeq(sema.ast->declarationSeq());
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printDeclarationSeq(CppAdvanceParser::DeclarationSeqContext* ctx) const
{
	for (auto declaration : ctx->declaration())
	{
		emptyLine = false;
		isVolatile = false;
		printDeclaration(declaration);
		if(!emptyLine) out << "\n";
	}
}

void CppAdvanceCodegen::printDeclaration(CppAdvanceParser::DeclarationContext* ctx) const
{
	if (auto decl = ctx->blockDeclaration())
	{
		printBlockDeclaration(decl);
	}
	else if (auto type = ctx->structDefinition())
	{
		printStructDefinition(type);
	}
	else if (auto func = ctx->functionDefinition())
	{
		printFunctionDefinition(func);
	}
	else if (auto ext = ctx->externVariableDeclaration())
	{
		printExternVariableDeclaration(ext);
	}
	else if (auto ext = ctx->externFunctionDeclaration())
	{
		printExternFunctionDeclaration(ext);
	}
	else if (auto compound = ctx->declarationCompoundStatement())
	{
		if (ctx->Unsafe() || ctx->symbolSpecifierSeq() && ctx->symbolSpecifierSeq()->Unsafe()) isUnsafe = true;
		printDeclarationCompoundStatement(compound);
		isUnsafe = false;
	}
	else if (ctx->versionDefinition())
	{
		emptyLine = true;
	}
	else if (auto condition = ctx->versionConditionalDeclaration())
	{
		if (auto decl = condition->versionIfDeclaration()->declaration()) {
			if (auto func = decl->functionDefinition())
			{
				printFunctionDefinition(func);
			}
			if (auto elseBranch = condition->versionElseDeclaration())
			{
				decl = elseBranch->declaration();
				if (auto func = decl->functionDefinition())
				{
					printFunctionDefinition(func);
				}
			}
		}
	}
}

void CppAdvanceCodegen::printBlockDeclaration(CppAdvanceParser::BlockDeclarationContext* ctx) const
{
	if (auto decl = ctx->simpleDeclaration())
	{
		printSimpleDeclaration(decl);
	}
	else if (auto decl = ctx->deconstructionDeclaration())
	{
		printDeconstructionDeclaration(decl);
	}
	else if (auto decl = ctx->refDeclaration())
	{
		printRefDeclaration(decl);
	}
	else if (auto decl = ctx->multiDeclaration())
	{
		printMultiDeclaration(decl);
	}
	else if (auto decl = ctx->constantDeclaration())
	{
		printConstantDeclaration(decl);
	}
	else if (auto decl = ctx->forwardVarDeclaration())
	{
		printForwardVarDeclaration(decl);
	}
	else if (auto decl = ctx->aliasDeclaration())
	{
		printAliasDeclaration(decl);
	}
	isVolatile = false;
}

void CppAdvanceCodegen::printDeclSpecifierSeq(CppAdvanceParser::DeclSpecifierSeqContext* ctx) const
{
	bool isConst = false;
	for (auto spec : ctx->declSpecifier())
	{
		if (spec->Const() || spec->Let()) {
			isConst = true;
			continue;
		}
		printDeclSpecifier(spec);
		out << " ";
	}
	if (isConst) out << "const ";
}

void CppAdvanceCodegen::printDeclSpecifier(CppAdvanceParser::DeclSpecifierContext* ctx) const
{
	if (ctx->Mutable())
	{
		out << "mutable";
	}
	else if (ctx->Static())
	{
		out << "static";
	}
	else if (ctx->Thread_local())
	{
		out << "thread_local";
	}
	else if (ctx->Volatile())
	{
		isVolatile = true;
		out << "volatile";
	}
}

void CppAdvanceCodegen::printExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext* ctx) const
{
	if (!functionBody) out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	out << "extern ";
	isDeclaration = true;
	printTypeId(ctx->theTypeId());
	isDeclaration = false;
	out << " " << ctx->Identifier()->getText();
	if (ctx->theTypeId()->arrayDeclarator()) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
	out << ";";
}

void CppAdvanceCodegen::printExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext* ctx) const
{
	if (!functionBody) out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	out << "extern auto " << ctx->Identifier()->getText();
	printFunctionParameters(ctx->functionParams());
	if (ctx->exceptionSpecification()) printExceptionSpecification(ctx->exceptionSpecification());
	out << " -> ";
	auto ret = ctx->returnType();
	if (ret->Const()) out << "const ";
	if (auto tid = ret->theTypeId())
	{
		printTypeId(tid);
	}
	else
	{
		out << "void";
	}
	if (ret->Ref()) out << "&";
	out << ";";
}

void CppAdvanceCodegen::printStatement(CppAdvanceParser::StatContext* ctx) const
{
	out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	if (sema.prerequisites.contains(ctx))
	{
		for (const auto&[id, type] : sema.prerequisites[ctx])
		{
			out << "CppAdvance::DeferredInit<";
			printTypeId(type);
			out << "> " << id << "; ";
		}
		out << "\n" << std::string(depth, '\t') << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	}
	if (auto decl = ctx->declarationStatement())
	{
		printDeclarationStatement(decl);
	}
	else if(auto expr = ctx->expressionStatement())
	{
		printExpressionStatement(expr);
	}
	else if(auto block = ctx->compoundStatement())
	{
		if (ctx->Unsafe()) isUnsafe = true;
		printCompoundStatement(block);
		isUnsafe = false;
	}
	else if(auto select = ctx->selectionStatement())
	{
		printSelectionStatement(select);
	}
	else if(auto iter = ctx->iterationStatement())
	{
		printIterationStatement(iter);
	}
	else if(auto label = ctx->labeledStatement())
	{
		printLabeledStatement(label);
	}
	else if(auto jump = ctx->jumpStatement())
	{
		printJumpStatement(jump);
	}
	else if(auto try_ = ctx->tryBlock())
	{
		printTryBlock(try_);
	}
	else if(auto select = ctx->versionSelectionStatement())
	{
		printVersionSelectionStatement(select);
	}
}

void CppAdvanceCodegen::printDeclarationStatement(CppAdvanceParser::DeclarationStatementContext* ctx) const
{
	if (auto block = ctx->blockDeclaration())
	{
		printBlockDeclaration(block);
	}
	else if (auto ext = ctx->externVariableDeclaration())
	{
		printExternVariableDeclaration(ext);
	}
	else if (auto ext = ctx->externFunctionDeclaration())
	{
		printExternFunctionDeclaration(ext);
	}
	else if (auto def = ctx->structDefinition())
	{
		printStructDefinition(def);
	}
}

void CppAdvanceCodegen::printDeclarationCompoundStatement(CppAdvanceParser::DeclarationCompoundStatementContext* ctx) const
{
	for (auto decl : ctx->declaration()) {
		printDeclaration(decl);
		if (!emptyLine) out << std::endl;
	}
}

void CppAdvanceCodegen::printCompoundStatement(CppAdvanceParser::CompoundStatementContext* ctx) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
	auto prevLabel = currentLabel;
	currentLabel.clear();
	out << "{";
	if (!prevLabel.empty()) out << "{";
	++depth;
	if (isUnsafe)
		out << "\tusing namespace CppAdvance::Unsafe;\tusing namespace __Unsafe;\tusing namespace __" << filename << "_Protected__Unsafe;";
	bool funcTopLevel = functionProlog;
	if (functionProlog)
	{
		if (isUnsafe)
		{
			out << "\n" << std::string(depth, '\t') << "CppAdvance::CheckForUnsafeContext(); CppAdvance::UnsafeContextGuard __unsafe_context_guard" 
				<< ctx->getStart()->getLine() << "{};";
		}
		for (const auto& [id, type] : refParameters)
		{
			out << "\n" << std::string(depth, '\t');
			printTypeId(type);
			out << "& " << id << " = __" << id << "__;";
		}
		for (const auto& [id, type] : namedReturns)
		{
			out << "\n" << std::string(depth, '\t');
			printTypeId(type);
			out << " " << id << ";";
		}
		functionProlog = false;
	}
	else if (isUnsafe)
	{
		out << "\tCppAdvance::UnsafeContextGuard __unsafe_context_guard" << ctx->getStart()->getLine() << "{};";
	}
	
	isUnsafe = false;
	for (auto stat : ctx->stat()) {
		out << "\n" << std::string(depth, '\t');
		printStatement(stat);
	}

	if (funcTopLevel)
	{
		if (!ctx->stat().empty() && !ctx->stat().back()->jumpStatement() && !namedReturns.empty()) {
			out << "\n" << std::string(depth, '\t') << "return ";
			if (namedReturns.size() == 1)
			{
				out << namedReturns[0].first;
			}
			else
			{
				out << "{";
				bool first = true;
				for (const auto& var : namedReturns)
				{
					if (!first) out << ", ";
					first = false;
					out << var.first;
				}
				out << "}";
			}
			out << ";";
		}
		if (isPropertySetter) out << "\n" << std::string(depth, '\t') << "return *this;";
	}
	out << "\n" << std::string(--depth, '\t') << "}";
	if (!prevLabel.empty()) out << " BREAK_" << prevLabel << ":; }";
	prevLabel = currentLabel;
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printScopeSafeCompoundStatement(CppAdvanceParser::ScopeSafeCompoundStatementContext* ctx) const
{
	bool first = true;
	for (auto stat : ctx->stat()) {
		if(!first) out << "\n" << std::string(depth, '\t');
		printStatement(stat);
		first = false;
	}
}

void CppAdvanceCodegen::printExpressionStatement(CppAdvanceParser::ExpressionStatementContext* ctx) const
{
	if (auto expr = ctx->expr())
	{
		printExpression(expr);
	}
	out << ";";
}

void CppAdvanceCodegen::printSelectionStatement(CppAdvanceParser::SelectionStatementContext* ctx) const
{
	if (ctx->If())
	{
		out << "if " << (ctx->Static() || ctx->Consteval() ? "constexpr " : "") << "(";
		if (ctx->Consteval()) {
			if (ctx->Not()) out << "!";
			out << "std::is_constant_evaluated()";
		}
		else {
			printCondition(ctx->condition());
		}
		out << ") ";
		if (!currentLabel.empty()) out << "{";
		auto prevLabel = currentLabel;
		currentLabel.clear();
		if (auto block = ctx->compoundStatement())
		{
			printCompoundStatement(block);
		}
		else
		{
			out << "{" << std::endl << std::string(++depth, '\t');
			printStatement(ctx->stat());
			out << std::endl << std::string(--depth, '\t') << "}";
		}
		if (ctx->Else())
		{
			out << " else {" << std::endl << std::string(++depth, '\t');
			printStatement(ctx->elseBranch()->stat());
			out << std::endl << std::string(--depth, '\t') << "}";
		}
		if (!prevLabel.empty()) out << " BREAK_" << prevLabel << ":; }";
		currentLabel = prevLabel;
	}
}

void CppAdvanceCodegen::printIterationStatement(CppAdvanceParser::IterationStatementContext* ctx) const
{
	auto prevLabel = currentLabel;
	currentLabel.clear();
	if (ctx->Do())
	{
		out << "do ";
		if (!prevLabel.empty()) out << "{";
		out << "\n" << std::string(depth, '\t');
		auto stat = ctx->stat();
		if (stat->compoundStatement())
		{
			printStatement(stat);
		}
		else
		{
			out << "{\n" << std::string(++depth, '\t');
			printStatement(stat);
			out << "\n" << std::string(--depth, '\t') << "}";
		}
		if (!prevLabel.empty())
		{
			out << " ADV_LOOP_LABELS(" << prevLabel << ") }";
		}
		out << " while (";
		printLogicalOrExpression(ctx->doWhileCondition()->logicalOrExpression());
		out << ");";
	}
	else if (ctx->While())
	{
		out << "while (";
		printLoopCondition(ctx->whileCondition());
		out << ") ";
		if (!prevLabel.empty()) out << "{";
		out << "\n" << std::string(depth, '\t');
		if (auto compound = ctx->compoundStatement())
		{
			printCompoundStatement(compound);
		}
		else
		{
			out << "{\n" << std::string(++depth, '\t');
			printStatement(ctx->stat());
			out << "\n" << std::string(--depth, '\t') << "}";
		}
		if (!prevLabel.empty())
		{
			out << " ADV_LOOP_LABELS(" << prevLabel << ") }";
		}
	}
	else if (ctx->For())
	{
		out << "for (";
		if (ctx->In())
		{
			if (auto init = ctx->forInitStatement())
			{
				printForInitStatement(init);
				out << "; ";
			}
			auto decl = ctx->forRangeDeclaration();
			if (decl->Amp() && !decl->Const() && !decl->Let())
			{
				out << "auto& ";
			}
			else
			{
				out << "const auto& ";
			}
			auto ids = decl->identifierSeq()->Identifier();
			if (ids.size() == 1)
			{
				out << ids[0]->getText();
			}
			else
			{
				out << "[";
				bool first = true;
				for (auto id : ids) {
					if (!first) out << ", ";
					out << id->getText();
					first = false;
				}
				out << "]";
			}
			out << " : ";
			auto coll = ctx->forRangeInitializer();
			if (auto expr = coll->logicalOrExpression())
			{
				printLogicalOrExpression(expr);
			}
			else
			{
				printBracedInitList(coll->bracedInitList());
			}
			out << ") ";
		}
		else if (auto init = ctx->forInitStatement())
		{
			printForInitStatement(init);
			if (auto condition = ctx->whileCondition())
			{
				printLoopCondition(condition);
			}
			out << "; ";
			if (auto expr = ctx->expressionSeq())
			{
				printExpressionSeq(expr);
			}
			out << ") ";
		}
		else
		{
			out << ";;) ";
		}
		if (!prevLabel.empty()) out << "{";
		out << std::endl << std::string(depth, '\t');
		if (auto compound = ctx->compoundStatement())
		{
			printCompoundStatement(ctx->compoundStatement());
		}
		else
		{
			out << "{\n" << std::string(++depth, '\t');
			printStatement(ctx->stat());
			out << "\n" << std::string(--depth, '\t') << "}";
		}
		if (!prevLabel.empty())
		{
			out << " ADV_LOOP_LABELS(" << prevLabel << ") }";
		}
	}
	currentLabel = prevLabel;
}

void CppAdvanceCodegen::printForInitStatement(CppAdvanceParser::ForInitStatementContext* ctx) const
{
	if (auto expr = ctx->logicalOrExpression())
	{
		printLogicalOrExpression(expr);
		out << "; ";
	}
	else if (auto decl = ctx->blockDeclaration())
	{
		printBlockDeclaration(decl);
	}
	else
	{
		out << "; ";
	}
}

void CppAdvanceCodegen::printVersionSelectionStatement(CppAdvanceParser::VersionSelectionStatementContext* ctx) const
{
	out << "#if ";
	if (auto condition = ctx->condition())
	{
		isVersionCondition = true;
		printCondition(ctx->condition());
		isVersionCondition = false;
		out << std::endl << std::string(depth, '\t');
		printVersionSelectionStatementBlock(ctx->versionSelectionStatementBlock(0));
	}
	else if (ctx->Debug())
	{
		if (ctx->Not()) out << "!";
		if (auto id = ctx->Identifier())
		{
			out << "ADV_DEBUG_" << id->getText();
		}
		else
		{
			out << "_DEBUG";
		}
		out << std::endl << std::string(depth, '\t');
		printScopeSafeCompoundStatement(ctx->scopeSafeCompoundStatement());
	}
	if (ctx->Else())
	{
		out << std::endl << std::string(depth, '\t') << "#else" << std::endl << std::string(depth, '\t');
		printVersionSelectionStatementBlock(ctx->versionSelectionStatementBlock().back());
	}
	out << std::endl << std::string(depth, '\t') << "#endif";
}

void CppAdvanceCodegen::printVersionSelectionStatementBlock(CppAdvanceParser::VersionSelectionStatementBlockContext* ctx) const
{
	if (auto compound = ctx->scopeSafeCompoundStatement())
	{
		printScopeSafeCompoundStatement(compound);
	}
	else
	{
		printStatement(ctx->stat());
	}
}

void CppAdvanceCodegen::printLabeledStatement(CppAdvanceParser::LabeledStatementContext* ctx) const
{
	auto label = ctx->Identifier()->getText();
	auto prevLabel = currentLabel;
	currentLabel = label;
	if (auto iter = ctx->iterationStatement())
	{
		printIterationStatement(iter);
	}
	else if (auto select = ctx->selectionStatement())
	{
		printSelectionStatement(select);
	}
	else if (auto compound = ctx->compoundStatement())
	{
		printCompoundStatement(compound);
	}
	currentLabel = prevLabel;
}

void CppAdvanceCodegen::printJumpStatement(CppAdvanceParser::JumpStatementContext* ctx) const
{
	if (ctx->Return())
	{
		out << "return ";
		if (auto expr = ctx->expr())
		{
			printExpression(expr);
		}
		else if (auto init = ctx->bracedInitList())
		{
			printBracedInitList(init);
		}
		else if (!namedReturns.empty())
		{
			if (namedReturns.size() == 1) {
				out << namedReturns.begin()->first;
			}
			else
			{
				out << "{";
				bool first = true;
				for (const auto& var : namedReturns)
				{
					if (!first) out << ", ";
					first = false;
					out << var.first;
				}
				out << "}";
			}
		}
	}
	else if (ctx->Break())
	{
		if (auto id = ctx->Identifier())
		{
			out << "goto BREAK_" << id->getText();
		}
		else
		{
			out << "break";
		}
	}
	else if (ctx->Continue())
	{
		if (auto id = ctx->Identifier())
		{
			out << "goto CONTINUE_" << id->getText();
		}
		else
		{
			out << "continue";
		}
	}
	out << ";";
}

void CppAdvanceCodegen::printTryBlock(CppAdvanceParser::TryBlockContext* ctx) const
{
	out << "try \n" << std::string(depth,'\t');
	printCompoundStatement(ctx->compoundStatement());
	for (auto handler : ctx->exceptionHandler())
	{
		printExceptionHandler(handler);
	}
}

void CppAdvanceCodegen::printExceptionHandler(CppAdvanceParser::ExceptionHandlerContext* ctx) const
{
	if (!ctx->exceptionDeclaration()->Or().empty())
	{
		auto size = ctx->exceptionDeclaration()->simpleTypeSpecifier().size();
		for (int i =0; i < size; ++i)
		{
			out << " catch (";
			printExceptionDeclaration(ctx->exceptionDeclaration(),i);
			out << ") \n" << std::string(depth, '\t');
			printCompoundStatement(ctx->compoundStatement());
		}
	}
	else
	{
		out << " catch (";
		printExceptionDeclaration(ctx->exceptionDeclaration());
		out << ") \n" << std::string(depth, '\t');
		printCompoundStatement(ctx->compoundStatement());
	}
}

void CppAdvanceCodegen::printExceptionDeclaration(CppAdvanceParser::ExceptionDeclarationContext* ctx, int i) const
{
	if (ctx->Ellipsis())
	{
		out << "...";
	}
	else
	{
		out << "const ";
		if (auto t = ctx->simpleTypeSpecifier(i))
		{
			printSimpleTypeSpecifier(t);
		}
		else
		{
			out << "std::exception";
		}
		out << "& " << ctx->Identifier()->getText();
	}
}

void CppAdvanceCodegen::printCondition(CppAdvanceParser::ConditionContext* ctx) const
{
	if (auto decl = ctx->simpleDeclaration())
	{
		printSimpleDeclaration(decl);
	}
	if (auto expr = ctx->logicalOrExpression())
	{
		printLogicalOrExpression(expr);
	}
	if (auto decl = ctx->declarator())
	{
		printDeclarator(decl);
	}
}

void CppAdvanceCodegen::printLoopCondition(CppAdvanceParser::WhileConditionContext* ctx) const
{
	if (auto expr = ctx->logicalOrExpression())
	{
		printLogicalOrExpression(expr);
	}
	else
	{
		printDeclarator(ctx->declarator());
	}
}

void CppAdvanceCodegen::printDeclarator(CppAdvanceParser::DeclaratorContext* ctx) const
{
	const auto& ids = ctx->identifierSeq()->Identifier();

	bool first = true;
	bool isArray = false;
	for (auto idctx : ids)
	{
		auto id = idctx->getText();
		if (ctx->Const() || ctx->Let())
		{
			out << "const ";
		}
		if (auto t = ctx->theTypeId())
		{
			symbolTable[id] = t->getText();
			isDeclaration = true;
			printTypeId(t);
			isDeclaration = false;
			isArray = t->arrayDeclarator();
			out << " ";
		}
		else
		{
			symbolTable[id] = "";
			out << "auto ";
		}
		currentType = symbolTable[id];
		out << id;
		if (isArray) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
		if (auto expr = ctx->initializerClause())
		{
			out << " = ";
			if (first)
			{
				printInitializerClause(ctx->initializerClause());
			}
			else
			{
				out << ids[0]->getText();
			}
		}
		first = false;
	}
}

void CppAdvanceCodegen::printTemplateParams(CppAdvanceParser::TemplateParamsContext* ctx) const
{
	out << "template<";
	bool first = true; 
	isTemplateParamDeclaration = true;
	for (auto decl : ctx->templateParamDeclaration())
	{
		if (!first) out << ", ";
		first = false;
        printTemplateParamDeclaration(decl);
	}
	out << ">";
	isTemplateParamDeclaration = false;
}

void CppAdvanceCodegen::printTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext* ctx) const
{
	if (auto ttp = ctx->templateParams())
	{
		printTemplateParams(ttp);
		out << " ";
	}

	if (auto t = ctx->templateTypename())
	{
		if (auto name = t->theTypeId())
		{
			printTypeId(name);
		}
		else
		{
			out << "class";
		}
	}
	else if (auto expr = ctx->conditionalExpression())
	{
		out << "decltype(";
		printConditionalExpression(expr);
		out << ")";
	}
	else
	{
		out << "class";
	}
	if (ctx->Ellipsis()) {
		out << "...";
		isVariadicTemplate = true;
	}
	out << " " << ctx->Identifier()->getText();

	if (isFunctionDeclaration && ctx->Assign())
	{
		bool prev = isTemplateParamDeclaration;
		isTemplateParamDeclaration = false;
		out << " = ";
		if (auto type = ctx->theTypeId())
		{
			printTypeId(type);
		}
		else
		{
			printConditionalExpression(ctx->conditionalExpression());
		}
		isTemplateParamDeclaration = prev;
	}
}

void CppAdvanceCodegen::printTemplateIdentifier(CppAdvanceParser::TemplateIdContext* ctx) const
{
	printSimpleTemplateId(ctx->simpleTemplateId());
}

void CppAdvanceCodegen::printSimpleTemplateId(CppAdvanceParser::SimpleTemplateIdContext* ctx) const
{
	out << ctx->templateName()->getText() << "<";
	if (auto args = ctx->templateArgumentList())
	{
		printTemplateArgumentList(args);
	}
	out << ">";
}

void CppAdvanceCodegen::printClassName(CppAdvanceParser::ClassNameContext* ctx) const
{
	if (auto id = ctx->simpleTemplateId())
	{
		printSimpleTemplateId(id);
	}
	else
	{
		out << ctx->Identifier()->getText();
	}
}

void CppAdvanceCodegen::printStructDefinition(CppAdvanceParser::StructDefinitionContext* ctx) const
{
	isStructDeclaration = functionBody;
	currentAccessSpecifier = std::nullopt;
	if (isStructDeclaration)
	{
		printStructHead(ctx->structHead());
		out << "\n" << std::string(depth++, '\t') << "{" << "\n" << std::string(depth, '\t');
		out << "private: using __self = "; 
		printClassName(ctx->structHead()->className());
		out << ";\n" << std::string(depth, '\t');
		out << "public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(depth, '\t');
	}
	
	if (ctx->structMemberSpecification())
		printStructMemberSpecification(ctx->structMemberSpecification());
	if (functionBody) {
		if (depth > 0) --depth;
		out << "\n" << std::string(depth, '\t') << "};";
	}
}

void CppAdvanceCodegen::printStructHead(CppAdvanceParser::StructHeadContext* ctx) const
{
	if (!isStructDeclaration) return;
	if (auto tparams = ctx->templateParams())
	{
		printTemplateParams(tparams);
		out << " ";
	}
	else if (auto name = ctx->className())
	{
		if (name->simpleTemplateId())
		{
			out << "template<> ";
		}
	}
	out << "struct ";
	printClassName(ctx->className());
	if (ctx->Ref())
	{
		out << " : public CppAdvance::RefStruct";
	}
	else
	{
		out << " : public CppAdvance::Struct";
	}
}

void CppAdvanceCodegen::printStructMemberSpecification(CppAdvanceParser::StructMemberSpecificationContext* ctx) const
{
	for (auto decl : ctx->structMemberDeclaration())
	{
		if (isStructDeclaration) out << "#line " << decl->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
        printStructMemberDeclaration(decl);
		if (isStructDeclaration) out << "\n" << std::string(depth, '\t');
	}
}

void CppAdvanceCodegen::printStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext* ctx) const
{
	auto prevAccess = currentAccessSpecifier;
	if (ctx->protectedInternal()) {
		currentAccessSpecifier = AccessSpecifier::ProtectedInternal;
	}
	else if (auto access = ctx->accessSpecifier())
	{
		if (access->Public()) currentAccessSpecifier = AccessSpecifier::Public;
		else if (access->Internal()) currentAccessSpecifier = AccessSpecifier::Internal;
		else if (access->Protected()) currentAccessSpecifier = AccessSpecifier::Protected;
		else if (access->Private()) currentAccessSpecifier = AccessSpecifier::Private;
	}
	if (auto compound = ctx->memberDeclarationCompoundStatement())
	{
		currentAccessSpecifier = std::nullopt;
		if (auto access = ctx->symbolSpecifierSeq()->accessSpecifier()) {
			if (access->Public()) currentAccessSpecifier = AccessSpecifier::Public;
			else if (access->Internal()) currentAccessSpecifier = AccessSpecifier::Internal;
			else if (access->Protected()) currentAccessSpecifier = AccessSpecifier::Protected;
			else if (access->Private()) currentAccessSpecifier = AccessSpecifier::Private;
		}
		printMemberDeclarationCompoundStatement(compound);
	}
	else if (auto member = ctx->memberBlockDeclaration())
	{
		if (isStructDeclaration)
		{
			printMemberBlockDeclaration(member);
		}
	}
	else if (auto func = ctx->functionDefinition())
	{
		printFunctionDefinition(func);
	}
	else if (auto func = ctx->constructor())
	{
		if (!isStructDeclaration) printConstructor(func);
	}
	else if (auto func = ctx->conversionFunction())
	{
		if (isStructDeclaration)
		{

		}
		else
		{
			printConversionFunction(func);
		}
	}
	else if (auto func = ctx->indexer())
	{
		if (isStructDeclaration)
		{

		}
		else
		{
			printIndexer(func);
		}
	}
	else if (auto prop = ctx->property())
	{
		if (isStructDeclaration)
		{

		}
		else
		{
			printProperty(prop);
		}
	}
	else if (auto func = ctx->functionTemplateDeclaration())
	{
		if (isStructDeclaration)
		{
			printFunctionTemplateDeclaration(func);
		}
	}
	else if (auto vdecl = ctx->memberVersionConditionalDeclaration())
	{
		if (isStructDeclaration) {
			out << "#if ";
			if (vdecl->condition())
			{
				isVersionCondition = true;
				printCondition(vdecl->condition());
				isVersionCondition = false;
			}

			if (vdecl->Debug())
			{
				if (vdecl->Not()) out << "!";
				if (auto id = vdecl->Identifier())
				{
					out << "ADV_DEBUG_" << id->getText();
				}
				else
				{
					out << "_DEBUG";
				}
			}
			out << std::endl << std::string(depth, '\t');

			if (auto decl = vdecl->memberVersionIfDeclaration()) {
				if (auto member = decl->structMemberDeclaration())
				{
					printStructMemberDeclaration(member);
				}
				else
				{
					printMemberDeclarationCompoundStatement(decl->memberDeclarationCompoundStatement());
				}
			}
			if (auto decl = vdecl->memberVersionElseDeclaration()) {
				out << "#else" << std::endl << std::string(depth, '\t');
				if (auto member = decl->structMemberDeclaration())
				{
					printStructMemberDeclaration(member);
				}
				else
				{
					printMemberDeclarationCompoundStatement(decl->memberDeclarationCompoundStatement());
				}
			}
			out << "#endif" << std::endl << std::string(depth, '\t');
		}
	}
	else if (auto type = ctx->structDefinition())
	{
		printStructDefinition(type);
	}
	currentAccessSpecifier = prevAccess;
}

void CppAdvanceCodegen::printMemberDeclarationCompoundStatement(CppAdvanceParser::MemberDeclarationCompoundStatementContext* ctx) const
{
	for (auto decl : ctx->structMemberDeclaration())
	{
		if (isStructDeclaration) out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		printStructMemberDeclaration(decl);
		if (isStructDeclaration) out << "\n" << std::string(depth, '\t');
	}
}

void CppAdvanceCodegen::printOperator(CppAdvanceParser::OperatorContext* ctx) const
{
	out << ctx->getText();
}

void CppAdvanceCodegen::printOperatorTemplateId(CppAdvanceParser::OperatorTemplateIdContext* ctx) const
{
	printOperatorFunctionId(ctx->operatorFunctionId());
	out << "<";
	if (auto args = ctx->templateArgumentList())
	{
		printTemplateArgumentList(args);
	}
	out << ">";
}

void CppAdvanceCodegen::printOperatorFunctionId(CppAdvanceParser::OperatorFunctionIdContext* ctx) const
{
	out << "operator ";
	printOperator(ctx->operator_());
}

void CppAdvanceCodegen::printConversionFunctionId(CppAdvanceParser::ConversionFunctionIdContext* ctx) const
{
	out << "operator ";
	printTypeId(ctx->theTypeId());
}

void CppAdvanceCodegen::printTemplateArgumentList(CppAdvanceParser::TemplateArgumentListContext* ctx) const
{
	bool first = true;
	for (auto arg : ctx->templateArgument())
	{
		if (!first) out << ", ";
		first = false;
		printTemplateArgument(arg);
	}
}

void CppAdvanceCodegen::printTemplateArgument(CppAdvanceParser::TemplateArgumentContext* ctx) const
{
	if (auto t = ctx->theTypeId())
	{
		printTypeId(t);
	}
	else if (auto expr = ctx->conditionalExpression())
	{
		printConditionalExpression(expr);
	}
	else if (auto id = ctx->idExpression())
	{
		printIdExpression(id);
	}
	if (ctx->Ellipsis()) out << "...";
}

void CppAdvanceCodegen::printConstructor(CppAdvanceParser::ConstructorContext* ctx) const
{
	if (ctx->Default()) return;
	sema.symbolContexts.push(sema.symbolContexts.top());
	bool prevUnsafe = isUnsafe;
	SourcePosition pos = { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() };
	if (sema.methods.contains(pos))
	{
		const MethodDefinition& func = sema.methods[pos];
		if (func.access != AccessSpecifier::Private &&
			(func.isInline || func.templateParams
				|| func.parentTemplateParams || func.parentTemplateSpecializationArgs)) {
			out.switchTo(true);
			emptyLine = true;
		}
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl;
		}
		if (func.isProtectedType) {
			out << "namespace __" << filename << "_Protected" << (func.isUnsafeType ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
		}
		else if (func.isUnsafeType)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
		}

		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (func.parentTemplateParams)
		{
			printTemplateParams(func.parentTemplateParams);
			out << " ";
		}
		else if (func.parentTemplateSpecializationArgs)
		{
			out << "template<> ";
		}
		if (func.templateParams)
		{
			printTemplateParams(func.templateParams);
			out << " ";
		}
		if (func.isConsteval)
		{
			out << "inline consteval ";
		}
		else if (func.isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (func.isInline)
		{
			out << "inline ";
		}

		auto parent = func.parentType;
		StringReplace(parent, ".", "::");
		auto pos = parent.find("<{{specialization}}>");
		if (pos != parent.npos)
		{
			out << parent.substr(0, pos);
			out << "<";
			printTemplateArgumentList(func.parentTemplateSpecializationArgs);
			out << ">";
			out << parent.substr(pos + 20);
		}
		else
		{
			out << parent;
		}
		currentShortType = func.shortType;
		currentTypeWithTemplate = parent;
		out << "::" << func.id;
		isUnsafe = func.isUnsafe;
		printFunctionParameters(func.params);
		isVariadicTemplate = false;
		out << " ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		isUnsafe = func.isUnsafe;
		currentShortType.clear();
		currentTypeWithTemplate.clear();
		currentType = func.id;
		if (auto body = ctx->constructorBody())
		{
			functionProlog = true;
			printConstructorBody(body);
		}
		else
		{
			printDelegatingConstructorBody(ctx->delegatingConstructorBody());
		}
		if (func.isProtectedType || func.isUnsafeType) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	out.switchTo(false);
	isUnsafe = prevUnsafe;
	refParameters.clear();
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printConstructorBody(CppAdvanceParser::ConstructorBodyContext* ctx) const
{
	bool isDelegating = ctx->delegatingConstructorStatement();
	bool isDelegatingThis = false;
	if (isDelegating)
	{
		out << " :\n" << std::string(depth, '\t') << "#line " << ctx->delegatingConstructorStatement()->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		printDelegatingConstructorStatement(ctx->delegatingConstructorStatement());
		isDelegatingThis = ctx->delegatingConstructorStatement()->This();
	}
	bool first = true;
	std::unordered_set<std::string> initializedFields;
	std::unordered_set<CppAdvanceParser::MemberInitializationStatementContext*> initializedMemberStatements;
	std::vector<CppAdvanceParser::MemberInitializationStatementContext*> memberInitializationStatements;
	if (ctx->memberInitializationList())
		memberInitializationStatements = ctx->memberInitializationList()->memberInitializationStatement();
	if (!isDelegatingThis) {
		for (auto init : memberInitializationStatements) {
			auto id = init->Identifier()->getText();
			if (sema.currentFields[ctx].contains(id) && !initializedFields.contains(id))
			{
				if (first && !isDelegating)
					out << " : ";
				else
					out << ", ";
				first = false;
				initializedFields.insert(id);
				initializedMemberStatements.insert(init);
				out << "\n" << std::string(depth, '\t') << "#line " << init->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				printMemberInitializationStatement(init, false);
			}
		}
	}
	bool prev = functionBody;
	functionBody = true;
	out << "\n" << std::string(depth, '\t');
	sema.symbolContexts.push(sema.symbolContexts.top());
	currentLabel.clear();
	out << "{";
	++depth;
	if (isUnsafe)
		out << "\tusing namespace CppAdvance::Unsafe;\tusing namespace __Unsafe;\tusing namespace __" << filename << "_Protected__Unsafe;";
	bool funcTopLevel = functionProlog;
	if (functionProlog)
	{
		if (isUnsafe)
		{
			out << "\n" << std::string(depth, '\t') << "CppAdvance::CheckForUnsafeContext(); CppAdvance::UnsafeContextGuard __unsafe_context_guard"
				<< ctx->getStart()->getLine() << "{};";
		}
		for (const auto& [id, type] : refParameters)
		{
			out << "\n" << std::string(depth, '\t');
			printTypeId(type);
			out << "& " << id << " = __" << id << "__;";
		}
		functionProlog = false;
	}
	else if (isUnsafe)
	{
		out << "\tCppAdvance::UnsafeContextGuard __unsafe_context_guard" << ctx->getStart()->getLine() << "{};";
	}

	isUnsafe = false;
	for (auto stat : memberInitializationStatements) {
		if (initializedMemberStatements.contains(stat)) continue;
		out << "\n" << std::string(depth, '\t') << "#line " << stat->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		printMemberInitializationStatement(stat,true);
	}
	for (auto stat : ctx->stat()) {
		out << "\n" << std::string(depth, '\t');
		printStatement(stat);
	}
	out << "\n" << std::string(--depth, '\t') << "}";
	sema.symbolContexts.pop();
	functionBody = prev;
}

void CppAdvanceCodegen::printDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext* ctx) const
{
	out << " : ";
	if (ctx->delegatingConstructorStatement())
		printDelegatingConstructorStatement(ctx->delegatingConstructorStatement());
	else if (ctx->memberInitializationStatement())
		printMemberInitializationStatement(ctx->memberInitializationStatement());
	out << " {}";
}

void CppAdvanceCodegen::printDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext* ctx) const
{
	if (ctx->This())
	{
		out << currentType;
	}
	else if (ctx->Super())
	{
		//TODO
	}
	out << "(";
	printExpressionList(ctx->expressionList());
	out << ")";
}

void CppAdvanceCodegen::printMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext* ctx, bool insideBody) const
{
	if (ctx->This() && insideBody) out << "this->";
	out << ctx->Identifier()->getText();
	if (insideBody) out << " = ";
	auto txt = ctx->initializerClause()->getText();
	if (refParameters.contains(txt) && !insideBody) {
		out << "(__" << txt << "__)";
	}
	else {
		if (!insideBody) out << "{";
		printInitializerClause(ctx->initializerClause());
		if (insideBody) out << ";";
		else out << "}";
	}
}

void CppAdvanceCodegen::printConversionFunction(CppAdvanceParser::ConversionFunctionContext* ctx) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
	bool prevUnsafe = isUnsafe;
	SourcePosition pos = { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() };
	if (sema.methods.contains(pos))
	{
		const MethodDefinition& func = sema.methods[pos];
		if (func.access != AccessSpecifier::Private &&
			(func.isInline || func.templateParams 
				|| func.parentTemplateParams || func.parentTemplateSpecializationArgs)) {
			out.switchTo(true);
			emptyLine = true;
		}
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl;
		}
		if (func.isProtectedType) {
			out << "namespace __" << filename << "_Protected" << (func.isUnsafeType ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
		}
		else if (func.isUnsafeType)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
		}

		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (func.parentTemplateParams)
		{
			printTemplateParams(func.parentTemplateParams);
			out << " ";
		}
		else if (func.parentTemplateSpecializationArgs)
		{
			out << "template<> ";
		}
		if (func.templateParams)
		{
			printTemplateParams(func.templateParams);
			out << " ";
		}
		if (func.isConsteval)
		{
			out << "inline consteval ";
		}
		else if (func.isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (func.isInline)
		{
			out << "inline ";
		}

		auto parent = func.parentType;
		StringReplace(parent, ".", "::");
		auto pos = parent.find("<{{specialization}}>");
		if (pos != parent.npos)
		{
			out << parent.substr(0, pos);
			out << "<";
			printTemplateArgumentList(func.parentTemplateSpecializationArgs);
			out << ">";
			out << parent.substr(pos + 20);
		}
		else
		{
			out << parent;
		}
		currentShortType = func.shortType;
		currentTypeWithTemplate = parent;
		out << "::" << "operator ";
		isUnsafe = func.isUnsafe;
		printTypeId(func.returnType);
		if (func.isConstReturn) out << " const&";
		else if (func.isRefReturn) out << " &";
		out << "() const ";
		isVariadicTemplate = false;
		if (func.isOverride) out << "override ";
		if (func.isFinal) out << "final ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		isUnsafe = func.isUnsafe;
		currentShortType.clear();
		currentTypeWithTemplate.clear();
		if (auto body = ctx->functionBody())
		{
			functionProlog = true;
			printFunctionBody(body);
		}
		else
		{
			printShortFunctionBody(ctx->shortFunctionBody());
		}
		if (func.isProtectedType || func.isUnsafeType) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	out.switchTo(false);
	isUnsafe = prevUnsafe;
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printIndexer(CppAdvanceParser::IndexerContext* ctx) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
	bool prevUnsafe = isUnsafe;
	
	SourcePosition pos = { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() };
	if (sema.methods.contains(pos))
	{
		const MethodDefinition& func = sema.methods[pos];
		if (func.access != AccessSpecifier::Private &&
			(func.isInline || func.templateParams || func.indexerSetter
				|| func.parentTemplateParams || func.parentTemplateSpecializationArgs)) {
			out.switchTo(true);
			emptyLine = true;
		}
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl;
		}
		if (func.isProtectedType) {
			out << "namespace __" << filename << "_Protected" << (func.isUnsafeType ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
		}
		else if (func.isUnsafeType)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
		}

		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (func.parentTemplateParams)
		{
			printTemplateParams(func.parentTemplateParams);
			out << " ";
		}
		else if (func.parentTemplateSpecializationArgs)
		{
			out << "template<> ";
		}
		if (func.templateParams)
		{
			printTemplateParams(func.templateParams);
			out << " ";
		}
		if (func.isConsteval)
		{
			out << "inline consteval ";
		}
		else if (func.isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (func.isInline)
		{
			out << "inline ";
		}

		out << "auto ";
		auto parent = func.parentType;
		StringReplace(parent, ".", "::");
		auto pos = parent.find("<{{specialization}}>");
		if (pos != parent.npos)
		{
			out << parent.substr(0, pos);
			out << "<";
			printTemplateArgumentList(func.parentTemplateSpecializationArgs);
			out << ">";
			out << parent.substr(pos + 20);
		}
		else
		{
			out << parent;
		}
		currentShortType = func.shortType;
		currentTypeWithTemplate = parent;
		out << "::" << func.id;
		isUnsafe = func.isUnsafe;
		out << "(";
		printParamDeclClause(func.indexerParams);
		out << ") ";
		isVariadicTemplate = false;
		if (!func.isStatic) {
			if (func.isConstReturn) out << "const ";
			if (func.isOverride) out << "override ";
			if (func.isFinal) out << "final ";
		}
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		out << " -> ";
		if (func.isConstReturn) out << "const ";
		if (func.indexerSetter)
		{
			out << "__IndexerAccessor_" << func.pos.line << "<";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << ">";
		}
		else if (func.returnType)
		{
			auto ret = func.returnType;
			printTypeId(ret);
			if (func.isRefReturn) out << "&";
			if (auto idc = ctx->returnType()->Identifier()) {
				auto id = idc->getText();
				namedReturns.emplace_back(id, ret);
				symbolTable[id] = ret->getText();
			}
			else if (ret->typeSpecifierSeq() && ret->typeSpecifierSeq()->simpleTypeSpecifier())
			{
				auto tup = ret->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
				for (auto element : tup)
				{
					auto id = element->Identifier()->getText();
					namedReturns.emplace_back(id, element->theTypeId());
					symbolTable[id] = element->theTypeId()->getText();
				}
			}
		}
		else if (func.isForwardReturn)
		{
			out << "decltype(auto)";
		}
		else if (ctx->returnType() && ctx->returnType()->Ref())
		{
			out << "auto";
		}
		else if (ctx->shortFunctionBody())
		{
			out << "decltype(auto)";
		}
		else
		{
			out << "void";
		}
		currentShortType.clear();
		currentTypeWithTemplate.clear();

		isNewDeleteOperator = false;
		if (func.indexerSetter)
		{
			out << "\n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
			out << "return __IndexerAccessor_" << func.pos.line << "<";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << ">";
			out <<"{ *this, ";
			bool first = true; 
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				out << param->Identifier()->getText();
			}
			out << " };\n" << std::string(--depth, '\t') << "}\n";
		}
		else if (auto body = ctx->functionBody())
		{
			functionProlog = true;
			printFunctionBody(body);
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			printShortFunctionBody(body);
		}
		if (!func.isConstReturn && !func.isStatic && !func.isMutating)
		{
			out << std::endl << std::string(depth, '\t') << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (func.parentTemplateParams)
			{
				printTemplateParams(func.parentTemplateParams);
				out << " ";
			}
			else if (func.parentTemplateSpecializationArgs)
			{
				out << "template<> ";
			}
			if (func.templateParams)
			{
				printTemplateParams(func.templateParams);
				out << " ";
			}
			if (func.isConsteval)
			{
				out << "inline consteval ";
			}
			else if (func.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (func.isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			auto parent = func.parentType;
			StringReplace(parent, ".", "::");
			auto pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(func.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			currentShortType = func.shortType;
			currentTypeWithTemplate = parent;
			out << "::" << func.id;
			isUnsafe = func.isUnsafe;
			out << "(";
			printParamDeclClause(func.indexerParams);
			out << ") ";
			isVariadicTemplate = false;
			out << " const ";
			if (func.isOverride) out << "override ";
			if (func.isFinal) out << "final ";
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> const ";
			if (func.indexerSetter)
			{
				out << "__IndexerAccessor_" << func.pos.line << "<";
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";
				out << ">";
			}
			else if (func.returnType)
			{
				auto ret = func.returnType;
				printTypeId(ret);
				if (func.isRefReturn) out << "&";
				if (auto idc = ctx->returnType()->Identifier()) {
					auto id = idc->getText();
					namedReturns.emplace_back(id, ret);
					symbolTable[id] = ret->getText();
				}
				else if (ret->typeSpecifierSeq() && ret->typeSpecifierSeq()->simpleTypeSpecifier())
				{
					auto tup = ret->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
					for (auto element : tup)
					{
						auto id = element->Identifier()->getText();
						namedReturns.emplace_back(id, element->theTypeId());
						symbolTable[id] = element->theTypeId()->getText();
					}
				}
			}
			else if (func.isForwardReturn)
			{
				out << "decltype(auto)";
			}
			else if (ctx->returnType() && ctx->returnType()->Ref())
			{
				out << "auto";
			}
			else if (ctx->shortFunctionBody())
			{
				out << "decltype(auto)";
			}
			else
			{
				out << "void";
			}
			currentShortType.clear();
			currentTypeWithTemplate.clear();

			isNewDeleteOperator = false;
			if (func.indexerSetter)
			{
				out << "\n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
				out << "return __IndexerAccessor_" << func.pos.line << "<";
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";
				out << ">{ *this, ";
				bool first = true;
				for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					out << param->Identifier()->getText();
				}
				out << " };\n" << std::string(--depth, '\t') << "}\n";
			}
			else if (auto body = ctx->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = ctx->shortFunctionBody())
			{
				printShortFunctionBody(body);
			}
			currentShortType.clear();
			currentTypeWithTemplate.clear();
		}

		if (func.indexerSetter)
		{
			bool isInline = false;
			if (auto body = func.indexerGetter->functionBody())
			{
				isInline = body->Assign() || body->Equal();
			}
			else if (auto body = func.indexerGetter->shortFunctionBody())
			{
				isInline = body->Assign() || body->Equal();
			}

			if (func.access != AccessSpecifier::Private && isInline)
			{
				out.switchTo(true);
				emptyLine = true;
			}
			else
			{
				out.switchTo(false);
			}

			out << "\n" << std::string(depth, '\t');
			out << "#line " << func.indexerGetter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (func.parentTemplateParams)
			{
				printTemplateParams(func.parentTemplateParams);
				out << " ";
			}
			else if (func.parentTemplateSpecializationArgs)
			{
				out << "template<> ";
			}
			if (func.templateParams)
			{
				printTemplateParams(func.templateParams);
				out << " ";
			}
			if (func.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (func.isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			auto parent = func.parentType;
			StringReplace(parent, ".", "::");
			auto pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(func.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			currentShortType = func.shortType;
			currentTypeWithTemplate = parent;
			out << "::getAt";
			isUnsafe = func.isUnsafe;
			out << "(";
			printParamDeclClause(func.indexerParams);
			out << ") ";
			isVariadicTemplate = false;
			if (!func.isStatic) {
				if (func.isConstReturn) out << "const ";
				if (func.isOverride) out << "override ";
				if (func.isFinal) out << "final ";
			}
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> ";
			if (func.isConstReturn) out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";

			if (auto body = func.indexerGetter->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = func.indexerGetter->shortFunctionBody())
			{
				printShortFunctionBody(body);
			}
			currentShortType.clear();
			currentTypeWithTemplate.clear();
			if (!func.isConstReturn && !func.isStatic && !func.isMutating)
			{
				out << "\n" << std::string(depth, '\t');
				out << "#line " << func.indexerGetter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				if (func.parentTemplateParams)
				{
					printTemplateParams(func.parentTemplateParams);
					out << " ";
				}
				else if (func.parentTemplateSpecializationArgs)
				{
					out << "template<> ";
				}
				if (func.templateParams)
				{
					printTemplateParams(func.templateParams);
					out << " ";
				}
				if (func.isConstexpr)
				{
					out << "inline constexpr ";
				}
				else if (func.isInline)
				{
					out << "inline ";
				}

				out << "auto ";
				auto parent = func.parentType;
				StringReplace(parent, ".", "::");
				auto pos = parent.find("<{{specialization}}>");
				if (pos != parent.npos)
				{
					out << parent.substr(0, pos);
					out << "<";
					printTemplateArgumentList(func.parentTemplateSpecializationArgs);
					out << ">";
					out << parent.substr(pos + 20);
				}
				else
				{
					out << parent;
				}
				currentShortType = func.shortType;
				currentTypeWithTemplate = parent;
				out << "::getAt";
				isUnsafe = func.isUnsafe;
				out << "(";
				printParamDeclClause(func.indexerParams);
				out << ") const ";
				isVariadicTemplate = false;
				if (func.isOverride) out << "override ";
				if (func.isFinal) out << "final ";
				if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
				out << " -> ";
				out << "const ";
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";

				if (auto body = func.indexerGetter->functionBody())
				{
					functionProlog = true;
					printFunctionBody(body);
				}
				else if (auto body = func.indexerGetter->shortFunctionBody())
				{
					printShortFunctionBody(body);
				}
				currentShortType.clear();
				currentTypeWithTemplate.clear();
			}

			isInline = false;
			if (auto body = func.indexerSetter->functionBody())
			{
				isInline = body->Assign() || body->Equal();
			}
			else if (auto body = func.indexerSetter->shortFunctionBody())
			{
				isInline = body->Assign() || body->Equal();
			}

			if (func.access != AccessSpecifier::Private && isInline)
			{
				out.switchTo(true);
				emptyLine = true;
			}
			else
			{
				out.switchTo(false);
			}

			out << "\n" << std::string(depth, '\t');
			out << "#line " << func.indexerSetter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (func.parentTemplateParams)
			{
				printTemplateParams(func.parentTemplateParams);
				out << " ";
			}
			else if (func.parentTemplateSpecializationArgs)
			{
				out << "template<> ";
			}
			out << "template<class _ElemRight> ";
			if (func.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (func.isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			parent = func.parentType;
			StringReplace(parent, ".", "::");
			pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(func.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			currentShortType = func.shortType;
			currentTypeWithTemplate = parent;
			out << "::setAt";
			isUnsafe = func.isUnsafe;
			out << "(";
			printParamDeclClause(func.indexerParams);
			out << ", const _ElemRight& value) ";
			isVariadicTemplate = false;
			if (!func.isStatic) {
				if (func.isOverride) out << "override ";
				if (func.isFinal) out << "final ";
			}
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> void ";

			if (auto body = func.indexerSetter->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = func.indexerSetter->shortFunctionBody())
			{
				printShortFunctionBody(body);
			}
			currentShortType.clear();
			currentTypeWithTemplate.clear();
		}

		if (func.isProtectedType || func.isUnsafeType) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	out.switchTo(false);
	isUnsafe = prevUnsafe;
	refParameters.clear();
	namedReturns.clear();
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printProperty(CppAdvanceParser::PropertyContext* ctx) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
	bool prevUnsafe = isUnsafe;
	bool isInline = false;
	bool isConstexpr = false;
	SourcePosition pos = { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() };
	if (sema.properties.contains(pos))
	{
		const PropertyDefinition& prop = sema.properties[pos];
		currentPropertyField = "p_" + prop.id;
		if (prop.access != AccessSpecifier::Private &&
			(prop.isInline || prop.isConstexpr || prop.parentTemplateParams || prop.parentTemplateSpecializationArgs)) {
			out.switchTo(true);
			emptyLine = true;
		}

		isUnsafe = prop.isUnsafe;
		if (!prop.compilationCondition.empty())
		{
			out << "#if " << prop.compilationCondition << std::endl;
		}
		if (prop.isProtectedType) {
			out << "namespace __" << filename << "_Protected" << (prop.isUnsafeType ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
		}
		else if (prop.isUnsafeType)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
		}

		if (prop.setter)
		{
			if (auto body = prop.setter->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = prop.setter->shortFunctionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else
			{
				isInline = true;
			}

			if (prop.access != AccessSpecifier::Private &&
				(isInline || isConstexpr || prop.parentTemplateParams || prop.parentTemplateSpecializationArgs)) {
				out.switchTo(true);
				emptyLine = true;
			}

			out << "#line " << prop.setter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (prop.parentTemplateParams)
			{
				printTemplateParams(prop.parentTemplateParams);
				out << " ";
			}
			else if (prop.parentTemplateSpecializationArgs)
			{
				out << "template<> ";
			}

			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			auto parent = prop.parentType;
			StringReplace(parent, ".", "::");
			auto pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(prop.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			currentShortType = prop.shortType;
			currentTypeWithTemplate = parent;
			out << "::set" << prop.id << "(const ";
			printTypeId(prop.type);
			out << "& value) ";
			if (!prop.isStatic) {
				if (prop.isOverride) out << "override ";
				if (prop.isFinal) out << "final ";
				isPropertySetter = true;
				out << "-> __self& ";
			}
			else
			{
				out << "-> void ";
			}

			currentShortType.clear();
			currentTypeWithTemplate.clear();

			if (auto body = prop.setter->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = prop.setter->shortFunctionBody())
			{
				printShortFunctionBody(prop.setter->shortFunctionBody());
			}
			else
			{
				out << "{ p_" << prop.id << " = value; ";
				if (!prop.isStatic) out << "return *this;";
				out << "}";
			}

			isPropertySetter = false;
			out << std::endl << std::string(depth, '\t');
		}
		if (prop.getter)
		{
			if (auto body = prop.getter->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = prop.getter->shortFunctionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else
			{
				isInline = true;
			}

			if (prop.access != AccessSpecifier::Private &&
				(isInline || isConstexpr || prop.parentTemplateParams || prop.parentTemplateSpecializationArgs)) {
				out.switchTo(true);
				emptyLine = true;
			}

			out << "#line " << prop.getter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (prop.parentTemplateParams)
			{
				printTemplateParams(prop.parentTemplateParams);
				out << " ";
			}
			else if (prop.parentTemplateSpecializationArgs)
			{
				out << "template<> ";
			}

			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			auto parent = prop.parentType;
			StringReplace(parent, ".", "::");
			auto pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(prop.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			currentShortType = prop.shortType;
			currentTypeWithTemplate = parent;
			out << "::get" << prop.id << "() ";
			if (!prop.isStatic) {
				out << "const ";
				if (prop.isOverride) out << "override ";
				if (prop.isFinal) out << "final ";
			}

			out << " -> ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			out << " ";

			currentShortType.clear();
			currentTypeWithTemplate.clear();

			if (auto body = prop.getter->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = prop.getter->shortFunctionBody())
			{
				printShortFunctionBody(prop.getter->shortFunctionBody());
			}
			else
			{
				out << "{ return p_" << prop.id << "; }";
			}

			out << std::endl << std::string(depth, '\t');
		}
		else if (!prop.setter)
		{
			out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (prop.parentTemplateParams)
			{
				printTemplateParams(prop.parentTemplateParams);
				out << " ";
			}
			else if (prop.parentTemplateSpecializationArgs)
			{
				out << "template<> ";
			}

			if (prop.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (prop.isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			auto parent = prop.parentType;
			StringReplace(parent, ".", "::");
			auto pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(prop.parentTemplateSpecializationArgs);
				out << ">";
				out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			currentShortType = prop.shortType;
			currentTypeWithTemplate = parent;
			out << "::get" << prop.id << "() ";
			if (!prop.isStatic) {
				out << "const ";
				if (prop.isOverride) out << "override ";
				if (prop.isFinal) out << "final ";
			}

			out << " -> ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			out << " ";

			currentShortType.clear();
			currentTypeWithTemplate.clear();

			if (auto body = ctx->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = ctx->shortFunctionBody())
			{
				printShortFunctionBody(body);
			}

			out << std::endl << std::string(depth, '\t');
		}

		if (prop.isProtectedType || prop.isUnsafeType) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
		if (!prop.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	out.switchTo(false);
	isUnsafe = prevUnsafe;
	currentPropertyField.clear();
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext* ctx) const
{
	if (!currentAccessSpecifier) currentAccessSpecifier = AccessSpecifier::Private;
	switch (*currentAccessSpecifier)
	{
	case AccessSpecifier::Public:
	case AccessSpecifier::Internal:
		out << "public: ";
		break;
	case AccessSpecifier::Protected:
	case AccessSpecifier::ProtectedInternal:
		out << "protected: ";
		break;
	case AccessSpecifier::Private:
		out << "private: ";
		break;
	}

	printTemplateParams(ctx->templateParams());
	out << " auto " << ctx->Identifier()->getText();
	printFunctionParameters(ctx->functionParams());
	if (auto spec = ctx->exceptionSpecification())
	{
		out << " ";
		printExceptionSpecification(spec);
	}
	out << " -> ";
	if (auto ret = ctx->returnType()) {
		if (ret->Const()) out << "const ";
		if (ret->theTypeId()) printTypeId(ret->theTypeId());
		else if (ret->Forward()) out << "decltype(auto)";
		if (ret->Ref()) out << "&";
	}
	out << ";";
}

void CppAdvanceCodegen::printFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext* ctx) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
	auto pfunc = std::find_if(sema.globalFunctions.begin(), sema.globalFunctions.end(), [&](auto f) { return f.pos.line == ctx->getStart()->getLine() && f.pos.column == ctx->getStart()->getCharPositionInLine(); });
	bool prevUnsafe = isUnsafe;
	if (pfunc != sema.globalFunctions.end())
	{
		const FunctionDefinition& func = *pfunc;
		if (func.isInline && func.access != AccessSpecifier::Private) {
			out.switchTo(true);
			emptyLine = true;
		}
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl;
		}
		isUnsafe = func.isUnsafe;
		bool _isUnsafe = isUnsafe;
		if (func.access == AccessSpecifier::Protected) {
			out << "namespace __" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << " {\n" << std::string(++depth,'\t');
		}
		else if (isUnsafe)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
		}

		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (func.templateParams) 
		{
			printTemplateParams(func.templateParams);
			out << " ";
		}
		else if (func.templateSpecializationArgs)
		{
			out << "template<> ";
		}
		if (func.isConsteval)
		{
			out << "inline consteval ";
		}
		else if (func.isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (func.isInline)
		{
			out << "inline ";
		}

		out << "auto " << func.id;
		if (func.id.ends_with(" new") || func.id.ends_with(" delete")) isNewDeleteOperator = true;
		if (func.templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(func.templateSpecializationArgs);
			out << ">";
		}
		printFunctionParameters(func.params);
		isVariadicTemplate = false;
		out << " ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		out << " -> ";
		if (func.isConstReturn) out << "const ";
		if (func.returnType)
		{
			auto ret = func.returnType;
			printTypeId(ret);
			if (auto idc = ctx->returnType()->Identifier()) {
				auto id = idc->getText();
				namedReturns.emplace_back(id,ret);
				symbolTable[id] = ret->getText();
			}
			else if (ret->typeSpecifierSeq() && ret->typeSpecifierSeq()->simpleTypeSpecifier())
			{
				auto tup = ret->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
				for (auto element : tup)
				{
					auto id = element->Identifier()->getText();
					namedReturns.emplace_back(id, element->theTypeId());
					symbolTable[id] = element->theTypeId()->getText();
				}
			}
		}
		else if (func.isForwardReturn)
		{
			out << "decltype(auto)";
		}
		else if (ctx->returnType() && ctx->returnType()->Ref())
		{
			out << "auto";
		}
		else if (ctx->shortFunctionBody() && func.id != "operator delete")
		{
			out << "decltype(auto)";
		}
		else
		{
			out << "void";
		}
		if (func.isRefReturn) out << "&";
		isNewDeleteOperator = false;
		if (auto body = ctx->functionBody())
		{
			functionProlog = true;
			printFunctionBody(body);
		}
		else
		{
			printShortFunctionBody(ctx->shortFunctionBody());
		}
		if (func.access == AccessSpecifier::Protected || _isUnsafe) out << "\n" << std::string(--depth,'\t') << "}";
		out << std::endl;
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
		out.switchTo(false);
	}
	else
	{
		SourcePosition pos = { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() };
		if (sema.methods.contains(pos))
		{
			const MethodDefinition& func = sema.methods[pos];
			if (func.access != AccessSpecifier::Private && 
				(func.isInline || func.templateParams || func.templateSpecializationArgs 
					|| func.parentTemplateParams || func.parentTemplateSpecializationArgs)) {
				out.switchTo(true);
				emptyLine = true;
			}
			if (!func.compilationCondition.empty())
			{
				out << "#if " << func.compilationCondition << std::endl;
			}
			if (func.isProtectedType) {
				out << "namespace __" << filename << "_Protected" << (func.isUnsafeType ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
			}
			else if (func.isUnsafeType)
			{
				out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
			}

			out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (func.parentTemplateParams)
			{
				printTemplateParams(func.parentTemplateParams);
				out << " ";
			}
			else if (func.parentTemplateSpecializationArgs)
			{
				out << "template<> ";
			}
			if (func.templateParams)
			{
				printTemplateParams(func.templateParams);
				out << " ";
			}
			else if (func.templateSpecializationArgs)
			{
				out << "template<> ";
			}
			if (func.isConsteval)
			{
				out << "inline consteval ";
			}
			else if (func.isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (func.isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			auto parent = func.parentType;
			StringReplace(parent, ".", "::");
			auto pos = parent.find("<{{specialization}}>");
			if (pos != parent.npos)
			{
				out << parent.substr(0, pos);
				out << "<";
				printTemplateArgumentList(func.parentTemplateSpecializationArgs);
				out << ">";
                out << parent.substr(pos + 20);
			}
			else
			{
				out << parent;
			}
			currentShortType = func.shortType;
			currentTypeWithTemplate = parent;
			out << "::" << func.id;
			if (func.id.ends_with(" new") || func.id.ends_with(" delete")) isNewDeleteOperator = true;
			if (func.templateSpecializationArgs)
			{
				out << "<";
				printTemplateArgumentList(func.templateSpecializationArgs);
				out << ">";
			}
			isUnsafe = func.isUnsafe;
			printFunctionParameters(func.params);
			isVariadicTemplate = false;
			out << " ";
			if (!func.isStatic) {
				if (!func.isMutating) out << "const ";
				if (func.isOverride) out << "override ";
				if (func.isFinal) out << "final ";
			}
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> ";
			if (func.isConstReturn) out << "const ";
			if (func.returnType)
			{
				auto ret = func.returnType;
				printTypeId(ret);
				if (auto idc = ctx->returnType()->Identifier()) {
					auto id = idc->getText();
					namedReturns.emplace_back(id, ret);
					symbolTable[id] = ret->getText();
				}
				else if (ret->typeSpecifierSeq() && ret->typeSpecifierSeq()->simpleTypeSpecifier())
				{
					auto tup = ret->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
					for (auto element : tup)
					{
						auto id = element->Identifier()->getText();
						namedReturns.emplace_back(id, element->theTypeId());
						symbolTable[id] = element->theTypeId()->getText();
					}
				}
			}
			else if (func.isForwardReturn)
			{
				out << "decltype(auto)";
			}
			else if (ctx->returnType() && ctx->returnType()->Ref())
			{
				out << "auto";
			}
			else if (ctx->shortFunctionBody() && func.id != "operator delete")
			{
				out << "decltype(auto)";
			}
			else
			{
				out << "void";
			}
			if (func.isRefReturn) out << "&";
			currentShortType.clear();
			currentTypeWithTemplate.clear();

			isNewDeleteOperator = false;
			if (auto body = ctx->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else
			{
				printShortFunctionBody(ctx->shortFunctionBody());
			}
			if (func.id == "operator++" || func.id == "operator--")
			{
				out << std::endl << std::string(depth, '\t') << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				if (func.parentTemplateParams)
				{
					printTemplateParams(func.parentTemplateParams);
					out << " ";
				}
				else if (func.parentTemplateSpecializationArgs)
				{
					out << "template<> ";
				}
				if (func.isConsteval)
				{
					out << "inline consteval ";
				}
				else if (func.isConstexpr)
				{
					out << "inline constexpr ";
				}
				else
				{
					out << "inline ";
				}

				out << "auto ";
				auto parent = func.parentType;
				StringReplace(parent, ".", "::");
				out << parent;
				currentShortType = func.shortType;
				currentTypeWithTemplate = parent;
				out << "::" << func.id << "(int) ";
				isVariadicTemplate = false;
				if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
				out << " -> ";
				auto pos = currentShortType.rfind('.');
				if (pos != currentShortType.npos)
					currentShortType = currentShortType.substr(pos + 1);
				out << currentShortType << " { auto copy = *this; ++(*this); return copy; }";
				currentShortType.clear();
				currentTypeWithTemplate.clear();
			}
			if (func.isProtectedType || func.isUnsafeType) out << "\n" << std::string(--depth, '\t') << "}";
			out << std::endl;
			if (!func.compilationCondition.empty())
			{
				out << "#endif " << std::endl;
			}

			out.switchTo(false);
		}
		else
		{
			if (!currentAccessSpecifier) currentAccessSpecifier = AccessSpecifier::Private;
			switch (*currentAccessSpecifier)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public: ";
				break;
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}

			if (auto tparams = ctx->templateParams())
			{
				printTemplateParams(tparams);
				out << " ";
			}

			bool isInline = false;
			bool isConstexpr = false;
			bool isConsteval = false;
			bool isMut = false;
			bool isVirtual = false;
			bool isOverride = false;
			bool isFinal = false;
			for (auto spec : ctx->functionSpecifier())
			{
				if (spec->Inline()) isInline = true;
				if (spec->Consteval()) isConsteval = true;
				if (spec->Mutable()) isMut = true;
				if (spec->Virtual()) isVirtual = true;
				if (spec->Override()) isOverride = true;
				if (spec->Final()) isFinal = true;
			}

			if (auto body = ctx->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = ctx->shortFunctionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}

			if (isConsteval)
			{
				out << "inline consteval ";
			}
			else if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}

			if (isVirtual) out << "virtual ";

			out << "auto ";
			if (auto id = ctx->Identifier()) {
				out << id->getText();
			}
			else if (auto op = ctx->operatorFunctionId())
			{
				auto id = op->getText();
				out << id;
				if (id.ends_with(" new") || id.ends_with(" delete")) isNewDeleteOperator = true;
			}
			
			printFunctionParameters(ctx->functionParams());
			isVariadicTemplate = false;
			out << " ";
			if (!isMut) out << "const ";
			if (isOverride) out << "override ";
			if (isFinal) out << "final ";
			if (ctx->exceptionSpecification()) printExceptionSpecification(ctx->exceptionSpecification());
			out << " -> ";
			if (auto ret = ctx->returnType())
			{
				if (ret->Const()) out << "const ";
				if (ret->theTypeId())
					printTypeId(ret->theTypeId());
				if (auto idc = ctx->returnType()->Identifier()) {
					auto id = idc->getText();
					namedReturns.emplace_back(id, ret->theTypeId());
					symbolTable[id] = ret->getText();
				}
				else if (ret->theTypeId() && ret->theTypeId()->typeSpecifierSeq() && ret->theTypeId()->typeSpecifierSeq()->simpleTypeSpecifier())
				{
					auto tup = ret->theTypeId()->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
					for (auto element : tup)
					{
						auto id = element->Identifier()->getText();
						namedReturns.emplace_back(id, element->theTypeId());
						symbolTable[id] = element->theTypeId()->getText();
					}
				}
				else if (ret->Forward())
				{
					out << "decltype(auto)";
				}
				else if (ret->Ref())
				{
					out << "auto";
				}

				if (ret->Ref())
				{
					out << "&";
				}
			}
			else if (ctx->shortFunctionBody() && !isNewDeleteOperator)
			{
				out << "decltype(auto)";
			}
			else
			{
				out << "void";
			}
			isNewDeleteOperator = false;
			if (auto body = ctx->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else
			{
				printShortFunctionBody(ctx->shortFunctionBody());
			}
			out << std::endl;
		}
	}
	isUnsafe = prevUnsafe;
	refParameters.clear();
	namedReturns.clear();
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printFunctionParameters(CppAdvanceParser::FunctionParamsContext* ctx) const
{
	out << "(";
	if (auto clause = ctx->paramDeclClause())
	{
		printParamDeclClause(clause);
	}
	out << ")";
}

void CppAdvanceCodegen::printParamDeclClause(CppAdvanceParser::ParamDeclClauseContext* ctx) const
{
	auto decls = ctx->paramDeclList();
	bool first = true;
	for (auto param : decls->paramDeclaration())
	{
		if (!first) out << ", ";
		if (param == decls->paramDeclaration().back() && ctx->Ellipsis()) isVarargs = true;
		printParamDeclaration(param);
		first = false;
		isVarargs = false;
	}
}

void CppAdvanceCodegen::printParamDeclaration(CppAdvanceParser::ParamDeclarationContext* ctx) const
{
	auto id = ctx->Identifier()->getText();
	bool isConst = false;
	bool isRef = false;
	bool isInRef = false;
	bool isRvalueRef = false;
	
	enum {
		Value = 0,
		In,
		InRef,
		Inout,
		Ref,
		Out,
		Move,
		Forward
	} type{};

	if (auto spec = ctx->paramSpecification()) {
		if (spec->Move()) type = Move;
		else if (spec->Forward()) type = Forward;
		else if (spec->In()) { if (spec->Ref()) type = InRef; else type = In; }
		else if (spec->Inout()) type = Inout;
		else if (spec->Ref()) type = Ref;
		else if (spec->Out()) type = Out;
		else type = Value;
	}

	if (auto t = ctx->theTypeId())
	{
		if (type == InRef) out << "const ";
		else if (type == In) out << "CppAdvance::In<";
		else if (type == Ref || type == Inout) out << "CppAdvance::MutableRef<std::remove_cvref_t<";
		else if (type == Out) {
			out << "CppAdvance::Out<std::remove_cvref_t<";
			symbolTable[id] = "#Out";
		}
		if (isVarargs && !isVariadicTemplate) out << "std::initializer_list<";
		printTypeId(t);
		if (isVarargs && !isVariadicTemplate) out << ">";
		if (type == In) out << ">";
		else if (type == Ref || type == Inout || type == Out) out << ">>";
		else if (type == InRef) out << "&";
		else if (type == Move || type == Forward) out << "&&";

		if (!isFunctionDeclaration && (type == Ref || type == Inout))
		{
			refParameters[id] = t;
			id = "__" + id + "__";
		}
	}
	else {
		if (type == In || type == InRef) out << "const auto&";
		else if (type == Ref || type == Inout) out << "CppAdvance::MutableRef<auto>";
		else if (type == Move || type == Forward) out << "auto&&";
		else if (type == Value) out << "auto";
	}

	if (isVariadicTemplate) out << "...";
	out << " " << id;

	if (ctx->LifetimeAnnotation())
		out << " LIFETIMEBOUND";

	if (isFunctionDeclaration)
	{
		if (auto init = ctx->initializerClause())
		{
			out << " = ";
			currentDeclarationName = id;
			printInitializerClause(init);
			currentDeclarationName.clear();
		}
	}
}

void CppAdvanceCodegen::printExceptionSpecification(CppAdvanceParser::ExceptionSpecificationContext* ctx) const
{
	out << "noexcept";
	if (auto expr = ctx->constantExpression())
	{
		out << "(";
		printConstantExpression(expr);
		out << ")";
	}
}

void CppAdvanceCodegen::printImplicitSpecification(CppAdvanceParser::ImplicitSpecificationContext* ctx) const
{
	if (auto expr = ctx->constantExpression())
	{
		out << "explicit(";
		printConstantExpression(expr); 
		out << ")";
	}
}

void CppAdvanceCodegen::printFunctionBody(CppAdvanceParser::FunctionBodyContext* ctx) const
{
	bool prev = functionBody;
	functionBody = true;
	if (auto stat = ctx->compoundStatement())
	{
		out << "\n" << std::string(depth,'\t');
		printCompoundStatement(stat);
	}
	functionBody = prev;
}

void CppAdvanceCodegen::printShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext* ctx) const
{
	bool prev = functionBody;
	functionBody = true;
	if (auto stat = ctx->expressionStatement())
	{
		out << "\n" << std::string(depth, '\t');
		out << "{";
		++depth;
		if (isUnsafe)
			out << "\tusing namespace CppAdvance::Unsafe;\tusing namespace __Unsafe;\tusing namespace __" << filename << "_Protected__Unsafe;";
		for (const auto& [id, type] : refParameters)
		{
			out << "\n" << std::string(depth, '\t');
			printTypeId(type);
			out << "& " << id << " = __" << id << "__;";
		}
		out << "\n" << std::string(depth, '\t') << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "ADV_EXPRESSION_BODY(";
		printExpression(stat->expr());
		out << "); ";
		if (isPropertySetter) out << "return *this;";
		out << "\n" << std::string(--depth, '\t') << "}";
	}
	functionBody = prev;
}

void CppAdvanceCodegen::printMemberBlockDeclaration(CppAdvanceParser::MemberBlockDeclarationContext* ctx) const
{
	if (!currentAccessSpecifier) currentAccessSpecifier = AccessSpecifier::Private;
	switch (*currentAccessSpecifier)
	{
	case AccessSpecifier::Public:
	case AccessSpecifier::Internal:
		out << "public: ";
		break;
	case AccessSpecifier::Protected:
	case AccessSpecifier::ProtectedInternal:
		out << "protected: ";
		break;
	case AccessSpecifier::Private:
		out << "private: ";
		break;
	}

	if (auto decl = ctx->simpleDeclaration())
	{
		printSimpleDeclaration(decl);
	}
	else if (auto decl = ctx->memberRefDeclaration())
	{
		printMemberRefDeclaration(decl);
	}
	else if (auto decl = ctx->constantDeclaration())
	{
		printConstantDeclaration(decl);
	}
	else if (auto decl = ctx->aliasDeclaration())
	{
		printAliasDeclaration(decl);
	}
	isVolatile = false;
}

void CppAdvanceCodegen::printSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext* ctx) const
{
	if (!functionBody) {
		emptyLine = true;
		return;
	}
	bool prevUnsafe = isUnsafe;

	bool first = true;
	bool isArray = false;
	auto id = ctx->Identifier()->getText();
	currentDeclarationName = id;
	if (auto spec = ctx->declSpecifierSeq())
	{
		printDeclSpecifierSeq(spec);
	}
	if (auto t = ctx->theTypeId())
	{
		if (ctx->Void()) {
			out << "CppAdvance::DeferredInit<";
			symbolTable[id] = "#DeferredInit";
		}
		else {
			symbolTable[id] = t->getText();
		}
		isDeclaration = true;
		printTypeId(t);
		isDeclaration = false;
		isArray = t->arrayDeclarator();
		if (ctx->Void()) out << ">";
		out << " ";
	}
	else
	{
		symbolTable[id] = "";
		if (ctx->Star())
		{
			if (ctx->Const())
			{
				out << (isUnsafe ? "CppAdvance::Unsafe::" : "") << (isVolatile ? "__VolatileRawPtr" : "__RawPtr") << "<const std::remove_pointer_t<decltype(";
				printInitializerClause(ctx->initializerClause());
				out << ")>> ";
			}
			else
			{
				out << (isUnsafe ? "CppAdvance::Unsafe::" : "") << (isVolatile ? "__VolatileRawPtr" : "__RawPtr");
			}
		}
		else
		{
			out << "auto ";
		}
	}
	currentType = symbolTable[id];
	out << id;
	if (isArray) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
	if (!ctx->Void())
	{
		if (auto expr = ctx->initializerClause())
		{
			out << " = ";
			if (first)
			{
				printInitializerClause(ctx->initializerClause());
			}
			else
			{
				out << id;
			}
		}
		else if (auto init = ctx->initializerList())
		{
			if (first)
			{
				out << "{ ";
				printInitializerList(init);
				out << " }";
			}
			else
			{
				out << " = " << id;
			}
		}
		else
		{
			out << "{}";
		}
	}

	out << "; ";
	first = false;
	isUnsafe = prevUnsafe;
	currentDeclarationName.clear();
}

void CppAdvanceCodegen::printDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext* ctx) const
{
	out << "const auto& [";
	bool first = true;
	for (auto seq = ctx->identifierSeq();  auto id : seq->Identifier()) {
		if (!first) out << ", ";
		out << id->getText();
		first = false;
	}
	out << "]";
	if (auto expr = ctx->initializerClause())
	{
		out << " = ";
		printInitializerClause(ctx->initializerClause());
	}
	out << ";";
}

void CppAdvanceCodegen::printSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext* ctx) const
{
	if (isNewDeleteOperator)
	{
		if (ctx->Usize())
			out << "size_t";
		else if (ctx->getText() == "Pointer")
			out << "void*";
		return;
	}
	if ((isVolatile && !isPtr) || isTemplateParamDeclaration)
	{
		if (ctx->I8())
		{
			out << "int8_t";
		}
		else if (ctx->U8())
		{
			out << "uint8_t";
		}
		else if (ctx->I16())
		{
			out << "int16_t";
		}
		else if (ctx->U16())
		{
			out << "uint16_t";
		}
		else if (ctx->I32())
		{
			out << "int32_t";
		}
		else if (ctx->U32())
		{
			out << "uint32_t";
		}
		else if (ctx->I64())
		{
			out << "int64_t";
		}
		else if (ctx->U64())
		{
			out << "uint64_t";
		}
		else if (ctx->Isize())
		{
			out << "ptrdiff_t";
		}
		else if (ctx->Usize())
		{
			out << "size_t";
		}
		else if (ctx->F32())
		{
			out << "float";
		}
		else if (ctx->F64())
		{
			out << "double";
		}
		else if (ctx->Fext())
		{
			out << "long double";
		}
		else if (ctx->Bool())
		{
			out << "bool";
		}
	}
	else if (ctx->I8())
	{
		out << "CppAdvance::i8";
	}
	else if (ctx->U8())
	{
		out << "CppAdvance::u8";
	}
	else if (ctx->I16())
	{
		out << "CppAdvance::i16";
	}
	else if (ctx->U16())
	{
		out << "CppAdvance::u16";
	}
	else if (ctx->I32())
	{
		out << "CppAdvance::i32";
	}
	else if (ctx->U32())
	{
		out << "CppAdvance::u32";
	}
	else if (ctx->I64())
	{
		out << "CppAdvance::i64";
	}
	else if (ctx->U64())
	{
		out << "CppAdvance::u64";
	}
	else if (ctx->I128())
	{
		out << "CppAdvance::i128";
	}
	else if (ctx->U128())
	{
		out << "CppAdvance::u128";
	}
	else if (ctx->Isize())
	{
		out << "CppAdvance::isize";
	}
	else if (ctx->Usize())
	{
		out << "CppAdvance::usize";
	}
	else if (ctx->F32())
	{
		out << "CppAdvance::f32";
	}
	else if (ctx->F64())
	{
		out << "CppAdvance::f64";
	}
	else if (ctx->Fext())
	{
		out << "CppAdvance::fext";
	}
	else if (ctx->Byte())
	{
		out << "CppAdvance::char8";
	}
	else if (ctx->Char())
	{
		out << "CppAdvance::char16";
	}
	else if (ctx->Rune())
	{
		out << "CppAdvance::char32";
	}
	else if (ctx->Bool())
	{
		out << "bool";
	}
	else if (ctx->Str())
	{
		out << "CppAdvance::Str";
	}
	else if (ctx->Self())
	{
	out << "__self";
	}
	else if (auto decl = ctx->decltypeSpecifier()) {
		out << "decltype(";
		printExpression(decl->expr());
		out << ")";
	}
	else if (ctx->LeftParen())
	{
		if (!ctx->namedTupleField().empty())
		{
			auto id = sema.getNamedTupleId(ctx->getText());
			StringReplace(id, ".", "::");
			out << id;
		}
		else
		{
			out << "std::tuple<";
			bool first = true;
			for (auto type : ctx->theTypeId())
			{
				if (!first) out << ", ";
				first = false;
				printTypeId(type);
			}
			out << ">";
		}
	}
	else
	{
		auto txt = ctx->getText();
		auto pos = txt.find('<');
		if (pos != txt.npos)
			txt = txt.substr(0, pos);
		if (sema.typeset.contains(currentShortType + "." + txt))
		{
			out << "typename " << currentTypeWithTemplate << "::";
		}
		if (auto nested = ctx->nestedNameSpecifier())
		{
			out << "typename ";
			printNestedNameSpecifier(nested);
		}
		else if (sema.protectedSymbols.contains(ctx->getText())) {
			out << "__" << filename << "_Protected::";
		}
		auto type = ctx->typename_();
		if (auto tid = type->simpleTemplateId())
		{
			printSimpleTemplateId(tid);
		}
		else if (auto cid = type->className())
		{
			if (auto tid = cid->simpleTemplateId())
			{
				printSimpleTemplateId(tid);
			}
			else
			{
				out << ctx->typename_()->getText();
			}
		}
		else
		{
			out << ctx->typename_()->getText();
		}
	}
}

void CppAdvanceCodegen::printRefDeclaration(CppAdvanceParser::RefDeclarationContext* ctx) const
{
	auto ids = ctx->identifierSeq()->Identifier();
	auto id = ids[0]->getText();
	bool isConst = ctx->Const() || ctx->Let();
	if (isConst) out << "const ";

	if (auto t = ctx->typeSpecifierSeq())
	{
		symbolTable[id] = (isConst ? "const " : "") + t->getText() + "&";
		printTypeSpecifierSeq(t);
	}
	else
	{
		symbolTable[id] = std::string(isConst ? "const " : "") + "&";
		out << "auto";
	}
	out << "& ";
	currentType = symbolTable[id];
	if (ids.size() == 1)
	{
		currentDeclarationName = id;
		out << id;
	}
	else {
		out << "[";
		bool first = true;
		for (auto idctx : ids)
		{
			if (!first) out << ", ";
			out << idctx->getText();
			first = false;
		}
        out << "]";
	}
	if (auto expr = ctx->initializerClause())
	{
		out << " = ";
		printInitializerClause(ctx->initializerClause());
	}

	out << ";";
	currentDeclarationName.clear();
}

void CppAdvanceCodegen::printMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext* ctx) const
{
	auto id = ctx->Identifier()->getText();
	bool isConst = ctx->Const() || ctx->Let();
	if (isConst) out << "const ";

	symbolTable[id] = (isConst ? "const " : "") + ctx->theTypeId()->getText() + "&";
	printTypeId(ctx->theTypeId());
	out << "& " << id << ";";
}

void CppAdvanceCodegen::printMultiDeclaration(CppAdvanceParser::MultiDeclarationContext* ctx) const
{
	const auto& ids = ctx->Identifier();
	bool first = true;
	currentDeclarationName = ids[0]->getText();
	for (auto idctx : ids)
	{
		auto id = idctx->getText();
		symbolTable[id] = "";
		if (auto spec = ctx->declSpecifierSeq())
		{
			printDeclSpecifierSeq(spec);
		}
		out << "auto " << id << " = ";
		currentType = symbolTable[id];
		if (first)
		{
			printInitializerClause(ctx->initializerClause());
		}
		else
		{
			out << ids[0]->getText();
		}
		out << "; ";
		first = false;
	}
	currentDeclarationName.clear();
}

void CppAdvanceCodegen::printConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext* ctx) const
{
	if (functionBody)
	{
		out << "constexpr ";
		bool isArray = false;
		if (auto t = ctx->theTypeId())
		{
			isDeclaration = true;
			printTypeId(t);
			isDeclaration = false;
			isArray = t->arrayDeclarator();
			currentType = t->getText();
		}
		else
		{
			out << "auto";
		}

		out << " " << ctx->Identifier()->getText();
		if (isArray) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
		out << " = ";
		currentDeclarationName = ctx->Identifier()->getText();
		printInitializerClause(ctx->initializerClause());
		out << ";";
        currentDeclarationName.clear();
	}
}

void CppAdvanceCodegen::printForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext* ctx) const
{
	if (functionBody)
	{
		out << "decltype(auto) " << ctx->Identifier()->getText() << " = ";
		currentDeclarationName = ctx->Identifier()->getText();
		printInitializerClause(ctx->initializerClause());
		out << ";";
		currentDeclarationName.clear();
	}
}

void CppAdvanceCodegen::printAliasDeclaration(CppAdvanceParser::AliasDeclarationContext* ctx) const
{
	if (functionBody)
	{
		if (auto tpl = ctx->templateParams()) {
			isFunctionDeclaration = true;
            printTemplateParams(tpl);
			isFunctionDeclaration = false;
			out << " ";
		}
		auto name = ctx->Identifier()->getText();
		sema.typeset.insert(name);
		out << "using " << name << " = ";
		printTypeId(ctx->theTypeId());
		out << ";";
	}
}

void CppAdvanceCodegen::printExpression(CppAdvanceParser::ExprContext* ctx) const
{
	bool first = true;
	/*for (auto expr : ctx->assignmentExpression())
	{
		if (!first) out << ", ";
		first = false;
		printAssignmentExpression(expr);
	}*/
	printAssignmentExpression(ctx->assignmentExpression());
}

void CppAdvanceCodegen::printAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext* ctx) const
{
	if (auto cond = ctx->conditionalExpression())
	{
		printConditionalExpression(cond);
	}
	else if (auto expr = ctx->throwExpression())
	{
		printThrowExpression(expr);
	}
	else
	{
		lvalue = true;
		if (ctx->assignmentOperator()->Assign()) isAssignment = true;
		auto left = ctx->logicalOrExpression()->getText();
		bool paren = false;
		if (isAssignment && sema.uninitConstructs.contains(ctx) && (symbolTable[left] == "#DeferredInit" || symbolTable[left] == "#Out")) {
			out << left << ".construct(";
			paren = true;
		}
		else {
			printLogicalOrExpression(ctx->logicalOrExpression());
			printAssignmentOperator(ctx->assignmentOperator());
		}
		lvalue = false; 
		printInitializerClause(ctx->initializerClause());
		if (paren) out << ")";
		isAssignment = false;
	}
}

void CppAdvanceCodegen::printAssignmentOperator(CppAdvanceParser::AssignmentOperatorContext* ctx) const
{
	if (ctx->Assign())
	{
		out << " = ";
	}
	else if (ctx->PlusAssign())
	{
		out << " += ";
	}
	else if (ctx->MinusAssign())
	{
		out << " -= ";
	}
	else if (ctx->StarAssign())
	{
		out << " *= ";
	}
	else if (ctx->DivAssign())
	{
		out << " /= ";
	}
	else if (ctx->ModAssign())
	{
		out << " %= ";
	}
	else if (ctx->AndAssign())
	{
		out << " &= ";
	}
	else if (ctx->OrAssign())
	{
		out << " |= ";
	}
	else if (ctx->XorAssign())
	{
		out << " ^= ";
	}
	else if (ctx->LeftShiftAssign())
	{
		out << " <<= ";
	}
	else if (ctx->RightShiftAssign())
	{
		out << " >>= ";
	}
}

void CppAdvanceCodegen::printInitializerClause(CppAdvanceParser::InitializerClauseContext* ctx) const
{
	if (auto expr = ctx->assignmentExpression())
	{
		printAssignmentExpression(expr);
	}
	else if (auto init = ctx->bracedInitList())
	{
		printBracedInitList(init);
	}
}

void CppAdvanceCodegen::printBracedInitList(CppAdvanceParser::BracedInitListContext* ctx) const
{
	out << "{ ";
	if (auto lst = ctx->initializerList())
	{
		printInitializerList(lst);
	}
	out << " }";
}

void CppAdvanceCodegen::printInitializerList(CppAdvanceParser::InitializerListContext* ctx) const
{
	bool first = true;
	int i = 0;
	for (auto part : ctx->initializerPart())
	{
		if (!first) out << ", ";
		first = false;
		if (varargDepth == i++) out << "std::initializer_list{";
		printInitializerPart(part);
	}
	if (varargDepth >= 0) out << "}";
}

void CppAdvanceCodegen::printInitializerPart(CppAdvanceParser::InitializerPartContext* ctx) const
{
	printInitializerClause(ctx->initializerClause());
	if (ctx->Ellipsis())
		out << "...";
}

void CppAdvanceCodegen::printThrowExpression(CppAdvanceParser::ThrowExpressionContext* ctx) const
{
	if (auto expr = ctx->assignmentExpression())
	{
		out << "CppAdvance::Throw(";
		printAssignmentExpression(expr);
		out << ")";
	}
	else
	{
		out << "throw";
	}
}

void CppAdvanceCodegen::printExpressionList(CppAdvanceParser::ExpressionListContext* ctx) const
{
	bool first = true;
	int i = 0;
	for (auto part : ctx->expressionListPart())
	{
		if (!first) out << ", ";
		if (varargDepth == i++) out << "std::initializer_list{";
		printExpressionListPart(part);
		first = false;
	}
	if (varargDepth >= 0) out << "}";
}

void CppAdvanceCodegen::printExpressionListPart(CppAdvanceParser::ExpressionListPartContext* ctx) const
{
	if (auto expr = ctx->conditionalExpression())
	{
		printConditionalExpression(expr);
	}
	else if (auto init = ctx->bracedInitList())
	{
		printBracedInitList(init);
	}
	else if (ctx->Out())
	{
		auto id = ctx->Identifier()->getText();
		out << "CppAdvance::Out(&" << id << ")";
		symbolTable[id] = "#DeferredInit";
	}
	if (ctx->Ellipsis())
	{
		out << "...";
	}
}

void CppAdvanceCodegen::printExpressionSeq(CppAdvanceParser::ExpressionSeqContext* ctx) const
{
	bool first = true;
	for (auto expr : ctx->expr())
	{
		if (!first) out << ", ";
		printExpression(expr);
		first = false;
	}
}

void CppAdvanceCodegen::printConstantExpression(CppAdvanceParser::ConstantExpressionContext* ctx) const
{
	printConditionalExpression(ctx->conditionalExpression());
}

void CppAdvanceCodegen::printConditionalExpression(CppAdvanceParser::ConditionalExpressionContext* ctx) const
{
	lvalue = false;
	printLogicalOrExpression(ctx->logicalOrExpression());
	if (auto expr1 = ctx->expr())
	{
		out << " ? ";
		printExpression(expr1);
		out << " : ";
		printAssignmentExpression(ctx->assignmentExpression());
	}
}

void CppAdvanceCodegen::printLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext* ctx) const
{
	bool first = true;
	for (auto andExpr : ctx->logicalAndExpression())
	{
		if (!first) out << " || ";
		first = false;
		printLogicalAndExpression(andExpr);
	}
}

void CppAdvanceCodegen::printLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext* ctx) const
{
	bool first = true;
	for (auto expr : ctx->inclusiveOrExpression())
	{
		if (!first) out << " && ";
		first = false;
		printInclusiveOrExpression(expr);
	}
}

void CppAdvanceCodegen::printInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext* ctx) const
{
	bool first = true;
	for (auto expr : ctx->exclusiveOrExpression())
	{
		if (!first) out << " | ";
		first = false;
		printExclusiveOrExpression(expr);
	}
}

void CppAdvanceCodegen::printExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext* ctx) const
{
	bool first = true;
	for (auto expr : ctx->andExpression())
	{
		if (!first) out << " ^ ";
		first = false;
		printAndExpression(expr);
	}
}

void CppAdvanceCodegen::printAndExpression(CppAdvanceParser::AndExpressionContext* ctx) const
{
	bool first = true;
	for (auto expr : ctx->equalityExpression())
	{
		if (!first) out << " & ";
		first = false;
		printEqualityExpression(expr);
	}
}

void CppAdvanceCodegen::printEqualityExpression(CppAdvanceParser::EqualityExpressionContext* ctx) const
{
	printRelationalExpression(ctx->relationalExpression());
	for (auto branch : ctx->equalityBranch())
	{
		if (branch->Equal())
			out << " == ";
		else
			out << " != ";
		printRelationalExpression(branch->relationalExpression());
	}
}

void CppAdvanceCodegen::printRelationalExpression(CppAdvanceParser::RelationalExpressionContext* ctx) const
{
	printThreeWayComparisonExpression(ctx->threeWayComparisonExpression());
	if (auto branch = ctx->relationalBranch())
	{
		if (branch->LessEqual())
			out << " <= ";
		else if (branch->GreaterEqual())
			out << " >= ";
		else if (branch->Less())
			out << " < ";
		else
			out << " > ";
		printThreeWayComparisonExpression(branch->threeWayComparisonExpression());
	}
}

void CppAdvanceCodegen::printThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext* ctx) const
{
	printShiftExpression(ctx->shiftExpression(0));
	if (ctx->Spaceship())
	{
		out << " <=> ";
		printShiftExpression(ctx->shiftExpression(1));
	}
}

void CppAdvanceCodegen::printShiftExpression(CppAdvanceParser::ShiftExpressionContext* ctx) const
{
	printAdditiveExpression(ctx->additiveExpression());
	for (auto branch : ctx->shiftBranch())
	{
		if (!branch->shiftOperator()->Less().empty())
			out << " << ";
		else
			out << " >> ";
		printAdditiveExpression(branch->additiveExpression());
	}
}

void CppAdvanceCodegen::printAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext* ctx) const
{
	printMultiplicativeExpression(ctx->multiplicativeExpression());
	for (auto branch : ctx->additiveBranch())
	{
		if (branch->Plus())
			out << " + ";
		else
			out << " - ";
		printMultiplicativeExpression(branch->multiplicativeExpression());
	}
}

void CppAdvanceCodegen::printMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext* ctx) const
{
	printUnaryExpression(ctx->unaryExpression());
	for (auto branch : ctx->multiplicativeBranch())
	{
		if (branch->Star())
			out << " * ";
		else if (branch->Div())
			out << " / ";
		else
			out << " % ";
		printUnaryExpression(branch->unaryExpression());
	}
}

void CppAdvanceCodegen::printUnaryExpression(CppAdvanceParser::UnaryExpressionContext* ctx) const
{
	if (auto expr = ctx->unaryExpression())
	{
		if (auto upo = ctx->unaryPrefixOperator())
		{
			literalMinus = upo->Minus();
			if (upo->Plus())
				out << "+";
			else if (upo->Tilde())
				out << "~";
			else if (upo->Not())
				out << "!";
		}
		else if (ctx->PlusPlus())
		{
			out << "++";
		}
		else if (ctx->MinusMinus())
		{
			out << "--";
		}
		else if (ctx->Sizeof())
		{
			out << "CppAdvance::usize(sizeof ";
		}
		else if (ctx->refCaptureOperator())
		{
			out << "CppAdvance::MutableRef<std::remove_cvref_t<decltype(";
			printUnaryExpression(expr);
			out << ")>>(";
		}
		else if (ctx->Out())
		{
			isOutExpression = true;
			out << "CppAdvance::Out(&";
			/*printUnaryExpression(expr);
			out << "(&";*/
		}
		printUnaryExpression(expr);
		if (ctx->Sizeof() || ctx->refCaptureOperator() || ctx->Out()) out << ")";
		isOutExpression = false;
	}
	else if (auto postfix = ctx->postfixExpression())
	{
		printPostfixExpression(postfix);
	}
	else if (ctx->Sizeof())
	{
		out << "CppAdvance::usize(sizeof";
		if (ctx->Ellipsis()) out << "...";
		out << "(";
		if (ctx->theTypeId()) printTypeId(ctx->theTypeId());
		if (ctx->Identifier()) out << ctx->Identifier()->getText();
		out << "))";
	}
	else if (ctx->Alignof())
	{
		out << "CppAdvance::usize(alignof(";
		printTypeId(ctx->theTypeId());
		out << "))";
	}
	
	literalMinus = false;
}

void CppAdvanceCodegen::printPostfixExpression(CppAdvanceParser::PostfixExpressionContext* ctx) const
{
	if (ctx->LeftParen())
	{
		if (auto expr = ctx->postfixExpression())
		{
			auto txt = expr->getText();
			auto dotpos = txt.rfind('.');
			auto tplpos = txt.rfind('<');
			if (dotpos != txt.npos && tplpos != txt.npos && dotpos < tplpos || dotpos == txt.npos && tplpos != txt.npos) txt = txt.substr(0, tplpos);
			auto txt2 = txt;
			bool extension = false;
			int currentArg = 0;
			if (sema.typeset.contains(txt))
			{
				printPostfixExpression(expr);
				out << "{";
				if (auto expressions = ctx->expressionList())
				{
					printExpressionList(expressions);
				}
				out << "}";
			}
			else
			{
				if (sema.cppParser.varargFunctions.contains(txt)) varargDepth = sema.cppParser.varargFunctions[txt];
				else {
					if (txt.find('.') != std::string::npos) txt2 = txt.substr(txt.rfind('.') + 1);
					if (auto expr2 = expr->postfixExpression())
						txt2 = sema.contextTypes[expr2] + "." + txt2;
					if (sema.cppParser.varargFunctions.contains(txt2)) varargDepth = sema.cppParser.varargFunctions[txt2];
					if (sema.functionTable.contains(txt2)) txt = txt2;
					else if (expr->idExpression()) {
						extension = true;
						txt2 = expr->idExpression()->getText(); 
						if (txt2.find('<') != txt2.npos) txt2 = txt2.substr(0, txt2.find('<'));
						if (sema.functionTable.contains(txt2)) txt = txt2;
						if (varargDepth < 0 && sema.cppParser.varargFunctions.contains(txt2)) {
							varargDepth = sema.cppParser.varargFunctions[txt2];
						}
					}
				}
				auto prev = varargDepth;
				varargDepth = -1;
				bool startDone = false;

				if (expr->Dot() && expr->postfixExpression())
				{
					auto left = expr->postfixExpression()->getText();
					auto dotpos = left.rfind('.');
					auto tplpos = left.rfind('<');
					if (dotpos != left.npos && tplpos != left.npos && dotpos < tplpos || dotpos == left.npos && tplpos != left.npos) left = left.substr(0, tplpos);
					auto funcname = expr->idExpression()->getText();
					bool tpl = false;
					if (funcname.find('<') != funcname.npos) {
						tpl = true;
						funcname = funcname.substr(0, funcname.find('<'));
					}

					if (!sema.typeset.contains(left) && !sema.cppParser.namespaces.contains(left) && funcname != currentDeclarationName && !expr->Greater())
					{
						std::string ufcs = "ADV_UFCS";
						if (tpl) ufcs += "_TEMPLATE";
						if (!functionBody) ufcs += "_NONLOCAL";
						out << ufcs << "(";
						printIdExpression(expr->idExpression());
						out << ")(";
                        printPostfixExpression(expr->postfixExpression());
						out << ".__ref()";
						if(ctx->expressionList()) out << ", ";;
						varargDepth = prev;
						startDone = true;
						if (extension) ++currentArg;
					}
				}
				
				if (!startDone) {
					printPostfixExpression(expr);
					out << "(";
				}
				if (auto expressions = ctx->expressionList())
				{
					int paramCount = expressions->expressionListPart().size();
					std::set<std::string> namedArgs;
					for (auto param : expressions->expressionListPart())
					{
						if (auto id = param->Identifier())
						{
							if (!param->Out()) namedArgs.insert(id->getText());
						}
					}

					bool params1 = sema.cppParser.parametersTable.contains(txt);
					bool params2 = sema.cppParser.parametersTable.contains(txt2);
					bool printed = false;
					if (!namedArgs.empty() && (params1 || params2))
					{
						std::string signature;
						if (params1)
						{
							for (const auto& signatures : sema.cppParser.parametersTable[txt])
							{
								auto args = StringSplit(signatures, ",,");
								if (args.size() >= paramCount) {
									int i = 0;
									for (const auto& arg : args) {
										if (namedArgs.contains(arg.substr(0, arg.find('='))))
											++i;
										if (namedArgs.size() == i) {
											signature = signatures;
											break;
										}
									}
								}
								if (!signature.empty()) break;
							}
						}
						if (signature.empty() && params2) 
						{
							for (const auto& signatures : sema.cppParser.parametersTable[txt2])
							{
								auto args = StringSplit(signatures, ",,");
								if (args.size() >= paramCount) {
									int i = 0;
									for (const auto& arg : args) {
										if (namedArgs.contains(arg.substr(0, arg.find('='))))
											++i;
										if (namedArgs.size() == i) {
											signature = signatures;
											break;
										}
									}
								}
								if (!signature.empty()) break;
							}
						}

						if (signature.empty())
							out << "Signature not found!";
						else
						{
							printed = true;
							auto args = StringSplit(signature, ",,");
							paramCount = args.size();
							std::unordered_map<int, std::string> argOrder;
							std::unordered_map<std::string, std::string> defaultValues;
							int i = 0;
							for (const auto& arg : args) {
								auto pos = arg.find('=');
								argOrder[i++] = arg.substr(0, pos);
								if (pos != arg.npos)
									defaultValues[arg.substr(0, pos)] = arg.substr(pos + 1);
							}

							if (extension) --currentArg;
							while (auto param = expressions->expressionListPart(currentArg))
							{
								if (param->Identifier()) break;
								if (currentArg > 0) out << ", ";
								printExpressionListPart(param);
								++currentArg;
							}

							std::unordered_map<std::string, CppAdvanceParser::ExpressionListPartContext*> namedArgValues;
							for (i = currentArg; i < expressions->expressionListPart().size(); ++i)
							{
								auto param = expressions->expressionListPart(i);
								if (param->Identifier())
								{
									namedArgValues[param->Identifier()->getText()] = param;
								}
							}

							if (extension) ++currentArg;
							while (currentArg < paramCount)
							{
								if (currentArg > (int)extension) out << ", ";
								auto arg = argOrder[currentArg];
								if (namedArgValues.contains(arg))
								{
									printExpressionListPart(namedArgValues[arg]);
								}
								else if (defaultValues.contains(arg))
								{
									out << defaultValues[arg];
								}
								else if (sema.activeDefaultParams.contains(txt) && sema.activeDefaultParams[txt].contains(arg))
								{
									printInitializerClause(sema.activeDefaultParams[txt][arg]);
								}
								else if (sema.activeDefaultParams.contains(txt2) && sema.activeDefaultParams[txt2].contains(arg))
								{
									printInitializerClause(sema.activeDefaultParams[txt2][arg]);
								}
								++currentArg;
							}
						}
					}
					if (!printed)
						printExpressionList(expressions);
				}
				out << ")";
				varargDepth = -1;
			}
		}
		else if (auto t = ctx->simpleTypeSpecifier())
		{
			printSimpleTypeSpecifier(t);
			out << "{";
			if (auto expressions = ctx->expressionList())
			{
				printExpressionList(expressions);
			}
			out << "}";
		}
	}
	else if (ctx->LeftBracket())
	{
		printPostfixExpression(ctx->postfixExpression());
		auto expr = ctx->expressionList();
		if (expr->expressionListPart().size() == 1) {
			out << "[";
			printExpressionList(ctx->expressionList());
			out << "]";
		}
		else
		{
			out << "._operator_subscript(";
			printExpressionList(ctx->expressionList());
			out << ")";
		}
	}
	else if (ctx->Dot())
	{
		if (auto literal = ctx->IntegerLiteral())
		{
			out << "std::get<" << literal->getText() << ">(";
			printPostfixExpression(ctx->postfixExpression());
			out << ")";
		}
		else {
			auto txt = ctx->getText();
			auto dotpos = txt.rfind('.');
			auto tplpos = txt.rfind('<');
			if (dotpos != txt.npos && tplpos != txt.npos && dotpos < tplpos || dotpos == txt.npos && tplpos != txt.npos) txt = txt.substr(0, tplpos);
			if (sema.typeset.contains(txt))
			{
				StringReplace(txt, ".", "::");
				if (sema.protectedSymbols.contains(txt)) txt = "__" + filename + "_Protected::" + txt;
				out << txt;
				//printIdExpression(ctx->idExpression());
			}
			else {
				txt = txt.substr(0, dotpos);
				dotpos = txt.rfind('.');
				tplpos = txt.rfind('<');
				auto txtName = txt;
				if (dotpos != txt.npos && tplpos != txt.npos && dotpos < tplpos || dotpos == txt.npos && tplpos != txt.npos) {
					txtName = txt.substr(0, tplpos);
				}
				if (sema.typeset.contains(txtName) || sema.cppParser.namespaces.contains(txtName))
				{
					StringReplace(txt, ".", "::");
					//if (sema.protectedSymbols.contains(txt)) out << "__" + filename + "_Protected::";
					//out << txt;
					printPostfixExpression(ctx->postfixExpression());
					out << "::";
					printIdExpression(ctx->idExpression());
				}
				else
				{
					printPostfixExpression(ctx->postfixExpression());
					out << ".__ref().";
					printIdExpression(ctx->idExpression());
				}
			}
		}
		
	}
	else if (ctx->PlusPlus())
	{
		printPostfixExpression(ctx->postfixExpression());
		out << "++";
	}
	else if (ctx->MinusMinus())
	{
		printPostfixExpression(ctx->postfixExpression());
		out << "--";
	}
	else if (auto op = ctx->unaryPostfixOperator())
	{
		out << "(";
		auto parens = 1;
		if (op->Amp())
		{
			out << (isUnsafe ? "CppAdvance::Unsafe::" : "") << "__RawPtr(std::addressof(";
			parens += 2;
		}
		else
		{
			for (auto a : op->Star())
			{
				out << "*(";
				++parens;
			}
			for (auto a : op->DoubleStar())
			{
				out << "*(*(";
				parens += 2;
			}
		}
		printPostfixExpression(ctx->postfixExpression());
		out << std::string(parens,')');
	}
	else if (auto primary = ctx->primaryExpression())
	{
		printPrimaryExpression(primary);
	}
	else if (ctx->Move())
	{
		out << "std::move(";
		printPostfixExpression(ctx->postfixExpression());
		out << ")";
	}
	else if (ctx->Forward())
	{
		out << "std::forward<decltype(";
		printPostfixExpression(ctx->postfixExpression());
		out << ")>(";
		printPostfixExpression(ctx->postfixExpression());
		out << ")";
	}
}

void CppAdvanceCodegen::printPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext* ctx) const
{
	if (auto id = ctx->idExpression())
	{
		if (literalMinus)
			out << "-";
		auto txt = id->getText();
		if (lvalue) {
			currentType = symbolTable[txt];
		}
		if (sema.protectedSymbols.contains(txt)) out << "__" << filename << "_Protected::";
		printIdExpression(id);
		if (!isOutExpression && (symbolTable[txt] == "#DeferredInit" || symbolTable[txt] == "#Out"))
			out << ".value()";
	} else if (auto t = ctx->theTypeId())
	{
		if (literalMinus)
			out << "-";
		printTypeId(t);
		out << "::" << ctx->Identifier()->getText();
	}
	else if (auto expr = ctx->expr())
	{
		if (literalMinus)
			out << "-";
		out << "(";
		printExpression(expr);
		out << ")";
	} 
	else if(auto literal = ctx->literal())
	{
		printLiteral(literal);
	}
	else if (auto tup = ctx->tupleExpression())
	{
		printTupleExpression(tup);
	}
	else if (ctx->This())
	{
		out << "(*this)";
	}
	else if (ctx->Super())
	{
		out << "__super";
	}
	else if (ctx->Field())
	{
		if (!currentPropertyField.empty())
		{
			out << currentPropertyField;
		}
		else
		{
			out << "field";
		}
	}
}

void CppAdvanceCodegen::printTupleExpression(CppAdvanceParser::TupleExpressionContext* ctx) const
{
	if (!ctx->conditionalExpression().empty())
	{
		out << "std::make_tuple(";
		bool first = true;
		for (auto expr : ctx->conditionalExpression())
		{
			if (!first) out << ", ";
			first = false;
			printConditionalExpression(expr);
		}
		out << ")";
	}
}

void CppAdvanceCodegen::printTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext* ctx) const
{
	/*auto txt = ctx->getText();
	if (txt.find('.') != txt.npos)
	{
		out << "typename ";
	}*/
	auto pointerDepth = 0;
	for (auto p : ctx->pointerOperator())
	{
		if (p->DoubleStar()) pointerDepth += 2;
		else ++pointerDepth;
	}
	if (pointerDepth) isPtr = true;
	for (auto i = 0; i < pointerDepth; i++) out << (isUnsafe ? "CppAdvance::Unsafe::" : "") << (isVolatile ? "__VolatileRawPtr<" : "__RawPtr<");
	if (auto cv = ctx->cvQualifier())
	{
		if (cv->Const()) out << "const ";
		else if (cv->Volatile()) out << "volatile ";
	}
	if (ctx->Void())
	{
		out << "void";
	}
	else {
		printSimpleTypeSpecifier(ctx->simpleTypeSpecifier());
	}
	
	for (auto i = 0; i < pointerDepth; i++) out << ">";
	isPtr = false;
}

void CppAdvanceCodegen::printTypeId(CppAdvanceParser::TheTypeIdContext* ctx) const
{
	printTypeSpecifierSeq(ctx->typeSpecifierSeq());
	if (auto arr = ctx->arrayDeclarator())
	{
		if (isDeclaration) return;
		printArrayDeclarator(arr);
	}
}

void CppAdvanceCodegen::printArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext* ctx) const
{
	for (auto expr : ctx->constantExpression())
	{
		out << "[size_t(";
		printConstantExpression(expr);
		out << ")]";
	}
}

void CppAdvanceCodegen::printIdExpression(CppAdvanceParser::IdExpressionContext* ctx) const
{
	/*if (auto q = ctx->qualifiedId())
	{
		printQualifiedId(q);
	}
	else */if(auto u = ctx->unqualifiedId())
	{
		printUnqualifiedId(u);
	}
}

void CppAdvanceCodegen::printQualifiedId(CppAdvanceParser::QualifiedIdContext* ctx) const
{
	printNestedNameSpecifier(ctx->nestedNameSpecifier());
	printUnqualifiedId(ctx->unqualifiedId());
}

void CppAdvanceCodegen::printUnqualifiedId(CppAdvanceParser::UnqualifiedIdContext* ctx) const
{
	if (isVersionCondition)
	{
		auto id = ctx->Identifier()->getText();
		out << "ADV_VERSION_";
		if (sema.protectedVersions.contains(id)) out << "__" << StringUpper(filename) << "_PROTECTED_";
		out << id;
	}
	else
	{
		if (auto tid = ctx->templateId())
		{
			printTemplateIdentifier(tid);
		}
		else if (auto id = ctx->operatorFunctionId())
		{
			printOperatorFunctionId(id);
		}
		else if (auto id = ctx->conversionFunctionId())
		{
			printConversionFunctionId(id);
		}
		else if (ctx->Tilde())
		{
			out << "~";
			if (auto cls = ctx->className())
			{
				printClassName(cls);
			}
			else
			{
				out << "decltype(";
				printExpression(ctx->decltypeSpecifier()->expr());
				out << ")";
			}
		}
		else
		{
			out << ctx->Identifier()->getText();
		}
	}
}

void CppAdvanceCodegen::printNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext* ctx) const
{
	if (auto nested = ctx->nestedNameSpecifier())
	{
		printNestedNameSpecifier(nested);
		if (auto tid = ctx->simpleTemplateId())
		{
			printSimpleTemplateId(tid);
		}
		else
		{
			out << ctx->Identifier()->getText();
		}
		out << "::";
	}
	else
	{
		if (auto name = ctx->typename_())
		{
			if (auto tid = name->simpleTemplateId())
			{
				printSimpleTemplateId(tid);
			}
			else
			{
				out << name->getText();
			}
		}
		if (auto name = ctx->namespaceName())
		{
			out << name->getText();
		}
		if (auto decl = ctx->decltypeSpecifier())
		{
			out << "decltype(";
			printExpression(decl->expr());
			out << ")";
		}
		out << "::";
	}
}

void CppAdvanceCodegen::printLiteral(CppAdvanceParser::LiteralContext* ctx) const
{
	if (auto literal = ctx->IntegerLiteral()) {
		auto txt = literal->getText();
		printIntegerLiteral(std::move(txt), literalMinus);
	}
	else if (auto literal = ctx->FloatingLiteral()) {
		auto txt = literal->getText();
		printFloatLiteral(std::move(txt), literalMinus);
	}
	else if (auto literal = ctx->DecimalTypeLiteral()) {
		auto txt = literal->getText();
		printDecimalLiteral(std::move(txt), literalMinus);
	}
	else if (auto literal = ctx->BooleanLiteral()) {
		out << literal->getText();
	}
	else if (auto literal = ctx->Null()) {
		out << "nullptr";
	}
	else if (auto literal = ctx->CharacterLiteral()) {
		auto txt = literal->getText();
		printCharacterLiteral(std::move(txt));
	}
	else if (auto literal = ctx->StringLiteral()) {
		auto txt = literal->getText();
		printStringLiteral(std::move(txt));
	}
	else if (auto literal = ctx->MultilineStringLiteral()) {
		auto txt = literal->getText();
		printMultilineStringLiteral(std::move(txt));
	}
}

void CppAdvanceCodegen::printIntegerLiteral(std::string txt, bool minus) const {
	StringReplace(txt, "_", "");
	StringReplace(txt, "0o", "0");
	if (txt.ends_with("i8")) {
		out << "CppAdvance::i8(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 2) << ")";
	}
	else if (txt.ends_with("i16")) {
		out << "CppAdvance::i16(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 3) << ")";
	}
	else if (txt.ends_with("i32")) {
		out << "CppAdvance::i32(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 3) << ")";
	}
	else if (txt.ends_with("i64")) {
		out << "CppAdvance::i64(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 3) << "LL)";
	}
	else if (txt.ends_with("u8")) {
		out << "CppAdvance::u8(" << txt.substr(0, txt.length() - 2) << "U)";
	}
	else if (txt.ends_with("u16")) {
		out << "CppAdvance::u16(" << txt.substr(0, txt.length() - 3) << "U)";
	}
	else if (txt.ends_with("u32")) {
		out << "CppAdvance::u32(" << txt.substr(0, txt.length() - 3) << "U)";
	}
	else if (txt.ends_with("u64")) {
		out << "CppAdvance::u64(" << txt.substr(0, txt.length() - 3) << "ULL)";
	}
	else if (txt.ends_with("iz")) {
		out << "CppAdvance::isize(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 2) << ")";
	}
	else if (txt.ends_with("uz")) {
		out << "CppAdvance::usize(" << txt.substr(0, txt.length() - 2) << "U)";
	}
	else if (txt.ends_with("i128")) {
		auto base = 10;
		auto offset = 0;
		if (txt.length() >= 6 && txt[0] == '0') {
			if (txt[1] == 'b') { base = 2; offset = 2; }
			else if (txt[1] == 'x') { base = 16; offset = 2; }
			else { base = 8; offset = 1; }
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str() + offset, txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > (uint64_t(INT64_MAX) + 1) || (!minus && value == (uint64_t(INT64_MAX) + 1))) {
			out << "CppAdvance::i128::Parse(\"" << (minus ? "-" : "") << txt.substr(0, txt.length() - 4) << "\")";
		}
		else {
			out << "CppAdvance::i128(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 4) << "LL)";
		}
	}
	else if (txt.ends_with("u128")) {
		auto base = 10;
		auto offset = 0;
		if (txt.length() >= 6 && txt[0] == '0') {
			if (txt[1] == 'b') { base = 2; offset = 2; }
			else if (txt[1] == 'x') { base = 16; offset = 2; }
			else { base = 8; offset = 1; }
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str() + offset, txt.c_str() + txt.length(), value, base);
		if ((int)result.ec) {
			out << "CppAdvance::u128::Parse(\"" << txt.substr(0, txt.length() - 4) << "\")";
		}
		else {
			out << "CppAdvance::u128(" << txt.substr(0, txt.length() - 4) << "ULL)";
		}
	}
	else if (txt.ends_with("big")) {
		auto base = 10;
		auto offset = 0;
		if (txt.length() >= 6 && txt[0] == '0') {
			if (txt[1] == 'b') { base = 2; offset = 2; }
			else if (txt[1] == 'x') { base = 16; offset = 2; }
			else { base = 8; offset = 1; }
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str() + offset, txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > (uint64_t(INT64_MAX) + 1) || (!minus && value == (uint64_t(INT64_MAX) + 1))) {
			out << "BigInt(CppAdvance::BigIntLiteral{\"" << (minus ? "-" : "") << txt.substr(0, txt.length() - 3) << "\"})";
		}
		else {
			out << "BigInt(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 3) << "LL)";
		}
	}
	else if (txt.ends_with("u")) {
		auto base = 10;
		auto offset = 0;
		if (txt.length() >= 2 && txt[0] == '0') {
			if (txt[1] == 'b') { base = 2; offset = 2; }
			else if (txt[1] == 'x') { base = 16; offset = 2; }
			else { base = 8; offset = 1; }
		}
		if (txt == "0u") {
			out << "CppAdvance::u32(0U)";
		}
		else
		{
			auto value = 0ull;
			auto result = std::from_chars(txt.c_str() + offset, txt.c_str() + txt.length(), value, base);
			if ((int)result.ec) {
				if (txt[0] != '0' && (txt.length() < 40 || (txt.length() == 40 && (txt < "340282366920938463463374607431768211455")))) {
					out << "CppAdvance::u128::Parse(\"" << txt.substr(0, txt.length() - 1) << "\")";
				}
				else
				{
					out << "CppAdvance::BigIntLiteral{\"" << txt.substr(0, txt.length() - 1) << "\"}";
				}
			}
			else if (value > UINT32_MAX) {
				out << "CppAdvance::u64(" << txt.substr(0, txt.length() - 1) << "ULL)";
			}
			else {
				out << "CppAdvance::u32(" << txt.substr(0, txt.length() - 1) << "U)";
			}
		}
	}
	else {
		auto base = 10;
		auto offset = 0;
		if (txt.length() >= 2 && txt[0] == '0') {
			if (txt[1] == 'b') { base = 2; offset = 2; }
			else if (txt[1] == 'x') { base = 16; offset = 2; }
			else { base = 8; offset = 1; }
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str() + offset, txt.c_str() + txt.length(), value, base);
		if ((int)result.ec) {
			if (txt[0] != '0' && (txt.length() < 39 || (txt.length() == 39 && (txt < "170141183460469231731687303715884105728" || (txt == "170141183460469231731687303715884105728" && minus))))) {
				out << "CppAdvance::i128::Parse(\"" << (minus ? "-" : "") << txt << "\")";
			}
			else
			{
				out << "CppAdvance::BigIntLiteral{\"" << (minus ? "-" : "") << txt << "\"}";
			}
		}
		else if (value > 9223372036854775808 || (value == 9223372036854775808 && !minus)) {
			out << "CppAdvance::i128::Parse(\"" << (minus ? "-" : "") << txt << "\")";
		}
		else if (value > 2147483648 || (value == 2147483648 && !minus)) {
			out << "CppAdvance::i64(" << (minus ? "-" : "") << txt << "LL)";
		}
		else if (!currentType.empty()) {
			if (currentType == "i8" && value < 128)
			{
				out << "CppAdvance::i8((signed char)" << (minus ? "-" : "") << txt << ")";
			}
			else if(currentType == "i16" && value < 32768)
			{
				out << "CppAdvance::i16((short)" << (minus ? "-" : "") << txt << ")";
			}
			else if (!minus)
			{
				if (currentType == "u8" && value < 256)
				{
					out << "CppAdvance::u8((unsigned char)" << txt << ")";
				}
				else if (currentType == "u16" && value < 65536)
				{
					out << "CppAdvance::u16((unsigned short)" << txt << ")";
				}
				else if (currentType == "u32")
				{
					out << "CppAdvance::u32(" << txt << "U)";
				}
				else if (currentType == "u64")
				{
					out << "CppAdvance::u64(" << txt << "ULL)";
				}
				else if (currentType == "u128")
				{
					out << "CppAdvance::u128(" << txt << "ULL)";
				} 
				else if (currentType == "usize")
				{
					out << "CppAdvance::usize(" << txt << "U)";
				}
				else {
					out << "CppAdvance::i32(" << txt << ")";
				}
			}
			else {
				out << "CppAdvance::i32(" << (minus ? "-" : "") << txt << ")";
			}
			
		}
		else {
			out << "CppAdvance::i32(" << (minus ? "-" : "") << txt << ")";
		}
	}
}
void CppAdvanceCodegen::printFloatLiteral(std::string txt, bool minus) const
{
	StringReplace(txt, "_", "");
	if (txt.ends_with("fext")) 
	{
		out << "CppAdvance::fext(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 4) << "L)";
	}
	else if (txt.ends_with("f")) 
	{
		out << "CppAdvance::f32(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 1) << "f)";
	}
	else if (txt.ends_with("f32"))
	{
		out << "CppAdvance::f32(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 3) << "f)";
	}
	else if (txt.ends_with("f64"))
	{
		out << "CppAdvance::f64(" << (minus ? "-" : "") << txt.substr(0, txt.length() - 3) << ")";
	}
	else
	{
		out << "CppAdvance::f64(" << (minus ? "-" : "") << txt << ")";
	}
}

void CppAdvanceCodegen::printDecimalLiteral(std::string txt, bool minus) const
{
	StringReplace(txt, "_", "");
	txt = txt.substr(0, txt.length() - 1);
	auto parts = StringSplit(txt, '.');
	int64_t ipart = 0;
	uint64_t fpart = 0;
	try {
		ipart = (int64_t)stoull(parts[0]);
		fpart = stoull(parts[1]);
	}
	catch (...) {}
	if (minus) ipart = -ipart;
	int radix = parts[1].length();
	out << "Decimal<" << radix << ">(CppAdvance::DecimalLiteral{" << ipart << ", " << fpart << "u})";
}

void CppAdvanceCodegen::printCharacterLiteral(std::string txt) const
{
	if (txt.starts_with('b'))
	{
		out << "CppAdvance::char8(" << txt.substr(1) << ")";
	}
	else if (txt.starts_with('U'))
	{
		out << "CppAdvance::char32(" << txt << ")";
	}
	else
	{
		txt = txt.substr(1, txt.length() - 2);
		if (txt.starts_with('\\'))
		{
			if (txt[1] == 'x' && txt.length() > 6)
			{
				out << "CppAdvance::char32(U'" << txt << "')";
			}
			else if (txt[1] == 'U')
			{
				out << "CppAdvance::char32(U'" << txt << "')";
			}
			else
			{
				out << "CppAdvance::char16(u'" << txt << "')";
			}
		}
		else if (txt.length() > 3)
		{
			out << "CppAdvance::char32(U'" << txt << "')";
		}
		else
		{
			out << "CppAdvance::char16(u'" << txt << "')";
		}
	}
}

void CppAdvanceCodegen::printStringLiteral(std::string txt) const
{
	auto prefix = "u";
	auto str = "Str";
	if (txt.starts_with("u8"))
	{
		prefix = "u8";
		str = "Utf8Str";
		txt = txt.substr(2);
	}
	else if (txt.starts_with('U'))
	{
		prefix = "U";
		str = "Utf32Str";
		txt = txt.substr(1);
	}
	if (txt.starts_with('"') || txt.starts_with('R'))
	{
		out << "CppAdvance::" << str << "{" << prefix << txt << "}";
	}
	else if (txt.starts_with('`'))
	{
		auto contents = txt.substr(1, txt.length() - 2);
		StringReplace(contents, "``", "`");
		out << "CppAdvance::" << str << "{" << prefix << "R\"_grave_(" << contents << ")_grave_\"}";
	}
}

void CppAdvanceCodegen::printMultilineStringLiteral(std::string txt) const
{
	auto contents = txt.substr(3, txt.length() - 6);
	auto lines = StringSplit(contents, '\n');
	out << "CppAdvance::Str{uR\"_multi_(";
	int i = -1;
	bool first = true;
	for (auto& line : lines)
	{
		++i;
		if (line.empty() && (i == 0 || i == lines.size()-1)) continue;
		int margin = 0;
		while (line[margin] == ' ' || line[margin] == '\t') ++margin;
		if (line[margin] == '|')
			++margin;
		else {
			if (line[margin] == 0 && i == (lines.size() - 1)) continue;
			margin = 0;
		}
		if (!first) out << "\n";
		first = false;
		out << line.substr(margin);
	}
	out << ")_multi_\"}";
}
