#include "CppAdvanceCodegen.h"
#include "StringUtils.h"
#include <ranges>

#define GET_ELEMENT_AT out << "_parent.getAt(";\
if (isUnchecked)\
{\
	out << "CppAdvance::UncheckedTag{}, ";\
}\
for (auto param : params)\
{\
	bool first = true;\
	if (auto t = param->theTypeId())\
	{\
		if (!first) out << ", ";\
		first = false;\
		out << "_"; printIdentifier(param->Identifier());\
	}\
}\
out << ")";

#define GET_ELEMENT_AT_EXTERNAL out << "getAt(_parent, ";\
if (isUnchecked)\
{\
	out << "CppAdvance::UncheckedTag{}, ";\
}\
for (auto param : params)\
{\
	bool first = true;\
	if (auto t = param->theTypeId())\
	{\
		if (!first) out << ", ";\
		first = false;\
		out << "_"; printIdentifier(param->Identifier());\
	}\
}\
out << ")";

#define INDEXER_WRITE_METHODS \
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator+=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t+=u;} { return *this = __ref() += std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator-=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t-=u;} { return *this = __ref() -= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator*=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t*=u;} { return *this = __ref() *= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator/=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t/=u;} { return *this = __ref() /= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator%=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t%=u;} { return *this = __ref() %= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator&=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t&=u;} { return *this = __ref() &= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator|=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t|=u;} { return *this = __ref() |= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator^=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t^=u;} { return *this = __ref() ^= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator<<=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t<<=u;} { return *this = __ref() <<= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator>>=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t>>=u;} { return *this = __ref() >>= std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator++() requires requires(__IdxT t) {++t;} { return *this = ++__ref(); }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator++(int) requires requires(__IdxT t) {t++;} { auto copy = __ref(); *this = ++__ref(); return copy; }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator--() requires requires(__IdxT t) {--t;} { return *this = --__ref(); }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator--(int) requires requires(__IdxT t) {t--;} { auto copy = __ref(); *this = --__ref(); return copy; }\n" << std::string(depth, '\t');

#define INDEXER_READ_METHODS(line) \
out << "FORCE_INLINE decltype(auto) operator+() const requires requires(__IdxT t) {t = +t;} { return +__ref(); }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator-() const requires requires(__IdxT t) {t = -t;} { return -__ref(); }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator~() const requires requires(__IdxT t) {t = ~t;} { return ~__ref(); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t+u;} { return __ref() + std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t-u;} { return __ref() - std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t*u;} { return __ref() * std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t/u;} { return __ref() / std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t%u;} { return __ref() % std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t&u;} { return __ref() & std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t|u;} { return __ref() | std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t^u;} { return __ref() ^ std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t<<u;} { return __ref() << std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t>>u;} { return __ref() >> std::forward<_ElemRight>(other); }\n" << std::string(depth, '\t');\
out << "template<class... _ElemRight> FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) { return __ref().__ref()._operator_subscript(std::forward<_ElemRight>(other)...); }\n" << std::string(depth, '\t');\
out << "template<class... _ElemRight> FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const { return __ref().__ref()._operator_subscript(std::forward<_ElemRight>(other)...); }\n" << std::string(depth, '\t');\
out << "template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) { return __ref()(std::forward<Args>(other)...); }\n" << std::string(depth, '\t');\
out << "template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) const { return __ref()(std::forward<Args>(other)...); }\n" << std::string(depth, '\t');\
out << "template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_" << line << "<__IdxT>& elem) { return stream << elem.__ref(); }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator*() requires requires(__IdxT t) {*t;} { return *__ref(); }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE decltype(auto) operator&() requires requires(__IdxT t) {&t;} { return &__ref(); }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE bool operator==(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t==u;} { return __ref() == other; }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE bool operator!=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t!=u;} { return __ref() != other; }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE bool operator<(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t<u;} { return __ref() < other; }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE bool operator<=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t<=u;} { return __ref() <= other; }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE bool operator>(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t>u;} { return __ref() > other; }\n" << std::string(depth, '\t');\
out << "template<class _ElemRight> FORCE_INLINE bool operator>=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t>=u;} { return __ref() >= other; }\n" << std::string(depth, '\t');\
out << "FORCE_INLINE explicit operator bool() const requires(!std::is_same_v<__IdxT,bool>) { return static_cast<bool>(__ref()); }\n" << std::string(depth, '\t');

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
		if (var.attributes)
		{
			for (auto attr : var.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "Align") {
					isAlignas = true;
					out << "alignas(";
					bool aof = attr->attributeArgumentClause()->expressionList()->getText().starts_with("alignof");
					if (!aof)
					{
						out << "size_t(";
					}
					printAttributeArgumentClause(attr->attributeArgumentClause());
					if (!aof)
					{
						out << ")";
					}
					out << ") ";
					isAlignas = false;
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
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
			//isArray = var.type->arrayDeclarator();
		}
		else
		{
			out << "decltype(";
			printInitializerClause(var.initializer);
			out << ")";
		}
		if (var.isUnowned) out << "::__unowned_ref";
		else if (var.isWeak) out << "::__weak_ref";
		out << " ";
		currentType = symbolTable[var.id];
		out << var.id;
		//if (isArray) printArrayDeclarator(var.type->arrayDeclarator());
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
		if (!var.isThreadLocal && !DLLName.empty()) {
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
		//if (isArray) printArrayDeclarator(var.type->arrayDeclarator());
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
		//isArray = field.type->arrayDeclarator();
		currentType = field.type->getText();
		if (field.isUnowned) out << "::__unowned_ref";
		else if (field.isWeak) out << "::__weak_ref";
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
		//if (isArray) printArrayDeclarator(field.type->arrayDeclarator());
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
	for (const auto& type : sema.globalStructs)
	{
		out.switchTo(false);
		if (!type->compilationCondition.empty())
		{
			out << "#if " << type->compilationCondition << std::endl;
		}
		isUnsafe = type->isUnsafe;
		if (type->access == AccessSpecifier::Protected) {
			out << "namespace __" << filename << "_Protected" << (isUnsafe ? "__Unsafe" : "") << " { ";
		}
		else if (isUnsafe)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] ";
		}
		out << "\n" << std::string(depth, '\t');

		printEnumClassData(type.get());

		if (type->access == AccessSpecifier::Protected || isUnsafe) out << " }";
		if (!type->compilationCondition.empty())
		{
			out << "#endif" << std::endl;
		}
	}
	out.switchTo(true);
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
		if (var.attributes)
		{
			for (auto attr : var.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
		}
		out << "inline constexpr ";
		bool isArray = false;
		if (var.type)
		{
			isDeclaration = true;
			printTypeId(var.type);
			isDeclaration = false;
			//isArray = var.type->arrayDeclarator();
			currentType = var.type->getText();
		}
		else
		{
			out << "auto";
		}
		out << " " << var.id;
		//if (isArray) printArrayDeclarator(var.type->arrayDeclarator());
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
		isMainFunction = func.id == "__Astrum_Main";
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

		if (func.attributes)
		{
			for (auto attr : func.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
		}

		isFunctionDeclaration = true;
		if (isMainFunction)
		{
			out << "extern \"C\" ";
		}
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
		if (func.returnType)
		{
			if (func.isConstReturn || !func.isRefReturn) out << "const ";
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
		else if (isMainFunction)
		{
			out << "CppAdvance::i32";
		}
		else
		{
			out << "void";
		}
		if (func.isRefReturn) out << "&";
		out << ";";

		if (func.isCommutative)
		{
			out << "\n" << std::string(depth, '\t');
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
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
			}
			else if (!DLLName.empty() && func.access != AccessSpecifier::Private && !func.templateParams)
			{
				if (func.access == AccessSpecifier::Public) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			out << "auto " << func.id;
			auto params = func.params->paramDeclClause()->paramDeclList()->paramDeclaration() | std::views::reverse;
			if (params.size() == 1 && func.id.starts_with("_operator_"))
				out << "_postfix";
			out << "(";
			bool first = true;
			for (auto param : params)
			{
				if (!first) out << ", ";
				first = false;
				printParamDeclaration(param);
			}
			out << ")";
			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			out << " ";
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> decltype(auto)";
			out << ";";
		}

		if (func.access == AccessSpecifier::Protected || isUnsafe) out << " }";
		out << std::endl;
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
		isMainFunction = false;
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
		
		if (type.isRawUnion)
		{
			out << "union ";
		}
		else {
			out << "class ";
		}
		out << parts.back() << ";";
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

	if (!type->templateSpecializationArgs)
	{
		if (type->kind != TypeKind::Class && type->kind != TypeKind::StaticClass && type->kind != TypeKind::EnumClass)
		{
			if (type->kind != TypeKind::RefStruct && type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
			}
			out << "class ";
			if (type->kind == TypeKind::Struct || type->kind == TypeKind::Enum || type->kind == TypeKind::Union
				|| type->kind == TypeKind::UnionStruct) out << "__Class_";
			out << type->id << ";\n" << std::string(depth, '\t');
		}
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
	if (type->kind == TypeKind::Class || type->kind == TypeKind::EnumClass) {
		out << "class ";
	}
	else if (type->kind == TypeKind::UnionStruct) {
		out << "union ";
	}
	else {
		out << "struct ";
	}
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	if (type->kind == TypeKind::RefStruct) out << "[[clang::annotate(\"ref_struct\")]] ";
	if (type->attributes)
	{
		for (auto attr : type->attributes->attributeSpecifier())
		{
			auto attrName = attr->Identifier()->getText();
			if (attrName == "Deprecated")
			{
				out << "[[deprecated";
				if (attr->attributeArgumentClause())
					out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
				out << "]] ";
			}
			else if (attrName == "Unused") {
				out << "[[maybe_unused]] ";
			}
			else if (attrName == "Align") {
				isAlignas = true;
				out << "alignas(";
				bool aof = attr->attributeArgumentClause()->expressionList()->getText().starts_with("alignof");
				if (!aof)
				{
					out << "size_t(";
				}
				printAttributeArgumentClause(attr->attributeArgumentClause());
				if (!aof)
				{
					out << ")";
				}
				out << ") ";
				isAlignas = false;
			}
			else
			{
				printAttributeSpecifier(attr);
				out << " ";
			}
		}
	}
	if (type->kind == TypeKind::Class || type->kind == TypeKind::EnumClass) {
		if (type->isAbstract) out << "ADV_NOVTABLE ";
		out << "__Class_";
	}
	out << type->id;
	if (type->templateSpecializationArgs)
	{
		out << "<";
		printTemplateArgumentList(type->templateSpecializationArgs);
		out << ">";
	}
	switch (type->kind)
	{
	case TypeKind::Struct:
		out << " final : public CppAdvance::Struct";
		break;
	case TypeKind::RefStruct:
		out << " final : public CppAdvance::RefStruct";
		break;
	case TypeKind::UnionStruct:
		break;
	case TypeKind::Enum:
		out << " final : public CppAdvance::Enum";
		break;
	case TypeKind::EnumClass:
		out << " final : public CppAdvance::EnumClass";
		break;
	case TypeKind::Union:
		out << " final : public CppAdvance::Union";
		break;
	case TypeKind::Class: 
	{
		if (type->isFinal) out << " final";
		if (type->isAbstract) out << " ADV_ABSTRACT";
		out << " : ";
		if (!type->interfaces)
		{
			out << "public CppAdvance::Object";
		}
		else
		{
			out << "public CppAdvance::ClassParent<";
			printBaseSpecifier(type->interfaces->baseSpecifier(0));
			out << ">";
		}
	}
		break;
	case TypeKind::StaticClass:
		out << " : public ";
		if (type->interfaces) {
			printBaseSpecifier(type->interfaces->baseSpecifier(0));
		}
		else
		{
			out << "CppAdvance::StaticClass";
		}
		break;
	default:
		break;
	}
	
	out << " {\n" << std::string(++depth, '\t') << "public: using __self = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	if (type->kind == TypeKind::Struct || type->kind == TypeKind::UnionStruct || type->kind == TypeKind::Enum || type->kind == TypeKind::Union) {
		out << "public: using __class = __Class_" << type->id;
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
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		out << ";\n" << std::string(depth, '\t');
	}
	else if (type->kind == TypeKind::Class)
	{
		out << "private: using ___super = ";
		if (!type->interfaces)
		{
			out << "CppAdvance::Object";
		}
		else
		{
			out << "CppAdvance::ClassParent<";
			printBaseSpecifier(type->interfaces->baseSpecifier(0));
			out << ">";
		}
		out << ";\n" << std::string(depth, '\t');
		out << "public: using __selfClass = __Class_" << type->id;
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
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		out << ";\n" << std::string(depth, '\t');
		out << "friend class __self;\n" << std::string(depth, '\t');
		out << "friend class __self::__weak_ref;\n" << std::string(depth, '\t');
		out << "#define ADV_PROPERTY_SELF __selfClass\n" << std::string(depth, '\t');
		if (type->interfaces) {
			bool first = true;
			for (auto iface : type->interfaces->baseSpecifier())
			{
				if (first) {
					first = false;
					continue;
				}
				out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "ADV_CHECK_INTERFACE(" << iface->getText() << ", ";
				if (iface->nestedNameSpecifier())
				{
					printNestedNameSpecifier(iface->nestedNameSpecifier());
				}
				printClassName(iface->className());
				out << ");\n" << std::string(depth, '\t');
			}
		}
	}
	else if (type->kind == TypeKind::EnumClass)
	{
		out << "private: using ___super = CppAdvance::EnumClass;\n" << std::string(depth, '\t');
		out << "public: using __selfClass = __Class_" << type->id << ";\n" << std::string(depth, '\t');
		out << "friend class __self;\n" << std::string(depth, '\t');
		out << "friend class __self::__weak_ref;\n" << std::string(depth, '\t');
		out << "#define ADV_PROPERTY_SELF __selfClass\n" << std::string(depth, '\t');
		if (type->interfaces) {
			for (auto iface : type->interfaces->baseSpecifier())
			{
				out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "ADV_CHECK_INTERFACE(" << iface->getText() << ", ";
				if (iface->nestedNameSpecifier())
				{
					printNestedNameSpecifier(iface->nestedNameSpecifier());
				}
				printClassName(iface->className());
				out << ");\n" << std::string(depth, '\t');
			}
		}
	}
	else if (type->kind == TypeKind::StaticClass)
	{
		if (type->interfaces) {
			auto base = type->interfaces->baseSpecifier(0);
			out << "#line " << base->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "ADV_CHECK_STATIC_CLASS(" << base->getText() << ", ";
			if (base->nestedNameSpecifier())
			{
				printNestedNameSpecifier(base->nestedNameSpecifier());
			}
			printClassName(base->className());
			out << ");\n" << std::string(depth, '\t');
		}
	}

	if (type->kind != TypeKind::StaticClass)
		out << "public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(depth, '\t');
	if (!sema.symbolContexts.empty()) sema.symbolContexts.push(sema.symbolContexts.top());
	if (type->kind == TypeKind::Class || type->kind == TypeKind::EnumClass)
	{
		for (const auto& nested : type->nestedStructs)
		{
			if (!nested->compilationCondition.empty())
			{
				out << "#if " << nested->compilationCondition << std::endl << std::string(depth, '\t');
			}
			switch (nested->access)
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
			if (nested->templateParams)
			{
				printTemplateParams(nested->templateParams);
				out << " ";
			}
			out << "using " << nested->id << " = __self::" << nested->id;
			if (nested->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : nested->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << ";\n" << std::string(depth, '\t');
			if (!nested->compilationCondition.empty())
			{
				out << "#endif " << std::endl << std::string(depth, '\t');
			}
		}
	}
	else {
		isNested = true;
		for (const auto& nested : type->nestedStructs)
		{
			if (nested->access == AccessSpecifier::Private)
			{
				out << "private: ";
			}
			else if (nested->access == AccessSpecifier::Protected)
			{
				out << "protected: ";
			}
			else
			{
				out << "public: ";
			}
			out << "\n" << std::string(depth, '\t');
			if (nested->kind == TypeKind::Class || nested->kind == TypeKind::EnumClass)
			{
				if (nested->templateParams)
				{
					printTemplateParams(nested->templateParams);
					out << " ";
				}
				out << "class " << nested->id << "; ";
				if (nested->templateParams)
				{
					printTemplateParams(nested->templateParams);
					out << " ";
				}
				out << "class " << nested->id << "__Unowned; ";
				if (nested->templateParams)
				{
					printTemplateParams(nested->templateParams);
					out << " ";
				}
				out << "class " << nested->id << "__Weak; ";
				if (nested->templateParams)
				{
					printTemplateParams(nested->templateParams);
					out << " ";
				}
				out << "class __Class_" << nested->id << ";\n" << std::string(depth, '\t');
				printClassRef(nested.get());
			}
			else {
				printType(nested.get());
			}
			out << "\n" << std::string(depth, '\t');
		}
		for (const auto& nested : type->nestedStructs)
		{
			if (nested->kind == TypeKind::RefStruct) continue;
			if (nested->access == AccessSpecifier::Private)
			{
				out << "private: ";
			}
			else if (nested->access == AccessSpecifier::Protected)
			{
				out << "protected: ";
			}
			else
			{
				out << "public: ";
			}
			out << "\n" << std::string(depth, '\t');
			if (nested->kind == TypeKind::Struct || nested->kind == TypeKind::Enum 
				|| nested->kind == TypeKind::Union || nested->kind == TypeKind::UnionStruct) {
				printStructWrapper(nested.get());
			}
			else if (nested->kind == TypeKind::Class || nested->kind == TypeKind::EnumClass) {
				printType(nested.get());
			}
			out << "\n" << std::string(depth, '\t');
		}
	}
	for (const auto& friendType: type->friendTypes)
	{
		if (!friendType.compilationCondition.empty())
		{
			out << "#if " << friendType.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << friendType.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t') << "private: ";
		if (friendType.templateParams)
		{
			printTemplateParams(friendType.templateParams);
			out << " ";
		}
		out << "friend class ";
		out << friendType.id;
		out << "; ";
		if (friendType.templateParams)
		{
			printTemplateParams(friendType.templateParams);
			out << " ";
		}
		out << "friend class __Class_";
		out << friendType.id;
		out << ";\n" << std::string(depth, '\t');
		if (!friendType.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}
	for (const auto& decl : type->friendFuncDeclarations)
	{
		if (!decl.compilationCondition.empty())
		{
			out << "#if " << decl.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << decl.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t') << "private: ";
		out << "friend ";
		if (auto t = decl.returnType)
		{
			if (t->Const() || !t->Ref()) out << "const ";
			printTypeId(t->theTypeId());
			if (t->Ref()) out << "&";
		}
		else
		{
			out << "void";
		}
		
		out << " " << decl.id;
		printFunctionParameters(decl.params);
		out << ";\n" << std::string(depth, '\t');
		if (!decl.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}
	for (const auto& decl : type->friendFuncDefinitions)
	{
		if (!decl.compilationCondition.empty())
		{
			out << "#if " << decl.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << decl.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t') << "private: ";
		if (decl.attributes)
		{
			for (auto attr : decl.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
		}
		out << "friend ";
		if (decl.isConstReturn || !decl.isRefReturn) out << "const ";
		if (auto t = decl.returnType)
		{
			printTypeId(decl.returnType);
		}
		else if (decl.expression)
		{
			out << "decltype(auto)";
		}
		else
		{
			out << "void";
		}

		if (decl.isRefReturn) out << "&";

		out << " " << decl.id;
		printFunctionParameters(decl.params);
		out << ";\n" << std::string(depth, '\t');
		if (!decl.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
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
		bool hasVisibility = !isPrivateStruct && field.isStatic && !DLLName.empty();
		switch (field.access)
		{
		case AccessSpecifier::Public:
			out << "public: ";
			if (hasVisibility) out << DLLName << "_API ";
			break;
		case AccessSpecifier::Internal:
			out << "public: ";
			if (hasVisibility) out << DLLName << "_HIDDEN ";
			break;
		case AccessSpecifier::Protected:
			out << "protected: ";
			if (hasVisibility) out << DLLName << "_API ";
			break;
		case AccessSpecifier::ProtectedInternal:
			out << "protected: ";
			if (hasVisibility) out << DLLName << "_HIDDEN ";
			break;
		case AccessSpecifier::Private:
			out << "private: ";
			if (hasVisibility) out << DLLName << "_API ";
			break;
		}
		if (field.isUnsafe) {
			isUnsafe = true;
			out << "[[clang::annotate(\"unsafe\")]] ";
		}
		if (field.attributes)
		{
			for (auto attr : field.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "NoUniqueAddress" || attrName == "EmptyField") {
					if (!field.isStatic) out << "ADV_VIRTUAL_FIELD ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "Align") {
					isAlignas = true;
					out << "alignas(";
					bool aof = attr->attributeArgumentClause()->expressionList()->getText().starts_with("alignof");
					if (!aof)
					{
						out << "size_t(";
					}
					printAttributeArgumentClause(attr->attributeArgumentClause());
					if (!aof)
					{
						out << ")";
					}
					out << ") ";
					isAlignas = false;
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
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
		else if (type->kind == TypeKind::Class && !field.isStatic && !field.isThreadLocal)
		{
			out << "mutable ";
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
			//isArray = t->arrayDeclarator();
			if (field.isUnowned) out << "::__unowned_ref";
			else if (field.isWeak) out << "::__weak_ref";
			out << " ";
		}
		currentType = symbolTable[id];
		out << id;
		//if (isArray) printArrayDeclarator(field.type->arrayDeclarator());
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
		if (type->kind != TypeKind::RefStruct || field.isStatic || field.isThreadLocal) {
			if (!sema.contextTypes.contains(field.type) || !sema.contextTypes[field.type].ends_with(type->id)) {
				printRefStructCheck(field.type);
				out << ";";
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

	if (type->kind == TypeKind::Enum)
	{
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: ";
		if (type->enumBase)
		{
			printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
		}
		else
		{
			out << "CppAdvance::i32";
		}
		out << " __value;\n" << std::string(depth,'\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, ";
		if (type->enumBase)
		{
			printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
		}
		else
		{
			out << "CppAdvance::i32";
		}
		out << ")\n" << std::string(depth, '\t');
	}

	if ((type->kind == TypeKind::Struct || type->kind == TypeKind::EnumClass) && !type->fields.empty() && !type->hasAggregateInit)
	{
		auto regularFields = type->fields | std::views::filter([](const auto& field) 
			{ return !field.isStatic && !field.isThreadLocal && field.compilationCondition.empty(); });
		if (!regularFields.empty()) {
			if (type->kind == TypeKind::EnumClass)
			{
				out << "private: __Class_";
				out << type->id << "(";
			}
			else {
				out << "public: ";
				if (type->isConstexpr) out << "constexpr ";
				out << type->id << "(";
			}
			bool first = true;
			for (const auto& field : regularFields) {
				if (field.isStatic || field.isThreadLocal || !field.compilationCondition.empty()) continue;
				if (!first) out << ", ";
				first = false;
				printTypeId(field.type);
				out << " _" << field.id;
			}
			out << ") : ";
			first = true;
			for (const auto& field : regularFields) {
				if (field.isStatic || field.isThreadLocal || !field.compilationCondition.empty()) continue;
				if (!first) out << ", ";
				first = false;
				out << field.id << "{_" << field.id << "}";
			}
			out << " {}\n" << std::string(depth, '\t');
		}
	}

	if (type->kind == TypeKind::StaticClass)
	{
		out << "private: " << type->id << "() = default;\n" << std::string(depth, '\t');
	}

	for (const auto& constant : type->constants)
	{
		if (type->kind == TypeKind::EnumClass && !constant.type)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: ";
			if (constant.attributes)
			{
				for (auto attr : constant.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}
			out << "static ";
			if (!DLLName.empty())
			{
				out << DLLName << "_API";
			}
			out << " const __self " << constant.id << ";\n" << std::string(depth, '\t');
		}
		else if (type->kind == TypeKind::Union)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (auto clause = constant.unionEnumerator)
			{
				if (!clause->Identifier().empty())
				{
					//named union members
					out << "public: struct ";
					if (type->attributes)
					{
						for (auto attr : type->attributes->attributeSpecifier())
						{
							auto attrName = attr->Identifier()->getText();
							if (attrName == "Deprecated")
							{
								out << "[[deprecated";
								if (attr->attributeArgumentClause())
									out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
								out << "]] ";
							}
							else if (attrName == "Unused") {
								out << "[[maybe_unused]] ";
							}
							else
							{
								printAttributeSpecifier(attr);
								out << " ";
							}
						}
					}
					out << constant.id
						<< " { decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(++depth, '\t');
					auto types = clause->theTypeId();
					auto ids = clause->Identifier();
					for (size_t i=0, size = types.size(); i < size; ++i)
					{
						printTypeId(types[i]);
						out << " " << ids[i]->getText() << "; ";
						out << "ADV_CHECK_REF_STRUCT(";
						auto t = types[i]->getText();
						StringReplace(t, "\"", "\\\"");
						out << "\"" << t << "\", ";
						printTypeId(types[i]);
						out << ");\n" << std::string(depth, '\t');
					}
					out << "bool operator==(const " << constant.id << "& that) const noexcept { return ";
					for (size_t i = 0, size = types.size(); i < size; ++i)
					{
						if (i > 0) out << " && ";
						out << ids[i]->getText() << " == that." << ids[i]->getText();
					}
					out << "; }";
					out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
				}
				else
				{
					//anonymous union members
					out << "public: using " << constant.id << " = ";
					auto types = clause->theTypeId();
					if (types.size() == 1)
					{
						printTypeId(types[0]);
						out << "; ADV_CHECK_REF_STRUCT(";
						auto t = types[0]->getText();
						StringReplace(t, "\"", "\\\"");
						out << "\"" << t << "\", ";
						printTypeId(types[0]);
						out << ")";
					}
					else
					{
						out << "std::tuple<";
						bool first = true;
						for (auto t : types)
						{
							if (!first) out << ", ";
							first = false;
							printTypeId(t);
						}
						out << ">";
					}

					out << ";\n" << std::string(depth, '\t');
				}
			}
			else
			{
				//empty union members
				out << "private: struct __UnionType_" << constant.id << "{ constexpr bool operator==(const __UnionType_" 
					<< constant.id << " &) const noexcept { return true; } ";
				out << "}; public: static constexpr __UnionType_" 
					<< constant.id << " " << constant.id << "{};\n" << std::string(depth, '\t');
			}
		}
		else {
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
			case AccessSpecifier::Protected:
				out << "protected: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}
			if (constant.attributes)
			{
				for (auto attr : constant.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}
			bool isSelfType = sema.contextTypes.contains(constant.type) && sema.contextTypes[constant.type].ends_with(type->id)
				|| sema.contextTypes.contains(constant.initializer) && sema.contextTypes[constant.initializer].ends_with(type->id)
				|| type->kind == TypeKind::Enum;
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
				//isArray = constant.type->arrayDeclarator();
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
			if (type->kind == TypeKind::Enum) {
				enumValues[constant.parentType].push_back(constant.id);
			}
			//if (isArray) printArrayDeclarator(constant.type->arrayDeclarator());
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
		}
		currentDeclarationName.clear();
	}
	if (type->kind == TypeKind::Enum)
	{
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: static constexpr CppAdvance::Str __names[] = {";
		bool first = true;
		for (const auto& constant : type->constants) {
            if (!first) out << ", ";
            first = false;
            out << "u\"" << constant.id << "\"";
		}
		out << "};\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: static constexpr int __variants = " << type->constants.size() << ";\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: static constexpr std::span<const CppAdvance::Str> GetNames() noexcept { return __names; }\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: static const " << type->id << " __values[];\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: static constexpr std::span<const " << type->id << "> GetValues() noexcept;\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } \n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } \n" << std::string(depth, '\t');
		if (type->isAbstract) //flags
		{
			out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: constexpr " << type->id << " operator &(" << type->id << " other) const noexcept { return (__value & other.__value); }\n"
				<< std::string(depth, '\t');
			out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: constexpr bool HasFlag(" << type->id << " other) const noexcept { return static_cast<bool>(__value & other.__value); }\n"
				<< std::string(depth, '\t');
			out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: constexpr const " << type->id << " operator |(" << type->id << " other) const noexcept { return (__value | other.__value); }\n"
				<< std::string(depth, '\t');
			out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: constexpr " << type->id << "& operator |=(" << type->id << " other) noexcept { __value |= other.__value; return *this; }\n"
				<< std::string(depth, '\t');
			out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: constexpr " << type->id << "& AddFlag(" << type->id << " other) noexcept { __value |= other.__value; return *this; }\n"
				<< std::string(depth, '\t');
			out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: constexpr " << type->id << " RemoveFlag(" << type->id << " other) noexcept { __value &=~ other.__value; return __value; }\n"
				<< std::string(depth, '\t');
		}
	}
	else if (type->kind == TypeKind::EnumClass)
	{
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: static ";
		if (!DLLName.empty())
		{
			out << DLLName << "_API";
		}
		out << " const __self __values[];\n" << std::string(depth, '\t');
        out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		int i = 0;
		for (const auto& constant : type->constants)
		{
			if (constant.type) continue;
			++i;
		}
        out << "public: static std::span<const __self> GetValues() noexcept { return { __values, " << std::to_string(i) << " }; }\n" 
			<< std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: static constexpr int __variants = " << i << ";\n" << std::string(depth, '\t');
	}
	else if (type->kind == TypeKind::Union)
	{
		//union data
		out << "private: union {\n" << std::string(++depth, '\t');
		for (const auto& constant : type->constants)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}

			out << constant.id << " _" << constant.id << ";\n" << std::string(depth, '\t');
		}
		out << "\n" << std::string(--depth,'\t') << "};\n" << std::string(depth, '\t');
		//union discrimination tag
		out << "enum ";
		if (type->constants.size() < std::numeric_limits<unsigned char>::max()) {
			out << ": unsigned char ";
		}
		else if (type->constants.size() < std::numeric_limits<unsigned short>::max())
		{
			out << ": unsigned short ";
		}
		out << "{\n" << std::string(++depth, '\t');
		bool first = true;
		for (const auto& constant : type->constants)
		{
			if (!first) out << ", ";
			first = false;
			out << "_TAG__" << constant.id;
		}
		out << "\n" << std::string(--depth, '\t') << "} __union_internal_tag;\n" << std::string(depth, '\t');
		out << "public:\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "static constexpr int __variants = " << type->constants.size() << ";\n" << std::string(depth, '\t');
		//value initialization
		for (const auto& constant : type->constants)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << type->id << "(CppAdvance::In<";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}

			out << constant.id << "> value) : __union_internal_tag{ _TAG__" << constant.id
				<< " } { new (&_" << constant.id << ") ";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}
			out << constant.id << "(value); }\n"
				<< std::string(depth, '\t');
		}
		//copy initialization
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: void __copy(const __self& other) {\n" << std::string(++depth, '\t');
		out << "__union_internal_tag = other.__union_internal_tag;\n" << std::string(depth, '\t');
        out << "switch (__union_internal_tag) {\n" << std::string(++depth, '\t');
		for (const auto& constant : type->constants)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "case _TAG__" << constant.id << ": new (&_" << constant.id << ") ";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}
			out << constant.id << "(other._" << constant.id << "); break;\n" << std::string(depth, '\t');
		}
		out << "\n" << std::string(--depth, '\t') << "}\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: " << type->id << "(const __self& other) { __copy(other); }\n" << std::string(depth, '\t');
		//move initialization
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: void __move(__self&& other) {\n" << std::string(++depth, '\t');
		out << "__union_internal_tag = other.__union_internal_tag;\n" << std::string(depth, '\t');
		out << "switch (__union_internal_tag) {\n" << std::string(++depth, '\t');
		for (const auto& constant : type->constants)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "case _TAG__" << constant.id << ": new (&_" << constant.id << ") ";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}
			out << constant.id << "(std::move(other._" << constant.id << ")); break;\n" << std::string(depth, '\t');
		}
		out << "\n" << std::string(--depth, '\t') << "}\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: " << type->id << "(__self&& other) { __move(std::move(other)); }\n" << std::string(depth, '\t');
		//deinitialization
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: void __destroy() {\n" << std::string(++depth, '\t');
		out << "switch (__union_internal_tag) {\n" << std::string(++depth, '\t');
		for (const auto& constant : type->constants)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "case _TAG__" << constant.id << ": _" << constant.id << ".~";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}
			out << constant.id << "(); break;\n" << std::string(depth, '\t');
		}
		out << "\n" << std::string(--depth, '\t') << "}\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: ~" << type->id << "() { __destroy(); }\n" << std::string(depth, '\t');
		//value assignment
		for (const auto& constant : type->constants)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << type->id << "& operator=(CppAdvance::In<";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}

			out << constant.id << "> value) {\n" << std::string(++depth, '\t');
			out << "__destroy();\n" << std::string(depth, '\t');
            out << "__union_internal_tag = _TAG__" << constant.id << ";\n" << std::string(depth, '\t');
            out << "new (&_" << constant.id << ") ";
            if (!constant.unionEnumerator)
            {
                out << "__UnionType_";
            }
            out << constant.id << "(value); return *this;";
			out << "\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
		}
		//copy assignment
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }\n" << std::string(depth, '\t');
		//move assignment
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }\n" << std::string(depth, '\t');
		//data getters
		for (const auto& constant : type->constants)
		{
			out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: auto Get" << constant.id << "() const { if (__union_internal_tag != _TAG__" << constant.id
				<< ") throw std::logic_error(\"Type mismatch in the discriminated union\"); return _" << constant.id << "; }\n"
				<< std::string(depth, '\t');
		}
		//type checking
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: template<class __SomeT> bool Is() const noexcept {\n" << std::string(++depth, '\t');
		first = true;
		for (const auto& constant : type->constants) {
			if (!first) out << "else ";
			first = false;
			out << "if constexpr (std::is_same_v<__SomeT, ";
            if (!constant.unionEnumerator)
            {
                out << "__UnionType_";
            }
			out << constant.id << ">) return __union_internal_tag == _TAG__" << constant.id << ";\n" << std::string(depth, '\t');
		}
		out << "return false;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
		//type casting
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {\n" << std::string(++depth, '\t');
		first = true;
		for (const auto& constant : type->constants) {
			if (!first) out << "else ";
			first = false;
			out << "if constexpr (std::is_same_v<__SomeT, ";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}
			out << constant.id << ">) { if(__union_internal_tag == _TAG__" << constant.id << ") return _" << constant.id 
				<< "; }\n" << std::string(depth, '\t');
		}
		out << "else static_assert(false, \"Cannot to cast union type " << type->id << " to __SomeT\");\n" << std::string(depth, '\t');
		out << "return nullptr;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
		//equality checking
		/*out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: bool operator==(const __self& other) const noexcept {\n" << std::string(++depth, '\t');
		out << "if (__union_internal_tag != other.__union_internal_tag) return false;\n" << std::string(depth, '\t');
		first = true;
		for (const auto& constant : type->constants) {
			if (!first) out << "else ";
			first = false;
			out << "if (__union_internal_tag == _TAG__"
				<< constant.id << ") return _" << constant.id << " == other._" << constant.id << "; \n"
				<< std::string(depth, '\t');
		}
		out << "return false;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');*/
		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {\n" << std::string(++depth, '\t');
		first = true;
		for (const auto& constant : type->constants) {
			if (!first) out << "else ";
			first = false;
			out << "if constexpr (std::is_same_v<__SomeT, ";
			if (!constant.unionEnumerator)
			{
				out << "__UnionType_";
			}
			out << constant.id << ">) return __union_internal_tag == _TAG__" << constant.id << " && _" << constant.id << " == other;\n"
				<< std::string(depth, '\t');
		}
		out << "return false;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
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
		case AccessSpecifier::Protected:
			out << "protected: ";
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
				if (prop.attributes)
				{
					for (auto attr : prop.attributes->attributeSpecifier())
					{
						auto attrName = attr->Identifier()->getText();
						if (attrName == "Deprecated")
						{
							out << "[[deprecated";
							if (attr->attributeArgumentClause())
								out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
							out << "]] ";
						}
						else if (attrName == "NoUniqueAddress" || attrName == "EmptyField") {
							if (!prop.isStatic) out << "ADV_VIRTUAL_FIELD ";
						}
						else if (attrName == "Unused") {
							out << "[[maybe_unused]] ";
						}
						else if (attrName == "Align") {
							isAlignas = true;
							out << "alignas(";
							bool aof = attr->attributeArgumentClause()->expressionList()->getText().starts_with("alignof");
							if (!aof)
							{
								out << "size_t(";
							}
							printAttributeArgumentClause(attr->attributeArgumentClause());
							if (!aof)
							{
								out << ")";
							}
							out << ") ";
							isAlignas = false;
						}
						else
						{
							printAttributeSpecifier(attr);
							out << " ";
						}
					}
				}
				if (prop.isStatic) out << "static ";
				else if (prop.isConst) out << "const ";
				else if (type->kind == TypeKind::Class) out << "mutable ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << " p_" << prop.id;
				if (prop.isStatic)
				{
					sema.staticFields.push_back(
						VariableDefinition{ "p_" + prop.id, prop.parentTemplateParams, prop.type, prop.pos, prop.initializer, nullptr, nullptr,
						prop.isProtectedType ? AccessSpecifier::Protected : AccessSpecifier::Private, prop.compilationCondition, prop.parentType,
						true, prop.isConst, false, false, prop.isUnsafeType, type->templateSpecializationArgs != nullptr });
				}
				else if (prop.initializer) {
					out << " = ";
					printInitializerClause(prop.initializer);
				}
				out << ";";
				printRefStructCheck(prop.type);
				out << ";" << std::endl << std::string(depth, '\t');
			}

			out << "#line " << prop.setter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (auto acc = prop.setter->accessSpecifier())
			{
				if (acc->Public()) setAccess = AccessSpecifier::Public;
				else if (acc->Internal()) setAccess = AccessSpecifier::Internal;
				else if (acc->Protected()) setAccess = AccessSpecifier::Protected;
				else if (acc->Private()) setAccess = AccessSpecifier::Private;
			}
			if (prop.setter->protectedInternal()) setAccess = AccessSpecifier::ProtectedInternal;
			switch (setAccess)
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
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
			}
			else if (!prop.isAbstract)
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
			else if (!DLLName.empty() && !type->templateParams && !prop.isAbstract)
			{
				if (setAccess == AccessSpecifier::Public || setAccess == AccessSpecifier::Protected || setAccess == AccessSpecifier::Private) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			if (prop.isStatic) {
				out << "static ";
			}
			else if (prop.isVirtual || prop.isFinal || prop.isAbstract)
			{
				out << "virtual ";
			}
			out << "auto set" << prop.id << "(const ";
			printTypeId(prop.type);
			out << "& value) ";
			if (!prop.isStatic) {
				out << "-> __self";
				if (type->kind == TypeKind::Class) out << "Class";
				out << "&";
				if (type->kind == TypeKind::Class) {
					if (prop.isOverride) out << " override";
					else if (prop.isFinal) out << " final";
					else if (prop.isAbstract) out << " = 0";
				}
			}
			else {
				out << "-> void";
			}
			out << ";" << std::endl << std::string(depth, '\t');
		}
		if (prop.getter)
		{
			out << "#line " << prop.getter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (auto acc = prop.getter->accessSpecifier())
			{
				if (acc->Public()) getAccess = AccessSpecifier::Public;
				else if (acc->Internal()) getAccess = AccessSpecifier::Internal;
				else if (acc->Protected()) getAccess = AccessSpecifier::Protected;
				else if (acc->Private()) getAccess = AccessSpecifier::Private;
			}
			if (prop.getter->protectedInternal()) getAccess = AccessSpecifier::ProtectedInternal;
			switch (getAccess)
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

			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}
			if (prop.attributes)
			{
				for (auto attr : prop.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
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
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
			}
			else if (!prop.isAbstract)
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
			else if (!DLLName.empty() && !type->templateParams && !prop.isAbstract)
			{
				if (getAccess == AccessSpecifier::Public || getAccess == AccessSpecifier::Protected || getAccess == AccessSpecifier::Private) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			if (prop.isStatic) {
				out << "static ";
			}
			else if (prop.isVirtual || prop.isFinal || prop.isAbstract)
			{
				out << "virtual ";
			}
			out << "auto get" << prop.id << "() ";
			if (!prop.isStatic) out << "const ";
			out << " -> ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			if (type->kind == TypeKind::Class) {
				if (prop.isOverride) out << " override";
				else if (prop.isFinal) out << " final";
				else if (prop.isAbstract) out << " = 0";
			}
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
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected: ";
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
			else if (!DLLName.empty() && !type->templateParams && !prop.isAbstract)
			{
				if (prop.access == AccessSpecifier::Public || prop.access == AccessSpecifier::Protected || prop.access == AccessSpecifier::Private) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}

			if (prop.isStatic) {
				out << "static ";
			}
			else if (prop.isVirtual || prop.isFinal || prop.isAbstract)
			{
				out << "virtual ";
			}
			out << "auto get" << prop.id << "() ";
			if (!prop.isStatic) out << "const ";
			out << " -> ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			if (type->kind == TypeKind::Class) {
				if (prop.isOverride) out << " override";
				else if (prop.isFinal) out << " final";
				else if (prop.isAbstract) out << " = 0";
			}
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
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				if (prop.isStatic)
				{
					out << ", ";
					if (!DLLName.empty())
					{
						out << DLLName;
						if (prop.access == AccessSpecifier::Internal || prop.access == AccessSpecifier::ProtectedInternal)
						{
							out << "_HIDDEN";
						}
						else
						{
							out << "_API";
						}
					}
				}
				out << ", " << prop.id << ", ";
				switch (getAccess)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
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
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}
				out << ", set" << prop.id << ", ";
				if (prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << ")";
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
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				if (prop.isStatic)
				{
					out << ", ";
					if (!DLLName.empty())
					{
						out << DLLName;
						if (prop.access == AccessSpecifier::Internal || prop.access == AccessSpecifier::ProtectedInternal)
						{
							out << "_HIDDEN";
						}
						else
						{
							out << "_API";
						}
					}
				}
				out << ", " << prop.id << ", set" << prop.id << ", ";
				if (prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << ")";
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
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}

			if (prop.isStatic)
			{
				out << ", ";
				if (!DLLName.empty())
				{
					out << DLLName;
					if (prop.access == AccessSpecifier::Internal || prop.access == AccessSpecifier::ProtectedInternal)
					{
						out << "_HIDDEN";
					}
					else
					{
						out << "_API";
					}
				}
			}
			out << ", " << prop.id << ", get" << prop.id << ", ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			out << ")";
		}
		out << ";" << std::endl << std::string(depth, '\t');
	}
	for (const auto& func : type->methods)
	{
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl << std::string(depth, '\t');
		}
		bool isUnchecked = false;
		if (func.attributes)
		{
			for (auto attr : func.attributes->attributeSpecifier()) {
				if (attr->getText() == "Unchecked") isUnchecked = true;
			}
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
					out << " _"; printIdentifier(param->Identifier());
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
					out << ", _"; printIdentifier(param->Identifier()); out << "("; printIdentifier(param->Identifier()); out << ")";
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
					out << ", _"; printIdentifier(param->Identifier()); out << "("; printIdentifier(param->Identifier()); out << ")";
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
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag{}, ";
			}
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (auto t = param->theTypeId())
				{
					out << "_"; printIdentifier(param->Identifier()); out << ", ";
				}
			}
			out << "std::forward<_ElemRight>(other)); return *this; }\n" << std::string(depth, '\t');
			INDEXER_WRITE_METHODS;
			isPrivate = false;
			if (auto spec = func.indexerGetter->accessSpecifier())
				isPrivate = spec->Private() || spec->Protected();
			if (func.indexerGetter->protectedInternal())
				isPrivate = true;
			if (isPrivate) out << "private: ";
			else out << "public: ";
			auto params = func.indexerParams->paramDeclList()->paramDeclaration();
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
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag{}, ";
			}
			for (auto param : params)
			{
				bool first = true;
				if (auto t = param->theTypeId())
				{
					if (!first) out << ", ";
					first = false;
					out << "_"; printIdentifier(param->Identifier());
				}
			}
			out << "); }\n" << std::string(depth, '\t');
			INDEXER_READ_METHODS(func.pos.line);

			out << "\n" << std::string(--depth, '\t') << "};\n\n" << std::string(depth, '\t');
			out << "friend struct __IndexerAccessor_" << func.pos.line << "<";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << ">;\n" << std::string(depth, '\t');

			bool isInline = false;
			bool isConstexpr = false;
			if (func.indexerSetter) {
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
					if (body->EqualArrow()) {
						isInline = true;
						isConstexpr = true;
					}
					else if (body->AssignArrow())
					{
						isInline = true;
					}
				}
				auto access = func.access;
				if (auto acc = func.indexerSetter->accessSpecifier())
				{
					if (acc->Public()) access = AccessSpecifier::Public;
					else if (acc->Private()) access = AccessSpecifier::Private;
					else if (acc->Protected()) access = AccessSpecifier::Public;
					else if (acc->Internal()) access = AccessSpecifier::Internal;
				}
				else if (func.indexerSetter->protectedInternal()) access = AccessSpecifier::ProtectedInternal;
				switch (access)
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
					out << "private:";
					break;
				}
				if (isUnsafe)
				{
					out << "[[clang::annotate(\"unsafe\")]] ";
				}
				if (func.attributes)
				{
					for (auto attr : func.attributes->attributeSpecifier())
					{
						auto attrName = attr->Identifier()->getText();
						if (attrName == "Deprecated")
						{
							out << "[[deprecated";
							if (attr->attributeArgumentClause())
								out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
							out << "]] ";
						}
						else if (attrName == "Unused") {
							out << "[[maybe_unused]] ";
						}
						else if (attrName == "NoDiscard") {
							out << "[[nodiscard]] ";
						}
						else if (attrName == "NoReturn") {
							out << "[[noreturn]] ";
						}
						else if (attrName == "ForceInline") {
							out << "FORCE_INLINE ";
						}
						else if (attrName == "NoInline") {
							out << "NOINLINE ";
						}
						else
						{
							printAttributeSpecifier(attr);
							out << " ";
						}
					}
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
					if (func.access == AccessSpecifier::Public || func.access == AccessSpecifier::Protected || func.access == AccessSpecifier::Private) out << DLLName << "_API ";
					else out << DLLName << "_HIDDEN ";
				}
				out << "void setAt("; 
				if (isUnchecked)
				{
					out << "CppAdvance::UncheckedTag, ";
				}
				printParamDeclClause(func.indexerParams);
				out << ", const ";
				printTypeId(func.returnType);
				out << "& value)";
				if (func.isOverride) out << " override";
				if (func.isFinal) out << " final";
				out << ";\n" << std::string(depth, '\t');
			}
		}
		if (func.indexerParams)
		{
			bool isInline = func.isInline;
			bool isConstexpr = func.isConstexpr;
			if (func.indexerGetter)
			{
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
					if (body->EqualArrow()) {
						isInline = true;
						isConstexpr = true;
					}
					else if (body->AssignArrow())
					{
						isInline = true;
					}
				}
			}
			
			isUnsafe = func.isUnsafe;
			auto access = func.access;
			if (func.indexerGetter) {
				if (auto acc = func.indexerGetter->accessSpecifier())
				{
					if (acc->Public()) access = AccessSpecifier::Public;
					else if (acc->Private()) access = AccessSpecifier::Private;
					else if (acc->Protected()) access = AccessSpecifier::Public;
					else if (acc->Internal()) access = AccessSpecifier::Internal;
				}
				else if (func.indexerGetter->protectedInternal()) access = AccessSpecifier::ProtectedInternal;
			}
			switch (access)
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
				out << "private:";
				break;
			}
			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
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
				if (func.access == AccessSpecifier::Public || func.access == AccessSpecifier::Protected || func.access == AccessSpecifier::Private) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}
			if (func.isConstReturn || !func.isRefReturn) out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << " getAt(";
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(func.indexerParams);
			out << ")";
			if (func.isOverride) out << " override";
			if (func.isFinal) out << " final";
			out << ";\n" << std::string(depth, '\t');
			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
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
				if (func.access == AccessSpecifier::Public || func.access == AccessSpecifier::Protected || func.access == AccessSpecifier::Private) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}
			out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << " getAt(";
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(func.indexerParams);
			out << ") const";
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
		case AccessSpecifier::Protected:
		case AccessSpecifier::ProtectedInternal:
			out << "protected: ";
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
		if (func.attributes)
		{
			for (auto attr : func.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
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
		else if (!DLLName.empty() && !func.templateParams && !func.isAbstract)
		{
			if (func.access == AccessSpecifier::Public || func.access == AccessSpecifier::Protected || func.access == AccessSpecifier::Private) out << DLLName << "_API ";
			else out << DLLName << "_HIDDEN ";
		}

		if (func.isStatic) {
			out << "static ";
		}
		else if (func.isVirtual || func.isFinal || func.isAbstract) {
			out << "virtual ";
		}

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
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
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
				if (!func.isRefReturn) out << "const ";
				if (type->kind == TypeKind::Class && func.returnType->getText() == "self" && func.isRefReturn)
				{
					out << "__selfClass";
				}
				else
				{
					printTypeId(func.returnType);
				}
				
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

		if (type->kind == TypeKind::Class)
		{
			if (func.isOverride) out << " override";
			if (func.isFinal) out << " final";
			if (func.isAbstract) out << " = 0";
		}

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
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected: ";
				break;
			case AccessSpecifier::Private:
				out << "private: ";
				break;
			}
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
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
		else if (func.isCommutative)
		{
			switch (func.access)
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
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}

			isFunctionDeclaration = true;
			if (func.templateParams) {
				printTemplateParams(func.templateParams);
				out << " ";
			}
			if (func.params->paramDeclClause())
			{
				out << "friend ";
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

			out << "auto " << func.id;
			if (!func.params->paramDeclClause())
			{
				if (func.id.starts_with("_operator_")) 
					out << "_postfix() ";
			}
			else
			{
				out << "(";
				printParamDeclClause(func.params->paramDeclClause());
				out << ", const __self& __this) ";
			}

			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> decltype(auto);" << std::endl << std::string(depth, '\t');
		}
		else if (type->kind == TypeKind::Class && func.isConstructor && func.params->paramDeclClause())
		{
			auto params = func.params->paramDeclClause()->paramDeclList()->paramDeclaration();
			if (params.size() == 1)
			{
				if (auto paramType = params[0]->theTypeId())
				{
					auto txt = paramType->getText();
					if (txt == "self" || txt == type->id)
					{
						out << "inline __Class_" << type->id << "(__selfClass& copy) : __Class_" << type->id << "(__self(copy)) {}\n" << std::string(depth, '\t');
					}
				}
			}
		}
		else if (isIndexer && !func.isStatic && !func.isConstReturn && !func.isMutating)
		{
			switch (func.access)
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

			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
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
				if (func.access == AccessSpecifier::Public || func.access == AccessSpecifier::Protected || func.access == AccessSpecifier::Private) out << DLLName << "_API ";
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
	for (const auto& assert_ : type->staticAsserts)
	{
		if (!assert_.compilationCondition.empty())
		{
			out << "#if " << assert_.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << assert_.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "static_assert(";
		printConstantExpression(assert_.expression);
		out << ", " << assert_.message << ");\n" << std::string(depth, '\t');
		if (!assert_.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}

	if (type->kind == TypeKind::Enum) {
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: constexpr operator ";
		if (type->enumBase)
		{
			printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
		}
		else
		{
			out << "CppAdvance::i32";
		}
		out << "() const noexcept { return __value; }\n" << std::string(depth, '\t');
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "private: constexpr " << type->id << "(";
		if (type->enumBase)
		{
			printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
		}
		else
		{
			out << "CppAdvance::i32";
		}
		out << " value) : __value(value) {}\n" << std::string(depth, '\t');
	}
	if (type->kind == TypeKind::Class || type->kind == TypeKind::EnumClass)
	{
		out << "\n#define ADV_PROPERTY_SELF __self";
	}
	if (type->kind == TypeKind::Struct)
	{
		out << "template <size_t I";
		if (type->templateParams)
		{
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				out << ", ";
				printTemplateParamDeclaration(param);
			}
		}
		out << "> friend auto& get(" << type->id;
		if (type->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		else if (type->templateSpecializationArgs)
		{
			out << "<";
			bool first = true;
			for (auto param : type->templateSpecializationArgs->templateArgument())
			{
				if (!first) out << ", ";
				first = false;
				printTemplateArgument(param);
			}
			out << ">";
		}
		out << "&);\n" << std::string(depth, '\t');
		out << "template <size_t I";
		if (type->templateParams)
		{
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				out << ", ";
				printTemplateParamDeclaration(param);
			}
		}
		out << "> friend const auto& get(const " << type->id;
		if (type->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		else if (type->templateSpecializationArgs)
		{
			out << "<";
			bool first = true;
			for (auto param : type->templateSpecializationArgs->templateArgument())
			{
				if (!first) out << ", ";
				first = false;
				printTemplateArgument(param);
			}
			out << ">";
		}
		out << "&);\n" << std::string(depth, '\t');
	}
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');

	currentTupleSize = 0;
	if (type->kind == TypeKind::Struct)
	{
		int i = 0;
		for (const auto& field : type->fields) {
			if (field.isStatic || field.isThreadLocal || field.access != AccessSpecifier::Public) continue;
			if (!field.isConst) {
				if (type->templateParams)
				{
					printTemplateParams(type->templateParams);
				}
				else
				{
					out << "template<>";
				}
				out << " inline auto& get<" << i << ">(" << type->id;
				if (type->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				else if (type->templateSpecializationArgs)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateSpecializationArgs->templateArgument())
					{
						if (!first) out << ", ";
						first = false;
						printTemplateArgument(param);
					}
					out << ">";
				}
				out << "& t) { return t." << field.id << "; }\n" << std::string(depth, '\t');
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
			}
			else
			{
				out << "template<>";
			}
			out << " inline const auto& get<" << i++ << ">(const " << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			else if (type->templateSpecializationArgs)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateSpecializationArgs->templateArgument())
				{
					if (!first) out << ", ";
					first = false;
					printTemplateArgument(param);
				}
				out << ">";
			}
			out << "& t) { return t." << field.id << "; }\n" << std::string(depth, '\t');
		}

		for (const auto& prop : type->properties) {
			if (!prop.setter || !sema.propertiesNeedField.contains(prop.setter) || prop.isStatic 
				|| prop.access != AccessSpecifier::Public) continue;
			if (!prop.isConst) {
				if (type->templateParams)
				{
					printTemplateParams(type->templateParams);
				}
				else
				{
					out << "template<>";
				}
				out << " inline auto& get<" << i << ">(" << type->id;
				if (type->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				else if (type->templateSpecializationArgs)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateSpecializationArgs->templateArgument())
					{
						if (!first) out << ", ";
						first = false;
						printTemplateArgument(param);
					}
					out << ">";
				}
				out << "& t) { return t." << prop.id << "; }\n" << std::string(depth, '\t');
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
			}
			else
			{
				out << "template<>";
			}
			out << " inline const auto& get<" << i++ << ">(const " << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			else if (type->templateSpecializationArgs)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateSpecializationArgs->templateArgument())
				{
					if (!first) out << ", ";
					first = false;
					printTemplateArgument(param);
				}
				out << ">";
			}
			out << "& t) { return t." << prop.id << "; }\n" << std::string(depth, '\t');
		}
		currentTupleSize = i;
	}
	else if (type->kind == TypeKind::Class || type->kind == TypeKind::EnumClass)
	{
		out << "\n" << std::string(depth, '\t');
		if (!type->templateSpecializationArgs && !type->templateParams)
		{
			out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (type->isAbstract)
			{
				out << "ADV_CHECK_FOR_ABSTRACT(" << type->id << ");";
			}
			else
			{
				out << "ADV_CHECK_FOR_CONCRETE(" << type->id << ");";
			}
			
			out << "\n" << std::string(depth, '\t');
			if (type->interfaces) {
				for (auto iface : type->interfaces->baseSpecifier())
				{
					out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
					out << "ADV_CHECK_INTERFACE_IMPLEMENTATION(" << type->id << ", ";
					auto name = iface->className()->Identifier();
					auto tid = iface->className()->simpleTemplateId();
					if (tid) name = tid->templateName()->Identifier();
					printIdentifier(name);
					out << ", ";
					printBaseSpecifier(iface);
					out << ", " << type->id;
					out << ");\n" << std::string(depth, '\t');
				}
			}
		}
		//printClassRef(type);
	}

	if (!type->compilationCondition.empty())
	{
		out << "#endif " << std::endl;
	}
}

void CppAdvanceCodegen::printStructWrapper(StructDefinition* type) const
{
	out << "\n" << std::string(depth, '\t');
	if (!type->compilationCondition.empty())
	{
		out << "#if " << type->compilationCondition << std::endl << std::string(depth, '\t');
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
	out << "class __Class_" << type->id;
	if (type->templateSpecializationArgs)
	{
		out << "<";
		printTemplateArgumentList(type->templateSpecializationArgs);
		out << ">";
	}

	out << " final : public CppAdvance::ValueType";

	out << "\n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	if (type->interfaces) {
		for (auto iface : type->interfaces->baseSpecifier())
		{
			out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "ADV_CHECK_INTERFACE(" << iface->getText() << ", ";
			if (iface->nestedNameSpecifier())
			{
				printNestedNameSpecifier(iface->nestedNameSpecifier());
			}
			printClassName(iface->className());
			out << ");\n" << std::string(depth, '\t');
		}
	}
	out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	out << "public: using __underlying = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << "; using __self = __underlying;\n" << std::string(depth, '\t');
	out << "__self " << "__value;\n" << std::string(depth, '\t');
	for (const auto& nested : type->nestedStructs)
	{
		if (nested->access != AccessSpecifier::Public) continue;
		if (auto tparams = nested->templateParams)
		{
			printTemplateParams(tparams);
			out << " ";
		}
		out << "using " << nested->id << " = __self::" << nested->id;
		if (auto tparams = nested->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto param : tparams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		out << ";\n" << std::string(depth, '\t');
	}
	out << "__Class_" << type->id << "(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>)"
		<< " : __value{value} {}\n" << std::string(depth, '\t');
	out << "operator __underlying() const noexcept { return __value; }\n" << std::string(depth, '\t');
	for (const auto& prop : type->properties)
	{
		if (prop.isStatic || prop.access != AccessSpecifier::Public) continue;
		if (!prop.compilationCondition.empty())
		{
			out << "#if " << prop.compilationCondition << std::endl << std::string(depth, '\t');
		}
		if (prop.setter && (!prop.setter->accessSpecifier() && !prop.setter->protectedInternal()))
		{
			out << "__underlying& set" << prop.id << "(const ";
			printTypeId(prop.type);
			out << "& value) ";
			if (prop.isOverride) out << "override ";
			out << "{ return __value.set" << prop.id << "(value); }\n" << std::string(depth, '\t');
		}
		if (prop.getter && !prop.getter->accessSpecifier() && !prop.getter->protectedInternal() || !prop.setter && !prop.getter)
		{
			out << "auto get" << prop.id << "() const -> ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			if (prop.isOverride) out << " override";
			out << " { return __value.get" << prop.id << "(); }\n" << std::string(depth, '\t');
		}

		if (!prop.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
	for (const auto& method : type->methods)
	{
		if (method.templateParams || method.templateSpecializationArgs || method.isStatic || method.isConstructor || method.isDestructor
			|| method.access != AccessSpecifier::Public || method.params && !method.returnType && method.expression) continue;
		if (!method.compilationCondition.empty())
		{
			out << "#if " << method.compilationCondition << std::endl << std::string(depth, '\t');
		}
		if (method.isConverter)
		{
			out << "operator ";
			printTypeId(method.returnType);
			if (method.isConstReturn) out << " const&";
			else if (method.isRefReturn) out << " &";
			out << "() ";
			if (!method.isMutating) out << "const ";
			if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
			if (method.isOverride) out << " override";
			out << " { return static_cast<";
			printTypeId(method.returnType);
			if (method.isConstReturn) out << " const&";
			else if (method.isRefReturn) out << " &";
			out << ">(__value); }\n" << std::string(depth, '\t');
		}
		else if (method.indexerParams)
		{
			std::string funcname = "_operator_subscript";
			if (method.indexerSetter && (!method.indexerSetter->accessSpecifier() || method.indexerSetter->accessSpecifier()->Public())
				&& !method.indexerSetter->protectedInternal()
				|| !method.indexerSetter && !method.indexerGetter && !method.isConstReturn && method.isRefReturn)
			{
				out << "void setAt(";
				printParamDeclClause(method.indexerParams);
				out << ", const ";
				printTypeId(method.returnType);
				out << "& value) ";
				if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
				if (method.isOverride) out << " override";
				out << " { __value.setAt(";
				bool first = true;
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}

				out << ", value); }\n" << std::string(depth, '\t');
			}
			if (!method.isConstReturn)
			{
				out << "decltype(auto) getAt(";
				printParamDeclClause(method.indexerParams);
				out << ") ";
				if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
				if (method.isOverride) out << " override";
				out << " { return __value." << funcname << "(";
				bool first = true;
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}

				out << "); }\n" << std::string(depth, '\t');
			}

			out << "decltype(auto) getAt(";
			printParamDeclClause(method.indexerParams);
			out << ") const ";
			if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
			if (method.isOverride) out << " override";
			out << " { return __value." << funcname << "(";
			bool first = true;
			for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(param->Identifier());
			}

			out << "); }\n" << std::string(depth, '\t');
		}
		else if (method.params)
		{
			out << "auto " << method.id;
			printFunctionParameters(method.params);
			if (!method.isMutating) out << " const ";
			if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
			out << " -> ";
			if (method.returnType)
			{
				if (type->kind == TypeKind::Class && method.returnType->getText() == "self" && method.isRefReturn)
				{
					out << "__selfClass";
				}
				else
				{
					printTypeId(method.returnType);
				}
				if (method.isConstReturn || !method.isRefReturn) out << " const";
				if (method.isRefReturn) out << " &";
			}
			else
			{
				out << "void";
			}
			if (method.isOverride) out << " override";
			out << " { ADV_EXPRESSION_BODY(__value." << method.id << "(";
			bool first = true;
			if (auto params = method.params->paramDeclClause())
			{
				for (auto param : params->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
			}

			out << ")); }\n" << std::string(depth, '\t');
		}
		if (!method.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
	if (!type->templateSpecializationArgs && !type->templateParams)
	{
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "ADV_CHECK_FOR_CONCRETE(" << type->id << ");\n" << std::string(depth, '\t');
		if (type->interfaces) {
			for (auto iface : type->interfaces->baseSpecifier())
			{
				out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "ADV_CHECK_INTERFACE_IMPLEMENTATION(" << type->id << ", ";
				auto name = iface->className()->Identifier();
				auto tid = iface->className()->simpleTemplateId();
				if (tid) name = tid->templateName()->Identifier();
				printIdentifier(name);
				out << ", ";
				printBaseSpecifier(iface);
				out << ", " << type->id;
				out << ");\n" << std::string(depth, '\t');
			}
		}
	}

	if (!type->compilationCondition.empty())
	{
		out << "#endif " << std::endl;
	}
}

void CppAdvanceCodegen::printClassRef(StructDefinition* type) const
{
	if (!isNested && !type->templateSpecializationArgs)
	{
		if (type->templateParams)
		{
			printTemplateParams(type->templateParams);
			out << " ";
		}
		else
		{
			out << "template<> ";
		}
		out << "inline constexpr bool CppAdvance::__details::cheapCopy<" << type->id;
		if (type->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "> = false;\n" << std::string(depth, '\t');
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
	out << "class ";
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	out << type->id;
	if (type->templateSpecializationArgs)
	{
		out << "<";
		printTemplateArgumentList(type->templateSpecializationArgs);
		out << ">";
	}
	if (type->isFinal || type->kind == TypeKind::EnumClass) out << " final";
	out << " : ";
	if (type->kind == TypeKind::EnumClass)
	{
		out << "public CppAdvance::EnumClassRef";
	}
	else if (!type->interfaces)
	{
		out << "public CppAdvance::ObjectRef";
	}
	else
	{
		out << "public CppAdvance::ClassRefParent<";
		printBaseSpecifier(type->interfaces->baseSpecifier(0));
		out << ">";
	}

	out << " {\n" << std::string(++depth, '\t') << "public: using __self = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	if (type->kind == TypeKind::EnumClass)
	{
		out << "private: using ___super = CppAdvance::EnumClassRef";
	}
	else if (!type->interfaces)
	{
		out << "private: using ___super = CppAdvance::ObjectRef";
	}
	else
	{
		out << "private: using ___super = CppAdvance::ClassRefParent<";
		printBaseSpecifier(type->interfaces->baseSpecifier(0));
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');

	out << "public: using __class = __Class_" << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "private: friend class " << type->id << "__Unowned";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "friend class __Class_" << type->id << "";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "friend class " << type->id << "__Weak";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __strong_ref = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __unowned_ref = " << type->id << "__Unowned";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __weak_ref = " << type->id << "__Weak";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }\n" << std::string(depth, '\t');
	out << "ADV_CLASS_FROM_PTR(" << type->id << ")\n" << std::string(depth, '\t');
	if (type->isAbstract)
	{
		out << "private: " << type->id << "() = delete;\n" << std::string(depth, '\t');
		out << type->id << "(__class*, InitTag) = delete;\n" << std::string(depth, '\t');
	}
	else
	{
		if (type->isDefaultConstructible && type->kind != TypeKind::EnumClass)
			out << "public: inline " << type->id << "();\n" << std::string(depth, '\t');
		out << "ADV_CLASS_INIT(" << type->id << ")\n" << std::string(depth, '\t');
	}
	out << "ADV_CLASS_STRONG_COMMON_CTORS(" << type->id << ")\n" << std::string(depth, '\t');
	isNested = true;
	for (const auto& nested : type->nestedStructs)
	{
		if (nested->access == AccessSpecifier::Private)
		{
			out << "private: ";
		}
		else if (nested->access == AccessSpecifier::Protected)
		{
			out << "protected: ";
		}
		else
		{
			out << "public: ";
		}
		out << "\n" << std::string(depth, '\t');
		if (nested->kind == TypeKind::Class || nested->kind == TypeKind::EnumClass)
		{
			if (nested->templateParams)
			{
				printTemplateParams(nested->templateParams);
				out << " ";
			}
			out << "class " << nested->id << "; ";
			if (nested->templateParams)
			{
				printTemplateParams(nested->templateParams);
				out << " ";
			}
			out << "class " << nested->id << "__Unowned; ";
			if (nested->templateParams)
			{
				printTemplateParams(nested->templateParams);
				out << " ";
			}
			out << "class " << nested->id << "__Weak; ";
			if (nested->templateParams)
			{
				printTemplateParams(nested->templateParams);
				out << " ";
			}
			out << "class __Class_" << nested->id << ";\n" << std::string(depth,'\t');
			printClassRef(nested.get());
		}
		else {
			printType(nested.get());
		}
		out << "\n" << std::string(depth, '\t');
	}
	for (const auto& nested : type->nestedStructs)
	{
		if (nested->kind == TypeKind::RefStruct) continue;
		if (nested->access == AccessSpecifier::Private)
		{
			out << "private: ";
		}
		else if (nested->access == AccessSpecifier::Protected)
		{
			out << "protected: ";
		}
		else
		{
			out << "public: ";
		}
		out << "\n" << std::string(depth, '\t');
		if (nested->kind == TypeKind::Struct || nested->kind == TypeKind::Enum 
			|| nested->kind == TypeKind::Union || nested->kind == TypeKind::UnionStruct) {
			printStructWrapper(nested.get());
		}
		else if (nested->kind == TypeKind::Class || nested->kind == TypeKind::EnumClass) {
			printType(nested.get());
		}
		out << "\n" << std::string(depth, '\t');
	}
	for (const auto& field : type->fields)
	{
		if (!field.isStatic && !field.isThreadLocal) continue;

		if (!field.compilationCondition.empty())
		{
			out << "#if " << field.compilationCondition << std::endl << std::string(depth, '\t');
		}
		switch (field.access)
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
		out << "static decltype(auto) get" << field.id << "();\n" << std::string(depth, '\t');
		if (!field.isConst)
		{
			out << "static void set" << field.id << "(const ";
			printTypeId(field.type);
			out << "& value);\n" << std::string(depth, '\t');
			out << "ADV_PROPERTY_GETTER_SETTER_STATIC(";
			switch (field.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public";
				break;
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}
			out << ", ";
			if (!field.isThreadLocal && !DLLName.empty())
			{
				out << DLLName;
				if (field.access == AccessSpecifier::Internal || field.access == AccessSpecifier::ProtectedInternal)
				{
					out << "_HIDDEN";
				}
				else
				{
					out << "_API";
				}
			}
			out << ", " << field.id << ", ";
			switch (field.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public";
				break;
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}
			out << ", get" << field.id << ", ";
			switch (field.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public";
				break;
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}
			out << ", set" << field.id << ", ";
            printTypeId(field.type);
			out << ")";
		}
		else
		{
			out << "ADV_PROPERTY_GETTER_STATIC(";
			switch (field.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public";
				break;
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}
			out << ", ";
			if (!DLLName.empty())
			{
				out << DLLName;
				if (field.access == AccessSpecifier::Internal || field.access == AccessSpecifier::ProtectedInternal)
				{
					out << "_HIDDEN";
				}
				else
				{
					out << "_API";
				}
			}
			
			out << ", " << field.id << ", get" << field.id << ", ";
			printTypeId(field.type);
			out << ")";
		}
		out << ";\n" << std::string(depth, '\t');
		if (!field.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
		sema.properties.insert_or_assign(field.pos, PropertyDefinition{ field.id, field.type, field.pos, nullptr, nullptr, nullptr, nullptr, nullptr, field.access, field.compilationCondition,
			"", field.parentType + "::__self", type->templateParams, type->templateSpecializationArgs, true, field.isConst, false, isUnsafe, type->access == AccessSpecifier::Private,
			type->access == AccessSpecifier::Protected, type->isUnsafe, false, false, false,
			false, false, false });
	}
	out << "#define ADV_PROPERTY_SELF __class\n" << std::string(depth, '\t');
	for (const auto& prop : type->properties)
	{
		if (!prop.isStatic) continue;

		if (!prop.compilationCondition.empty())
		{
			out << "#if " << prop.compilationCondition << std::endl << std::string(depth, '\t');
		}
		switch (prop.access)
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

		AccessSpecifier getAccess = prop.access;
		AccessSpecifier setAccess = prop.access;
		if (prop.setter)
		{
			if (prop.getter) {
				out << "ADV_PROPERTY_GETTER_SETTER_STATIC(";
				switch (prop.access)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				out << ", ";
				if (!DLLName.empty())
				{
					out << DLLName;
					if (prop.access == AccessSpecifier::Internal || prop.access == AccessSpecifier::ProtectedInternal)
					{
						out << "_HIDDEN";
					}
					else
					{
						out << "_API";
					}
				}
				out << ", " << prop.id << ", ";

				if (auto acc = prop.setter->accessSpecifier())
				{
					if (acc->Public()) setAccess = AccessSpecifier::Public;
					else if (acc->Internal()) setAccess = AccessSpecifier::Internal;
					else if (acc->Protected()) setAccess = AccessSpecifier::Protected;
					else if (acc->Private()) setAccess = AccessSpecifier::Private;
				}
				if (prop.setter->protectedInternal()) setAccess = AccessSpecifier::ProtectedInternal;
				if (auto acc = prop.getter->accessSpecifier())
				{
					if (acc->Public()) getAccess = AccessSpecifier::Public;
					else if (acc->Internal()) getAccess = AccessSpecifier::Internal;
					else if (acc->Protected()) getAccess = AccessSpecifier::Protected;
					else if (acc->Private()) getAccess = AccessSpecifier::Private;
				}
				if (prop.getter->protectedInternal()) getAccess = AccessSpecifier::ProtectedInternal;

				switch (getAccess)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
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
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}
				out << ", set" << prop.id << ", ";
				if (prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << ")";
			}
			else
			{
				out << "ADV_PROPERTY_SETTER_STATIC(";
				switch (prop.access)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				out << ", ";
				if (!DLLName.empty())
				{
					out << DLLName;
					if (prop.access == AccessSpecifier::Internal || prop.access == AccessSpecifier::ProtectedInternal)
					{
						out << "_HIDDEN";
					}
					else
					{
						out << "_API";
					}
				}
				out << ", " << prop.id << ", set" << prop.id << ", ";
				if (prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				out << ")";
			}
		}
		else
		{
			out << "ADV_PROPERTY_GETTER_STATIC(";
			switch (prop.access)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public";
				break;
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}

			out << ", ";
			if (!DLLName.empty())
			{
				out << DLLName;
				if (prop.access == AccessSpecifier::Internal || prop.access == AccessSpecifier::ProtectedInternal)
				{
					out << "_HIDDEN";
				}
				else
				{
					out << "_API";
				}
			}
			out << ", " << prop.id << ", get" << prop.id << ", ";
			if (prop.isConst) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
			out << ")";
		}
		out << ";\n" << std::string(depth, '\t');
		if (!prop.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
		sema.properties.insert_or_assign(SourcePosition{prop.pos.line, prop.pos.column+1}, PropertyDefinition{ prop.id, prop.type, prop.pos, nullptr,
			nullptr, nullptr, nullptr, nullptr, prop.access, prop.compilationCondition,
			"", prop.parentType + "::__self", type->templateParams, type->templateSpecializationArgs, true,
			prop.isConst, false, isUnsafe, type->access == AccessSpecifier::Private,
			type->access == AccessSpecifier::Protected, type->isUnsafe, false, false, false,
			false, false, false });
	}
	out << "#define ADV_PROPERTY_SELF __self\n" << std::string(depth,'\t');
	for (const auto& func : type->methods)
	{
		if (!func.isStatic && !func.isConverter && !func.id.starts_with("operator") && !func.id.starts_with("_operator") 
			&& !(func.isConstructor && func.implicitSpecification)) continue;
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		switch (func.access)
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
		else if (func.isConstexpr && !func.isConstructor)
		{
			out << "inline constexpr ";
		}
		else if (func.isInline || func.indexerSetter)
		{
			out << "inline ";
		}

		if (func.isStatic) out << "static ";

		bool isRegularMethod = !func.isConstructor && !func.isDestructor && !func.isConverter;
		if (func.isCommutative)
		{
			if (func.returnType)
			{
				out << "const ";
				printTypeId(func.returnType);
				out << " ";
			}
			else
			{
				out << "decltype(auto) ";
			}
		}
		else if (isRegularMethod) {
			out << "decltype(auto) ";
		}
		else if (func.implicitSpecification)
		{
			printImplicitSpecification(func.implicitSpecification);
			out << " ";
		}
		else if (func.isConverter)
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
		else if (func.isConstructor)
		{
			out << type->id;
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
		if (!func.isStatic && !func.isConstructor) {
			out << "const ";
		}
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);

		if (!func.isStatic && func.isRefReturn)
			out << " LIFETIMEBOUND";

		out << ";" << std::endl << std::string(depth, '\t');
		if (func.id == "operator++" || func.id == "operator--")
		{
			switch (func.access)
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
			out << " -> " << type->id <<";" << std::endl << std::string(depth, '\t');
		}
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
		isNewDeleteOperator = false;
	}
	for (const auto& constant : type->constants)
	{
		if (type->kind == TypeKind::EnumClass && !constant.type)
		{
			out << "public: FORCE_INLINE static decltype(auto) get" << constant.id << "() noexcept;\n" << std::string(depth, '\t');
			out << "ADV_PROPERTY_GETTER_STATIC(public, ";
			if (!DLLName.empty())
			{
				out << DLLName << "_API";
			}
			out << ", " << constant.id << ", get" << constant.id << ", __self);\n" << std::string(depth, '\t');
		}
		else {
			if (!constant.compilationCondition.empty())
			{
				out << "#if " << constant.compilationCondition << std::endl << std::string(depth, '\t');
			}
			switch (constant.access)
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
			if (constant.templateParams)
			{
				printTemplateParams(constant.templateParams);
				out << " ";
			}
			out << "static constexpr ";
			if (constant.type)
			{
				printTypeId(constant.type);
			}
			else
			{
				out << "decltype(auto) ";
			}
			out << constant.id;
			if (constant.initializer) {
				out << " = ";
				printInitializerClause(constant.initializer);
			}
			out << ";\n" << std::string(depth, '\t');
			if (!constant.compilationCondition.empty())
			{
				out << "#endif " << std::endl << std::string(depth, '\t');
			}
		}
	}
	if (type->kind == TypeKind::EnumClass)
	{
		out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: FORCE_INLINE static decltype(auto) GetValues() noexcept;\n" << std::string(depth, '\t');
	}
	for (const auto& alias : type->typeAliases)
	{
		if (!alias.compilationCondition.empty())
		{
			out << "#if " << alias.compilationCondition << std::endl << std::string(depth, '\t');
		}
		switch (alias.access)
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
		if (alias.templateParams)
		{
			printTemplateParams(alias.templateParams);
			out << " ";
		}
		out << "using " << alias.id << " = ";
		printTypeId(alias.type);
		if (alias.templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : alias.templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << ";\n" << std::string(depth, '\t');
		if (!alias.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}
	for (const auto& friendType : type->friendTypes)
	{
		if (!friendType.compilationCondition.empty())
		{
			out << "#if " << friendType.compilationCondition << std::endl << std::string(depth, '\t');
		}
		if (friendType.templateParams)
		{
			printTemplateParams(friendType.templateParams);
			out << " ";
		}
		out << "friend class " << friendType.id << ";\n" << std::string(depth, '\t');
		if (friendType.templateParams)
		{
			printTemplateParams(friendType.templateParams);
			out << " ";
		}
		out << "friend class __Class_" << friendType.id << ";\n" << std::string(depth, '\t');
		if (!friendType.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}
	for (const auto& func : type->friendFuncDeclarations)
	{
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "friend ";
		if (auto t = func.returnType)
		{
			if (t->Const() || !t->Ref()) out << "const ";
			printTypeId(t->theTypeId());
			if (t->Ref()) out << "&";
		}
		else
		{
			out << "void";
		}

		out << " " << func.id;
		printFunctionParameters(func.params);
		out << ";\n" << std::string(depth, '\t');
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}
	
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');

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
	out << "class ";
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	out << type->id << "__Unowned";
	if (type->templateSpecializationArgs)
	{
		out << "<";
		printTemplateArgumentList(type->templateSpecializationArgs);
		out << ">";
	}
	if (type->isFinal) out << " final";
	out << " : ";
	if (!type->interfaces)
	{
		out << "public CppAdvance::ObjectRef__Unowned";
	}
	else
	{
		out << "public CppAdvance::ClassRefParentUnowned<";
		printBaseSpecifier(type->interfaces->baseSpecifier(0));
		out << ">";
	}

	out << " {\n" << std::string(++depth, '\t') << "public: using __self = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __strong_ref = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __unowned_ref = " << type->id << "__Unowned";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __weak_ref = " << type->id << "__Weak";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	if (!type->interfaces)
	{
		out << "private: using ___super = CppAdvance::ObjectRef__Unowned";
	}
	else
	{
		out << "private: using ___super = CppAdvance::ClassRefParentUnowned<";
		printBaseSpecifier(type->interfaces->baseSpecifier(0));
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');

	out << "public: using __class = __Class_" << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }\n" << std::string(depth, '\t');
	out << "ADV_CLASS_FROM_PTR(" << type->id << "__Unowned)\n" << std::string(depth, '\t');
	out << "ADV_CLASS_UNOWNED_COMMON_CTORS(" << type->id << "__Unowned)\n" << std::string(depth, '\t');
	
	for (const auto& func : type->methods)
	{
		if (!func.isConverter && !func.id.starts_with("operator") && !func.id.starts_with("_operator")) continue;
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		switch (func.access)
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

		bool isRegularMethod = !func.isConverter;
		if (isRegularMethod) out << "decltype(auto) ";
		else if (func.implicitSpecification)
		{
			printImplicitSpecification(func.implicitSpecification);
			out << " ";
		}
		else if (func.isConverter)
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
		out << " const ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);

		if (!func.isStatic && func.isRefReturn)
			out << " LIFETIMEBOUND";

		
		out << ";" << std::endl << std::string(depth, '\t');
		if (func.id == "operator++" || func.id == "operator--")
		{
			switch (func.access)
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
			out << " -> " << type->id;
			out << ";" << std::endl << std::string(depth, '\t');
		}
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
		isNewDeleteOperator = false;
	}

	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
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
	out << "class ";
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	out << type->id << "__Weak";
	if (type->templateSpecializationArgs)
	{
		out << "<";
		printTemplateArgumentList(type->templateSpecializationArgs);
		out << ">";
	}
	if (type->isFinal) out << " final";
	out << " : ";
	if (!type->interfaces)
	{
		out << "public CppAdvance::ObjectRef__Weak";
	}
	else
	{
		out << "public CppAdvance::ClassRefParentWeak<";
		printBaseSpecifier(type->interfaces->baseSpecifier(0));
		out << ">";
	}

	out << " {\n" << std::string(++depth, '\t') << "public: using __self = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __strong_ref = " << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __unowned_ref = " << type->id << "__Unowned";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __weak_ref = " << type->id << "__Weak";
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	if (!type->interfaces)
	{
		out << "private: using ___super = CppAdvance::ObjectRef__Weak";
	}
	else
	{
		out << "private: using ___super = CppAdvance::ClassRefParentWeak<";
		printBaseSpecifier(type->interfaces->baseSpecifier(0));
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');

	out << "public: using __class = __Class_" << type->id;
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
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "static constexpr bool __IS_ADV_NULLABLE = true;\n" << std::string(depth, '\t');
	out << "public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(depth, '\t');
	out << "ADV_CLASS_WEAK_FROM_PTR(" << type->id << "__Weak)\n" << std::string(depth, '\t');
	out << "ADV_CLASS_WEAK_COMMON_CTORS(" << type->id << "__Weak)\n" << std::string(depth, '\t');

	out << "#define ADV_PROPERTY_SELF __self";
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
	sema.symbolContexts.push(sema.symbolContexts.top());
}

void CppAdvanceCodegen::printInterface(StructDefinition* type) const
{
	if (!type->compilationCondition.empty())
	{
		out << "#if " << type->compilationCondition << std::endl;
	}
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else
	{
		out << "template<> ";
	}

	out << "inline constexpr bool CppAdvance::__details::cheapCopy<" << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}
	out << "> = false;\n" << std::string(depth, '\t');
	//concepts for method implementations
	std::map<const MethodDefinition*, std::string> methodIds;
	std::map<const PropertyDefinition*, std::string> propertyIds;
	std::vector<std::string> interfaceRequirements; 
	for (const auto& method : type->methods) {
		if (method.isStatic) continue;
		bool isUnchecked = false;
		if (method.attributes) for (auto attr : method.attributes->attributeSpecifier())
		{
			auto attrName = attr->Identifier()->getText();
			if (attrName == "Unchecked") isUnchecked = true;
		}
		if (method.indexerParams)
		{
			methodIds[&method] = sema.getInterfaceMethodId(type->id + "_" + method.id + std::to_string(isUnchecked), method.indexerParams);
		}
		else
		{
			methodIds[&method] = sema.getInterfaceMethodId(type->id + "_" + method.id, method.params->paramDeclClause());
		}
		out << "#line " << method.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "template<class __AnyType";
		if (type->templateParams)
		{
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				out << ", ";
				printTemplateParamDeclaration(param);
			}
		}
		auto id = method.id;
		if (method.indexerParams) id = "getAt";
		if (!method.isDefault) interfaceRequirements.emplace_back("__HasMethodImplementation_" + methodIds[&method]);
		out << "> concept __HasMethodImplementation_" << methodIds[&method] << " = requires(typename __AnyType::__class t) { {t." << id << "(";
		if (method.indexerParams)
		{
			bool first = true;
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag{}";
				first = false;
			}
			for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				out << "std::declval<";
				printTypeId(param->theTypeId());
				out << ">()";
			}
		}
		else if (method.params->paramDeclClause()) {
			bool first = true;
			for (auto param : method.params->paramDeclClause()->paramDeclList()->paramDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				out << "std::declval<";
				printTypeId(param->theTypeId());
				out << ">()";
			}
		}
		out << ")} -> ";
		if (method.returnType)
		{
			out << "std::convertible_to<";
			printTypeId(method.returnType);
			if (method.isRefReturn) out << "&";
			out << ">";
		}
		else
		{
			out << "std::same_as<void>";
		}
		
		out << "; } ";
		if (!method.isDefault) {
			out << " || requires(typename __AnyType::__class t) { {" << method.id << "(t";
			if (method.indexerParams)
			{
				if (isUnchecked)
				{
					out << ", CppAdvance::UncheckedTag{}";
				}
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					out << "std::declval<";
					printTypeId(param->theTypeId());
					out << ">()";
				}
			}
			else
			if (method.params && method.params->paramDeclClause()) {
				for (auto param : method.params->paramDeclClause()->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					out << "std::declval<";
					printTypeId(param->theTypeId());
					out << ">()";
				}
			}
			out << ")} -> ";
			if (method.returnType)
			{
				out << "std::convertible_to<";
				printTypeId(method.returnType);
				if (method.isRefReturn) out << "&";
				out << ">";
			}
			else
			{
				out << "std::same_as<void>";
			}

			out << "; }";
		}
		out << ";\n" << std::string(depth, '\t');
		if (method.indexerSetter)
		{
			out << "#line " << method.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "template<class __AnyType";
			if (type->templateParams)
			{
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					out << ", ";
					printTemplateParamDeclaration(param);
				}
			}

			interfaceRequirements.emplace_back("__HasMethodImplementation_set" + methodIds[&method]);
			out << "> concept __HasMethodImplementation_set" << methodIds[&method] << " = requires(typename __AnyType::__class t) { {t.setAt(";
			if (method.indexerParams) {
				bool first = true; 
				if (isUnchecked)
				{
					out << "CppAdvance::UncheckedTag{}";
					first = false;
				}
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					out << "std::declval<";
					printTypeId(param->theTypeId());
					out << ">()";
				}
			}
			out << ",std::declval<";
			printTypeId(method.returnType);
			out << ">())} -> std::same_as<void>; } || requires(typename __AnyType::__class t) { {setAt(t";
			if (isUnchecked)
			{
				out << ", CppAdvance::UncheckedTag{}";
			}
			if (method.params && method.params->paramDeclClause()) {
				for (auto param : method.params->paramDeclClause()->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					out << "std::declval<";
					printTypeId(param->theTypeId());
					out << ">()";
				}
			}
			out << ")} -> ";
			if (method.returnType)
			{
				out << "std::convertible_to<";
				printTypeId(method.returnType);
				if (method.isRefReturn) out << "&";
				out << ">";
			}
			else
			{
				out << "std::same_as<void>";
			}

			out << "; };\n" << std::string(depth, '\t');
		}
	}
	for (const auto& prop : type->properties) {
		propertyIds[&prop] = sema.getInterfaceMethodId(type->id + "_" + prop.id, nullptr);
		auto id = propertyIds[&prop];
		out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "template<class __AnyType";
		if (type->templateParams)
		{
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				out << ", ";
				printTemplateParamDeclaration(param);
			}
		}

		interfaceRequirements.emplace_back("__HasMethodImplementation_get" + id);
		out << "> concept __HasMethodImplementation_get" << id << " = requires(typename __AnyType::__class t) { {t.get" << prop.id 
			<< "()} -> std::convertible_to<";
		printTypeId(prop.type);
		out << ">; } || requires(typename __AnyType::__class t) { {get" << prop.id << "(t)} -> std::convertible_to<";
		printTypeId(prop.type);
		out << ">; };\n" << std::string(depth, '\t');
		if (prop.setter)
		{
			out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "template<class __AnyType";
			if (type->templateParams)
			{
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					out << ", ";
					printTemplateParamDeclaration(param);
				}
			}
			interfaceRequirements.emplace_back("__HasMethodImplementation_set" + id);
			out << "> concept __HasMethodImplementation_set" << id << " = requires(typename __AnyType::__class t) { t.set" << prop.id
				<< "(std::declval<";
			printTypeId(prop.type);
			out << ">()); } || requires(typename __AnyType::__class t) { set"
				<< prop.id << "(t, std::declval<";
			printTypeId(prop.type);
			out << ">()); };\n" << std::string(depth, '\t');
		}
	}
	//check base interfaces
	if (type->interfaces) {
		for (auto iface : type->interfaces->baseSpecifier())
		{
			out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "ADV_CHECK_INTERFACE(" << iface->getText() << ", ";
			if (iface->nestedNameSpecifier())
			{
				printNestedNameSpecifier(iface->nestedNameSpecifier());
			}
			printClassName(iface->className());
			out << ");\n" << std::string(depth, '\t');
		}
	}
	//print interface virtual table
	out << "namespace __vtables {\n" << std::string(++depth, '\t');
	out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	out << "struct __vtable_" << type->id;
	if (type->interfaces)
	{
		out << " : ";
		bool first = true;
		for (auto parent : type->interfaces->baseSpecifier())
		{
			if (!first) out << ", ";
			first = false;
			out << "public ";
			printBaseSpecifier(parent);
			out << "::__vtable";
		}
	}
	out << "\n" << std::string(depth, '\t') << "{\n" << std::string(++depth, '\t');
	for (const auto& method : type->methods)
	{
		if (method.isStatic) continue; 
		bool isUnchecked = false;
		if (method.attributes) for (auto attr : method.attributes->attributeSpecifier())
		{
			auto attrName = attr->Identifier()->getText();
			if (attrName == "Unchecked") isUnchecked = true;
		}
		auto id = methodIds[&method];
		out << "using fn_" << id << " = ";
		if (method.returnType) {
			if (method.isConstReturn || !method.isRefReturn) out << "const ";
			printTypeId(method.returnType);
			if (method.isRefReturn) out << "&";
		}
		else
		{
			out << "void";
		}
		out << "(CppAdvance::Object*";
		if (method.indexerParams)
		{
			if (isUnchecked)
			{
				out << ", CppAdvance::UncheckedTag";
			}
			out << ", ";
			printParamDeclClause(method.indexerParams);
		}
		else if (auto params = method.params->paramDeclClause()) {
			out << ", ";
			printParamDeclClause(params);
		}
		out << ");\n" << std::string(depth, '\t');
		out << "fn_" << id << "* fnptr_" << id << ";\n" << std::string(depth, '\t');
		out << "#line " << method.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "template<class __AnyType> static ";
		if (method.returnType) {
			if (method.isConstReturn || !method.isRefReturn) out << "const ";
			printTypeId(method.returnType);
			if (method.isRefReturn) out << "&";
		}
		else
		{
			out << "void";
		}
		out << " impl_" << id << "(CppAdvance::Object* obj";
		if (method.indexerParams)
		{
			if (isUnchecked)
			{
				out << ", CppAdvance::UncheckedTag __tag";
			}
			out << ", ";
			printParamDeclClause(method.indexerParams);
			out << ") { return ADV_UFCS(getAt)(*static_cast<typename __AnyType::__class*>(obj)";
			if (method.indexerParams) {
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (isUnchecked)
					{
						out << ", __tag";
					}
					out << ", ";
					printIdentifier(param->Identifier());
				}
			}
			out << "); }";
		}
		else
		{
			if (auto params = method.params->paramDeclClause()) {
				out << ", ";
				printParamDeclClause(params);
			}
			out << ") { ";
			if (method.isDefault)
			{
				out << "\n" << std::string(++depth, '\t');
				out << "if constexpr(__HasMethodImplementation_" << methodIds[&method] << "<__AnyType";
				if (type->templateParams)
				{
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						out << ", ";
						printIdentifier(param->Identifier());
					}
				}
				out << ">) {\n" << std::string(++depth, '\t');
			}
			out << "ADV_EXPRESSION_BODY(ADV_UFCS(" << method.id << ")(*static_cast<typename __AnyType::__class*>(obj)";
			if (method.params->paramDeclClause()) {
				for (auto param : method.params->paramDeclClause()->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					printIdentifier(param->Identifier());
				}
			}
			out << ")); ";
			if (method.isDefault)
			{
				out << "\n" << std::string(--depth, '\t') << "} else { throw 0; }\n" << std::string(--depth, '\t') << "}";
			}
			else
			{
				out << "}";
			}
		}
		out << "\n" << std::string(depth, '\t');
		if (method.indexerSetter) {
			out << "using fn_set" << id << " = void(CppAdvance::Object*, "; 
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(method.indexerParams);
			out << ", const ";
			printTypeId(method.returnType);
			out << "&);\n" << std::string(depth, '\t');
			out << "fn_set" << id << "* fnptr_set" << id << ";\n" << std::string(depth, '\t');
			out << "#line " << method.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "template<class __AnyType> static void impl_set" << id << "(CppAdvance::Object* obj, ";
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag __tag, ";
			}
			printParamDeclClause(method.indexerParams);
			out << ", const ";
			printTypeId(method.returnType);
			out << "& value) { ADV_UFCS(setAt)(*static_cast<typename __AnyType::__class*>(obj)";
			for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (isUnchecked)
				{
					out << ", __tag";
				}
				out << ", ";
				printIdentifier(param->Identifier());
			}
			out << ", value); }\n" << std::string(depth, '\t');
		}
	}
	for (const auto& prop : type->properties)
	{
		out << "using fn_get" << prop.id << " = ";
		if (prop.isConst) out << "const ";
		printTypeId(prop.type);
		if (prop.isRef) out << "&";
		out << "(CppAdvance::Object*);\n" << std::string(depth, '\t');
		
		out << "fn_get" << prop.id << "* fnptr_get" << prop.id << ";\n" << std::string(depth, '\t');
		out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "template<class __AnyType> static ";
		if (prop.isConst) out << "const ";
		printTypeId(prop.type);
		if (prop.isRef) out << "&";
		out << " impl_get" << prop.id 
			<< "(CppAdvance::Object* obj) { return ADV_UFCS(get" << prop.id << ")(*static_cast<typename __AnyType::__class*>(obj)); }\n" 
			<< std::string(depth, '\t');

		if (prop.setter)
		{
			out << "using fn_set" << prop.id << " = void(CppAdvance::Object*, const ";
			printTypeId(prop.type);
			out << "&);\n" << std::string(depth, '\t');
			out << "fn_set" << prop.id << "* fnptr_set" << prop.id << ";\n" << std::string(depth, '\t');
			out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "template<class __AnyType> static void impl_set" << prop.id << "(CppAdvance::Object* obj, const ";
			printTypeId(prop.type);
			out << "& value) { ADV_UFCS(set" << prop.id << ")(*static_cast<typename __AnyType::__class*>(obj), value); }\n" << std::string(depth, '\t');
		}
	}
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(--depth, '\t') << "}\n" << std::string(depth,'\t');
	//virtual table instantiation
	out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	out << "template<class __AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printTemplateParamDeclaration(param);
		}
	}
	out << "> inline constexpr __vtables::__vtable_" << type->id;
	if (type->templateParams)
	{
		bool first = true;
		out << "<";
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << " __vtable_" << type->id << "_for = {";
	bool first = true;
	if (type->interfaces)
	{
		for (auto parent : type->interfaces->baseSpecifier())
		{
			if (!first) out << ", ";
			first = false;
			auto name = parent->className()->Identifier();
			CppAdvanceParser::TemplateArgumentListContext* targs = nullptr;
			if (auto tid = parent->className()->simpleTemplateId())
			{
				name = tid->templateName()->Identifier();
				targs = tid->templateArgumentList();
			}
			if (parent->nestedNameSpecifier())
			{
				printNestedNameSpecifier(parent->nestedNameSpecifier());
			}
			out << "__vtable_" << name->getText() << "_for<__AnyType";
			if (targs) {
				out << ", ";
				printTemplateArgumentList(targs);
			}
			out << ">\n" << std::string(depth + 1,'\t');
		}
	}
	for (const auto& method : type->methods) {
		if (method.isStatic) continue;
        if (!first) out << ", ";
		first = false;
		if (method.isDefault) {
			out << "__HasMethodImplementation_" << methodIds[&method] << "<__AnyType";
			if (type->templateParams)
			{
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					out << ", ";
					printIdentifier(param->Identifier());
				}
			}
			out << "> ? ";
		}
		out << "&__vtables::__vtable_" << type->id;
		if (type->templateParams)
		{
			bool first2 = true;
			out << "<";
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				if (!first2) out << ", ";
				first2 = false;
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		out << "::template impl_" << methodIds[&method] << "<__AnyType>";
		if (method.isDefault)
		{
			out << " : nullptr";
		}
		if (method.indexerSetter)
		{
			out << ", &__vtables::__vtable_" << type->id;
			if (type->templateParams)
			{
				bool first2 = true;
				out << "<";
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first2) out << ", ";
					first2 = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << "::template impl_set" << methodIds[&method] << "<__AnyType>";
		}
		out << "\n" << std::string(depth + 1,'\t');
	}
	for (const auto& prop : type->properties) {
		if (!first) out << ", ";
		first = false;
		out << "&__vtables::__vtable_" << type->id;
		if (type->templateParams)
		{
			bool first2 = true;
			out << "<";
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				if (!first2) out << ", ";
				first2 = false;
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		out << "::template impl_get" << prop.id << "<__AnyType>";
		if (prop.setter)
		{
			out << ", &__vtables::__vtable_" << type->id;
			if (type->templateParams)
			{
				bool first2 = true;
				out << "<";
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first2) out << ", ";
					first2 = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << "::template impl_set" << prop.id << "<__AnyType>";
		}
		out << "\n" << std::string(depth + 1, '\t');
	}
	out << "};\n" << std::string(depth, '\t');
	//print concept for static polymorphism
	out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	out << "template<class __AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printTemplateParamDeclaration(param);
		}
	}
	out << "> concept __ImplementsInterface_" << type->id << " = ";
	first = true;
	if (type->interfaces)
	{
		for (auto base : type->interfaces->baseSpecifier())
		{
			if (!first) out << " && ";
			first = false;
			if (base->nestedNameSpecifier())
			{
				printNestedNameSpecifier(base->nestedNameSpecifier());
			}
			out << "__ImplementsInterface_";
            auto name = base->className()->Identifier();
            CppAdvanceParser::TemplateArgumentListContext* targs = nullptr;
			if (auto tid = base->className()->simpleTemplateId())
			{
				targs = tid->templateArgumentList();
				name = tid->templateName()->Identifier();
			}
            out << name->getText() << "<__AnyType";
			if (targs)
			{
				out << ", ";
				printTemplateArgumentList(targs);
			}
			out << ">";
		}
	}
	for (const auto& constraint : interfaceRequirements)
	{
		if (!first) out << " && ";
		first = false;
		out << constraint << "<__AnyType";
		if (type->templateParams) {
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				out << ", ";
				printIdentifier(param->Identifier());
			}
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	//print interface reference
	out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	out << "class ";
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	out << type->id;
	out << " final : public CppAdvance::InterfaceRef {\n" << std::string(++depth, '\t') << "public: using __self = " << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __vtable = __vtables::__vtable_" << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __class = CppAdvance::Object;\n" << std::string(depth, '\t');
	out << "public: using ___super = CppAdvance::InterfaceRef;\n" << std::string(depth, '\t');
	out << "private: friend class " << type->id << "__Unowned";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "friend class " << type->id << "__Weak";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __strong_ref = __self;\n" << std::string(depth, '\t');
	out << "public: using __unowned_ref = " << type->id << "__Unowned";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __weak_ref = " << type->id << "__Weak";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_" << type->id << "<__AnyType";
	if (type->templateParams)
	for (auto param : type->templateParams->templateParamDeclaration())
	{
		out << ", ";
		printIdentifier(param->Identifier());
		if (param->Ellipsis()) out << "...";
	}
	out << ">;\n" << std::string(depth, '\t');
	out << "public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(depth, '\t');
	out << "private: const __vtable* _vtable;\n" << std::string(depth, '\t');
	out << "ADV_INTERFACE_STRONG_COMMON_CTORS(" << type->id << ");\n" << std::string(depth, '\t');
	bool isCovariant = false;
	if (type->templateParams)
	{
		out << "public: using ElementType = ";
		printIdentifier(type->templateParams->templateParamDeclaration(0)->Identifier());
		out << ";\n" << std::string(depth, '\t');
		out << "public: template<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			if (auto t = param->templateTypename())
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
			else
			{
				out << "class";
			}
			if (param->Ellipsis())
			{
				out << "...";
			};
		}
		out << "> friend class " << type->id << ";\n" << std::string(depth,'\t');
		out << "public: template<";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			if (auto t = param->templateTypename())
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
			else
			{
				out << "class";
			}
			if (param->Ellipsis())
			{
				out << "...";
			};
		}
		out << "> friend class " << type->id << "__Unowned;\n" << std::string(depth, '\t');
		out << "public: template<";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			if (auto t = param->templateTypename())
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
			else
			{
				out << "class";
			}
			if (param->Ellipsis())
			{
				out << "...";
			};
		}
		out << "> friend class " << type->id << "__Weak;\n" << std::string(depth, '\t');
#define CTOR_TEMPLATE_PARAMS out << "public: template<";\
		first = true;\
		for (auto param : type->templateParams->templateParamDeclaration())\
		{\
			if (!first) out << ", ";\
			first = false;\
			if (auto t = param->templateTypename())\
			{\
				if (auto name = t->theTypeId())\
				{\
					printTypeId(name);\
				}\
				else\
				{\
					out << "class";\
				}\
			}\
			else\
			{\
				out << "class";\
			}\
			if (param->Ellipsis())\
			{\
				out << "...";\
			}\
			out << " Other__";\
			printIdentifier(param->Identifier());\
		}\
		out << "> requires ";\
		first = true;\
		for (auto param : type->templateParams->templateParamDeclaration())\
		{\
			bool inParam = param->In();\
			bool outParam = param->Out();\
			if (!first) out << " && ";\
			first = false;\
			if (inParam)\
			{\
				out << "std::derived_from<";\
				printIdentifier(param->Identifier());\
				out << ", Other__";\
				printIdentifier(param->Identifier());\
				out << ">";\
			}\
			else if (outParam)\
			{\
				isCovariant = true;\
				out << "std::derived_from<Other__";\
				printIdentifier(param->Identifier());\
				out << ", ";\
				printIdentifier(param->Identifier());\
				out << ">";\
			}\
			else\
			{\
				out << "std::same_as<Other__";\
				printIdentifier(param->Identifier());\
				out << ", ";\
				printIdentifier(param->Identifier());\
				out << ">";\
			}\
		}
		CTOR_TEMPLATE_PARAMS;
		out << " " << type->id << "(const " << type->id << "<";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { CppAdvance::Retain(_obj); }\n" << std::string(depth, '\t');
		
		CTOR_TEMPLATE_PARAMS;
		out << " " << type->id << " & operator=(const " << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">& other) { if (_obj) CppAdvance::Release(_obj); _obj = other._obj; \n" << std::string(depth,'\t');
		out << "_vtable = reinterpret_cast<const __vtable*>(other._vtable); CppAdvance::Retain(_obj); return *this; }\n" << std::string(depth, '\t');
		
		CTOR_TEMPLATE_PARAMS;
		out << " && std::is_rvalue_reference_v<" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&&> " << type->id << "(" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }\n" << std::string(depth, '\t');

		CTOR_TEMPLATE_PARAMS;
		out << " && std::is_rvalue_reference_v<" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&&> " << type->id << " & operator=(" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&& other) { if (_obj) CppAdvance::Release(_obj); _obj = other._obj; \n" << std::string(depth, '\t');
		out << "_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }\n" << std::string(depth, '\t');
	}
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>\n" << std::string(depth,'\t');
	out << type->id << "(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "CppAdvance::Retain(_obj);\n" << std::string(--depth, '\t')<< "}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>\n" << std::string(depth, '\t');
	out << type->id << "(__AnyType&& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>\n" << std::string(depth, '\t');
	out << type->id << "& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } \n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>\n" << std::string(depth, '\t');
	out << type->id << "& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); return *this; } \n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> " << type->id << "(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "static_assert(__ImplementsInterface_" << type->id << "<std::decay_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">,\"Cannot initialize interface " << type->id << " from this type\");\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_" << type->id << "_for<typename __AnyType::__type";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">; }\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');

	out << "public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> " << type->id << "(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "static_assert(__ImplementsInterface_" << type->id << "<std::decay_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">,\"Cannot initialize interface " << type->id << " from this type\");\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_" << type->id << "_for<typename __AnyType::__type";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">; }\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');

	out << "public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> " << type->id << "(__AnyType&& value) : ___super((CppAdvance::Object*)&value), _vtable{ &__vtable_" << type->id << "_for<__FixedType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << "> } { static_assert(__ImplementsInterface_"
		<< type->id << "<__FixedType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">, \"Cannot initialize interface " << type->id << " from this type\"); CppAdvance::Retain(_obj); }\n" << std::string(depth, '\t');

	out << "public: template<class __AnyType> " << type->id << "& operator=(const __AnyType& value) {\n" << std::string(++depth, '\t');
	out << "static_assert(__ImplementsInterface_" << type->id << "<std::decay_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">,\"Cannot initialize interface " << type->id << " from this type\");\n" << std::string(depth, '\t');
	out << "if (_obj) CppAdvance::Release(_obj);\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_" << type->id << "_for<typename __AnyType::__type";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">; } return *this;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> " << type->id << "& operator=(__AnyType&& value) {\n" << std::string(++depth, '\t');
	out << "static_assert(__ImplementsInterface_" << type->id << "<std::decay_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">,\"Cannot initialize interface " << type->id << " from this type\");\n" << std::string(depth, '\t');
	out << "if (_obj) CppAdvance::Release(_obj);\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_" << type->id << "_for<typename __AnyType::__type";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">; } return *this;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');

	out << "public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> " << type->id << "& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_"
		<< type->id << "<__FixedType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">, \"Cannot initialize interface " << type->id << " from this type\"); \n " << std::string(depth, '\t') << "if (_obj) CppAdvance::Release(_obj); _obj = (CppAdvance::Object*)&value; CppAdvance::Retain(_obj); \n"
		<< std::string(depth, '\t') << "_vtable = &__vtable_"
		<< type->id << "_for<__FixedType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">; return *this; }\n" << std::string(depth, '\t');
	//method default implementations and static methods
	for (const auto& constant : type->constants)
	{
		out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (constant.templateParams) {
			isFunctionDeclaration = true;
			printTemplateParams(constant.templateParams);
			isFunctionDeclaration = false;
			out << " ";
		}
		out << "static constexpr ";
		bool isArray = false;
		if (constant.type)
		{
			isDeclaration = true;
			printTypeId(constant.type);
			isDeclaration = false;
			//isArray = constant.type->arrayDeclarator();
			currentType = constant.type->getText();
		}
		else
		{
			out << "auto";
		}
		out << " " << constant.id << " = ";
		currentDeclarationName = constant.id;
		printInitializerClause(constant.initializer);
		out << ";" << std::endl << std::string(depth, '\t');
		currentDeclarationName.clear();
	}
	for (const auto& alias : type->typeAliases)
	{
		out << "#line " << alias.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (alias.templateParams)
		{
			isFunctionDeclaration = true;
			printTemplateParams(alias.templateParams);
			isFunctionDeclaration = false;
			out << " ";
		}
		out << "using " << alias.id << (isUnsafe ? " [[clang::annotate(\"unsafe\")]]" : "") << " = ";
		printTypeId(alias.type);
		out << ";" << std::endl << std::string(depth, '\t');
	}
	for (const auto& method : type->methods)
	{
		if (method.isStatic)
		{
			out << "#line " << method.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "public: ";
			if (method.attributes)
			{
				for (auto attr : method.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}
			out << "static ";

			if (method.returnType)
			{
				if (method.isConstReturn || !method.isRefReturn) out << "const ";
				printTypeId(method.returnType);
			}
			else if (method.expression)
			{
				out << "decltype(auto)";
			}
			else
			{
				out << "void";
			}
			if (method.isRefReturn) out << "&";
			out << " " << method.id << "(";
			first = true;
			if (method.params)
			{
				if (auto params = method.params->paramDeclClause())
				{
					if (!first) out << ", ";
					first = false;
					printParamDeclClause(params);
				}
			}
			out << ") ";
			if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
			out << ";\n" << std::string(depth, '\t');
			continue;
		}
		if (!method.isDefault) continue;
		out << "#line " << method.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "public: ";
		if (method.attributes)
		{
			for (auto attr : method.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
		}

		if (method.returnType)
		{
			if (method.isConstReturn || !method.isRefReturn) out << "const ";
			printTypeId(method.returnType);
		}
		else
		{
			out << "void";
		}
		if (method.isRefReturn) out << "&";
		auto id = "__default_" + method.id;
		out << " " << id << "(";
		first = true;
		if (method.params)
		{
			if (auto params = method.params->paramDeclClause())
			{
				if (!first) out << ", ";
				first = false;
				printParamDeclClause(params);
			}
		}
		out << ") const ";
		if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
		out << ";\n" << std::string(depth, '\t');
	}
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
	//unowned interface reference
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	out << "class ";
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	out << type->id << "__Unowned final : public CppAdvance::InterfaceRef__Unowned {\n" << std::string(++depth, '\t') 
		<< "public: using __self = " << type->id << "__Unowned";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __vtable = __vtables::__vtable_" << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __class = CppAdvance::Object;\n" << std::string(depth, '\t');
	out << "public: using ___super = CppAdvance::InterfaceRef__Unowned;\n" << std::string(depth, '\t');
	out << "private: friend class " << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __strong_ref = " << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __unowned_ref = __self;\n" << std::string(depth, '\t');
	out << "public: using __weak_ref = " << type->id << "__Weak";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }\n" << std::string(depth, '\t');
	out << "private: const __vtable* _vtable;\n" << std::string(depth, '\t');
	out << "ADV_INTERFACE_UNOWNED_COMMON_CTORS(" << type->id << "__Unowned);\n" << std::string(depth, '\t');
	if (type->templateParams)
	{
		out << "public: template<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			if (auto t = param->templateTypename())
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
			else
			{
				out << "class";
			}
			if (param->Ellipsis())
			{
				out << "...";
			};
		}
		out << "> friend class " << type->id << ";\n" << std::string(depth, '\t');

		CTOR_TEMPLATE_PARAMS;
		out << " " << type->id << "__Unowned(const " << type->id << "<";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { CppAdvance::UnownedRetain(_obj); }\n" << std::string(depth, '\t');

		CTOR_TEMPLATE_PARAMS;
		out << " " << type->id << "__Unowned& operator=(const " << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">& other) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = other._obj; \n" << std::string(depth, '\t');
		out << "_vtable = reinterpret_cast<const __vtable*>(other._vtable); CppAdvance::UnownedRetain(_obj); return *this; }\n" << std::string(depth, '\t');

		CTOR_TEMPLATE_PARAMS;
		out << " && std::is_rvalue_reference_v<" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&&> " << type->id << "__Unowned(" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }\n" << std::string(depth, '\t');

		CTOR_TEMPLATE_PARAMS;
		out << " && std::is_rvalue_reference_v<" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&&> " << type->id << "__Unowned& operator=(" << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">&& other) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = other._obj; \n" << std::string(depth, '\t');
		out << "_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }\n" << std::string(depth, '\t');
	}
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>\n" << std::string(depth, '\t');
	out << type->id << "__Unowned(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "CppAdvance::UnownedRetain(_obj);\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>\n" << std::string(depth, '\t');
	out << type->id << "__Unowned& operator=(const __AnyType& value) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } \n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires __ImplementsInterface_" << type->id << "<__AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << "> " << type->id << "__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else static_assert(false,\"Cannot to create unowned reference from this object\");\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires __ImplementsInterface_" << type->id << "<__AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << "> && std::is_rvalue_reference_v<__AnyType&&> " << type->id << "__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj);"
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else static_assert(false,\"Cannot to create unowned reference from this object\");\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires __ImplementsInterface_" << type->id << "<__AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << "> " << type->id << "__Unowned& operator=(const __AnyType& value) {\n" << std::string(++depth, '\t');
	out << "if (_obj) CppAdvance::Release(_obj);\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else static_assert(false,\"Cannot to create unowned reference from this object\"); return *this;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires __ImplementsInterface_" << type->id << "<__AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << "> && std::is_rvalue_reference_v<__AnyType&&> " << type->id << "__Unowned& operator=(__AnyType&& value) {\n" << std::string(++depth, '\t');
	out << "if (_obj) CppAdvance::Release(_obj);\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));\n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else static_assert(false,\"Cannot to create unowned reference from this object\"); return *this;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
	//weak interface reference
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	out << "class ";
	if (isUnsafe) out << "[[clang::annotate(\"unsafe\")]] ";
	out << type->id << "__Weak final : public CppAdvance::ObjectRef__Weak {\n" << std::string(++depth, '\t')
		<< "public: using __self = " << type->id << "__Weak";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __vtable = __vtables::__vtable_" << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __class = CppAdvance::Object;\n" << std::string(depth, '\t');
	out << "public: using ___super = CppAdvance::ObjectRef__Weak;\n" << std::string(depth, '\t');
	out << "private: friend class " << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __strong_ref = " << type->id;
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __unowned_ref = " << type->id << "__Unowned";
	if (type->templateParams)
	{
		out << "<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(param->Identifier());
		}
		out << ">";
	}
	out << ";\n" << std::string(depth, '\t');
	out << "public: using __weak_ref = __self;\n" << std::string(depth, '\t');
	out << "public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(depth, '\t');
	out << "private: const __vtable* _vtable;\n" << std::string(depth, '\t');
	out << "ADV_INTERFACE_WEAK_COMMON_CTORS(" << type->id << "__Weak);\n" << std::string(depth, '\t');
	if (type->templateParams)
	{
		out << "public: template<";
		bool first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			if (auto t = param->templateTypename())
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
			else
			{
				out << "class";
			}
			if (param->Ellipsis())
			{
				out << "...";
			};
		}
		out << "> friend class " << type->id << ";\n" << std::string(depth, '\t');

		CTOR_TEMPLATE_PARAMS;
		out << " " << type->id << "__Weak(const " << type->id << "<";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">& other) : ___super(formWeakRef(other._obj)), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } {}\n" << std::string(depth, '\t');

		CTOR_TEMPLATE_PARAMS;
		out << " " << type->id << "__Weak& operator=(const " << type->id << " < ";
		first = true;
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			out << "Other__";
			printIdentifier(param->Identifier());
			if (param->Ellipsis()) out << "...";
		}
		out << ">& other) { if (!_obj || other._obj != _obj->unsafeGetObject()) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(other._obj); \n" << std::string(depth, '\t');
		out << "_vtable = reinterpret_cast<const __vtable*>(other._vtable); } return *this; }\n" << std::string(depth, '\t');
	}
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>\n" << std::string(depth, '\t');
	out << type->id << "__Weak(const __AnyType& value) : ___super(formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value))), _vtable{ CppAdvance::GetVTableFromInterface(&value) } \n" << std::string(depth, '\t') << "{}\n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>\n" << std::string(depth, '\t');
	out << type->id << "__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } \n" << std::string(depth, '\t');
	out << "public: template<class __AnyType> requires __ImplementsInterface_" << type->id << "<__AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << "> " << type->id << "__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } \n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); \n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else static_assert(false,\"Cannot to create unowned reference from this object\");\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	
	out << "public: template<class __AnyType> requires __ImplementsInterface_" << type->id << "<__AnyType";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << "> " << type->id << "__Weak& operator=(const __AnyType& value) {\n" << std::string(++depth, '\t');
	out << "if (_obj) _obj->decrementWeak();\n" << std::string(depth, '\t');
	out << "if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); "
		<< "if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);\n" << std::string(depth, '\t')
		<< "else static_assert(false, \"Incompatible interfaces\");\n" << std::string(--depth, '\t');
	out << "} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {\n" << std::string(depth++, '\t');
	out << "_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); \n" << std::string(depth, '\t')
		<< "_vtable = &__vtable_" << type->id << "_for<std::remove_cvref_t<__AnyType>";
	if (type->templateParams)
	{
		for (auto param : type->templateParams->templateParamDeclaration())
		{
			out << ", ";
			printIdentifier(param->Identifier());
		}
	}
	out << ">;\n" << std::string(--depth, '\t')
		<< "} else static_assert(false,\"Cannot to create unowned reference from this object\"); return *this;\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
	
	out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
	//interface methods
	for (const auto& method : type->methods)
	{
		if (method.isStatic) continue; 
		bool isUnchecked = false;
		if (method.attributes)
		{
			for (auto attr : method.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else if (attr->getText() == "Unchecked") {
					isUnchecked = true;
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
		}
		out << "template<class __AnyInterface";
		if (type->templateParams && !isCovariant && !method.indexerParams) {
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				out << ", ";
				if (auto t = param->templateTypename())
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
				else
				{
					out << "class";
				}
				if (param->Ellipsis())
				{
					out << "...";
				}
				out << " ";
				printIdentifier(param->Identifier());
			}
		}
		out << "> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> ";
		out << "FORCE_INLINE ";
		
		if (isCovariant) {
			out << "decltype(auto)";
		}
		else {
			if (method.returnType)
			{
				if (method.isConstReturn || !method.isRefReturn) out << "const ";
				printTypeId(method.returnType);
			}
			else
			{
				out << "void";
			}
			if (method.isRefReturn) out << "&";
		}
		auto id = method.id;
		if (method.indexerParams) id = "getAt";
		out << " " << id << "(";
		out << "const __AnyInterface&";
		out << " iface";
		if (method.params)
		{
			if (auto params = method.params->paramDeclClause())
			{
				out << ", ";
				printParamDeclClause(params);
			}
		}
		if (method.indexerParams)
		{
			out << ", ";
			printParamDeclClause(method.indexerParams);
		}
		out << ") ";
		if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);

		if (method.isDefault)
		{
			out << " {\n" << std::string(++depth,'\t');
			out << "auto func = CppAdvance::GetVTableFromInterface(&iface)->fnptr_" << methodIds[&method] << ";\n" << std::string(depth, '\t');
			out << "if (func) { ADV_EXPRESSION_BODY(func";
		}
		else {
			out << " { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_" << methodIds[&method];
		}
		out << "(CppAdvance::GetObjectReferenceFromInterface(&iface)";
		if (method.params)
		{
			if (auto params = method.params->paramDeclClause())
			{
				for (auto param : params->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					printIdentifier(param->Identifier());
				}
			}
		}
		if (auto params = method.indexerParams)
		{
			for (auto param : params->paramDeclList()->paramDeclaration())
			{
				out << ", ";
				printIdentifier(param->Identifier());
			}
		}
		out << ")); ";
		//default method body
		if (method.isDefault)
		{
			out << "}\n" << std::string(depth, '\t');
			out << "else { ADV_EXPRESSION_BODY(reinterpret_cast<const " << type->id;
			if (type->templateParams)
			{
				first = true;
				out << "<";
				if (isCovariant)
				{
					out << "typename __AnyInterface::ElementType";
				}
				else {
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
						if (param->Ellipsis()) out << "...";
					}
				}
				out << ">";
			};
			out << "*>(&iface)->__default_" << method.id << "(";
			if (auto params = method.params->paramDeclClause())
			{
				first = true;
				for (auto param : params->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
			}
			out << ")); }\n" << std::string(--depth, '\t');
		}
		else if (method.indexerParams)
		{
			out << "}\n" << std::string(depth, '\t');
			if (method.indexerSetter)
			{
				//indexer setter
				if (method.attributes)
				{
					for (auto attr : method.attributes->attributeSpecifier())
					{
						auto attrName = attr->Identifier()->getText();
						if (attrName == "Deprecated")
						{
							out << "[[deprecated";
							if (attr->attributeArgumentClause())
								out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
							out << "]] ";
						}
						else if (attrName == "Unused") {
							out << "[[maybe_unused]] ";
						}
						else if (attrName == "NoDiscard") {
							out << "[[nodiscard]] ";
						}
						else if (attrName == "NoReturn") {
							out << "[[noreturn]] ";
						}
						else if (attrName == "ForceInline") {
							out << "FORCE_INLINE ";
						}
						else if (attrName == "NoInline") {
							out << "NOINLINE ";
						}
						else
						{
							printAttributeSpecifier(attr);
							out << " ";
						}
					}
				}
				out << "template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> ";
				out << "FORCE_INLINE void setAt(";
				out << "const __AnyInterface&";
				out << " iface, ";
				if (isUnchecked)
				{
					out << "CppAdvance::UncheckedTag, ";
				}
				printParamDeclClause(method.indexerParams);
				out << ", const ";
				printTypeId(method.returnType);
				out << "& value) ";
				if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);

				out << " { CppAdvance::GetVTableFromInterface(&iface)->fnptr_set" << methodIds[&method];
				out << "(CppAdvance::GetObjectReferenceFromInterface(&iface)";
				if (isUnchecked)
				{
					out << ", CppAdvance::UncheckedTag{}";
				}
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					printIdentifier(param->Identifier());
				}
				out << ", value); }\n" << std::string(depth, '\t');

				//accessor
				out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "template<class __AnyInterface, class __IdxT = ";
				printTypeId(method.returnType);
				if (method.isRefReturn) out << "&";
				out << "> struct __IndexerAccessor_" << method.pos.line << " {\n" << std::string(++depth, '\t') << "private:\n" << std::string(depth, '\t');
				out << "__AnyInterface _parent;\n" << std::string(depth, '\t');
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (auto t = param->theTypeId())
					{
						printTypeId(t);
						out << " _"; printIdentifier(param->Identifier());
						out << ";\n" << std::string(depth, '\t');
					}
				}
				out << "public:\n" << std::string(depth, '\t');
				out << "FORCE_INLINE __IndexerAccessor_" << method.pos.line << "(const __AnyInterface& parent, ";
				printParamDeclClause(method.indexerParams);
				out << ") : _parent(parent)";
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (auto t = param->theTypeId())
					{
						out << ", _"; printIdentifier(param->Identifier()); out << "("; printIdentifier(param->Identifier()); out << ")";
					}
				}
				out << " {}\n" << std::string(depth, '\t');
				out << "template<class _ElemRight> FORCE_INLINE auto& operator=(_ElemRight&& other) { setAt(_parent, ";
				if (isUnchecked)
				{
					out << ", CppAdvance::UncheckedTag{}";
				}
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (auto t = param->theTypeId())
					{
						out << "_"; printIdentifier(param->Identifier()); out << ", ";
					}
				}
				out << "std::forward<_ElemRight>(other)); return *this; }\n" << std::string(depth, '\t');
				INDEXER_WRITE_METHODS;
				auto params = method.indexerParams->paramDeclList()->paramDeclaration();
				if (!method.isConstReturn)
				{
					out << "FORCE_INLINE operator __IdxT() { return ";
					GET_ELEMENT_AT_EXTERNAL;
					out << "; }\n" << std::string(depth, '\t');
					out << "FORCE_INLINE operator const __IdxT() const { return ";
					GET_ELEMENT_AT_EXTERNAL;
					out << "; }\n" << std::string(depth, '\t');
				}
				else
				{
					out << "FORCE_INLINE operator __IdxT() const { return ";
					GET_ELEMENT_AT_EXTERNAL;
					out << "; }\n" << std::string(depth, '\t');
				}
				out << "FORCE_INLINE decltype(auto) __ref() { return "; GET_ELEMENT_AT_EXTERNAL; out << "; }\n" << std::string(depth, '\t');
				out << "FORCE_INLINE decltype(auto) __ref() const { return getAt(_parent, ";
				if (isUnchecked)
				{
					out << ", CppAdvance::UncheckedTag{}";
				}
				for (auto param : params)
				{
					bool first = true;
					if (auto t = param->theTypeId())
					{
						if (!first) out << ", ";
						first = false;
						out << "_"; printIdentifier(param->Identifier());
					}
				}
				out << "); }\n" << std::string(depth, '\t');
				INDEXER_READ_METHODS(method.pos.line);
				out << "\n" << std::string(--depth, '\t') << "};\n\n" << std::string(depth, '\t');
			}

			//indexer API
			if (method.attributes)
			{
				for (auto attr : method.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}
			out << "template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> ";
			out << "FORCE_INLINE decltype(auto) _operator_subscript(";
			out << "const __AnyInterface&";
			out << " iface, ";
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag __tag, ";
			}
			printParamDeclClause(method.indexerParams);
			out << ") ";
			if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);

			if (method.indexerSetter)
			{
				out << "{ return __IndexerAccessor_" << method.pos.line << "<";
				if (type->templateParams)
				{
					out << "std::decay_t<__AnyInterface>";
				}
				else
				{
					out << "std::decay_t<" << type->id << ">";
				}
				out << ">{iface";
				if (isUnchecked)
				{
					out << ", __tag";
				}
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					printIdentifier(param->Identifier());
				}
				out << "}; ";
			}
			else
			{
				out << "{ return getAt(iface";
				if (isUnchecked)
				{
					out << ", __tag";
				}
				for (auto param : method.indexerParams->paramDeclList()->paramDeclaration())
				{
					out << ", ";
					printIdentifier(param->Identifier());
				}
				out << "); ";
			}
		}
		out << "}\n" << std::string(depth, '\t');
	}
	//interface properties
	for (const auto& prop : type->properties)
	{
		//getter
		if (prop.attributes)
		{
			for (auto attr : prop.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
		}
		out << "template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> ";
		out << "FORCE_INLINE ";

		if (isCovariant) {
			out << "decltype(auto)";
		}
		else {
			if (prop.isConst || !prop.isRef) out << "const ";
			printTypeId(prop.type);
			if (prop.isRef) out << "&";
		}
		out << " get" << prop.id << "(";
		out << "const __AnyInterface&";
		out << " iface) { return CppAdvance::GetVTableFromInterface(&iface)->fnptr_get" << prop.id
			<< "(CppAdvance::GetObjectReferenceFromInterface(&iface)); }\n" << std::string(depth, '\t');
		if (prop.setter)
		{
			//setter
			out << "template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> ";
			out << "FORCE_INLINE void set" << prop.id << "(";
			out << "const __AnyInterface&";
			out << " iface, const ";
			printTypeId(prop.type);
			out << "& value) { CppAdvance::GetVTableFromInterface(&iface)->fnptr_set" << prop.id
				<< "(CppAdvance::GetObjectReferenceFromInterface(&iface), value); }\n" << std::string(depth, '\t');

			//accessor
			out << "ADV_EXTENSION_PROPERTY_GETTER_SETTER(" << type->id << "_" << prop.id << ", get" << prop.id << ", set" << prop.id << ", ";
			printTypeId(prop.type);
			out << ")\n" << std::string(depth, '\t');

			//dispatcher function
			out << "template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> ";
			out << "FORCE_INLINE decltype(auto) _get_property_" << prop.id << "(";
			out << "const __AnyInterface&";
			out << " iface) { return __properties::__Property_" << type->id << "_" << prop.id << "<";
			if (type->templateParams)
			{
				out << "__AnyInterface";
			}
			else
			{
				out << type->id;
			}
			out << ">{iface}; }\n" << std::string(depth, '\t');
		}
	}
	if (!type->compilationCondition.empty())
	{
		out << "#endif " << std::endl;
	}
#undef CTOR_TEMPLATE_PARAMS
}

void CppAdvanceCodegen::printExtension(StructDefinition* type) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
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
	out << "using __extension_" << type->pos.line << "_" << type->id << " = ";
	if (type->extensionType)
	{
		printTypeId(type->extensionType);
	}
	else
	{
		out << type->id;
	}

	if (type->templateParams && type->id.find("_tspec_") == std::string::npos)
	{
		auto parent = static_cast<CppAdvanceParser::ExtensionHeadContext*>(type->templateParams->parent);
		if (parent->theTypeId()) {
			out << "<";
			bool first = true;
			for (auto param : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(param->Identifier());
				if (param->Ellipsis()) out << "...";
			}
			out << ">";
		}
	}
	out << ";\n" << std::string(depth, '\t');
	if (type->interfaces)
	{
		if (type->templateParams) {
			printTemplateParams(type->templateParams);
			out << " struct __ExtensionInterfaceChecker_" << type->pos.line << "_" << type->id << " {\n" << std::string(++depth, '\t');
		}
		for (auto iface : type->interfaces->baseSpecifier())
		{
			out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "ADV_CHECK_INTERFACE(" << iface->getText() << ", ";
			if (iface->nestedNameSpecifier())
			{
				printNestedNameSpecifier(iface->nestedNameSpecifier());
			}
			printClassName(iface->className());
			out << ");\n" << std::string(depth, '\t');
		}
		if (type->templateParams) {
			out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
		}
	}

	for (const auto& func : type->methods)
	{
		out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (func.indexerParams)
		{
			bool isInline = func.isInline;
			bool isConstexpr = func.isConstexpr; 
			bool isUnchecked = false;
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else if (attr->getText() == "Unchecked") {
						isUnchecked = true;
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}

			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
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
				if (func.access == AccessSpecifier::Public || func.access == AccessSpecifier::Protected || func.access == AccessSpecifier::Private) out << DLLName << "_API ";
				else out << DLLName << "_HIDDEN ";
			}
			if (!func.isMutating && (func.isConstReturn || !func.isRefReturn)) out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << " getAt(__extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << " ";
			if (!func.isMutating) out << "const";
			out << "& __this ";
			if (!func.isMutating) out << "LIFETIMEBOUND";
			out << ", ";
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(func.indexerParams);
			out << ")";
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << ";\n" << std::string(depth, '\t');
			out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
			}
			isUnsafe = func.isUnsafe;
			if (isUnsafe)
			{
				out << "[[clang::annotate(\"unsafe\")]] ";
			}
			out << "inline ";
			if (!func.isMutating && (func.isConstReturn || !func.isRefReturn)) out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			out << " _operator_subscript(__extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << " ";
			if (!func.isMutating) out << "const";
			out << "& __this ";
			if (!func.isMutating) out << "LIFETIMEBOUND";
			out << ", ";
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(func.indexerParams);
			out << ")";
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " { return getAt(__this";
			if (isUnchecked)
			{
				out << ", CppAdvance::UncheckedTag{}";
			}
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				out << ", ";
				printIdentifier(param->Identifier());
			}
			out << "); }\n" << std::string(depth, '\t');
			continue;
		}
		if (type->templateParams)
		{
			printTemplateParams(type->templateParams);
			out << " ";
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

		if (func.attributes)
		{
			for (auto attr : func.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
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

		if (!type->templateParams && func.isStatic) {
			out << "template<class __TT> requires std::same_as<__TT, __extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << "> ";
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
		else if (!DLLName.empty() && !func.templateParams && !type->templateParams)
		{
			if (func.access == AccessSpecifier::Public || func.access == AccessSpecifier::Protected || func.access == AccessSpecifier::Private) out << DLLName << "_API ";
			else out << DLLName << "_HIDDEN ";
		}

		//bool isRegularMethod = !func.isConstructor;
		out << "auto ";
		if (func.isConstructor) {
			out << "__construct_";
		}
		else if (func.isStatic)
		{
			out << "__static_" << func.id;
		}
		else {
			out << func.id;
			if (func.templateSpecializationArgs) {
				out << "<";
				printTemplateArgumentList(func.templateSpecializationArgs);
				out << ">";
			}
		}
		out << "(";
		if (!func.isConstructor && !func.isStatic) {
			out << "__extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << " ";
			if (!func.isMutating) out << "const";
			out << "& __this ";
			if (!func.isMutating) out << "LIFETIMEBOUND";
		}
		else if (func.isConstructor)
		{
			out << "CppAdvance::ConstructorProxy<__extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams && !type->id.empty())
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << "> __ctordata";
		}
		if (func.params && func.params->paramDeclClause())
		{
			if (!func.isStatic) out << ", ";
			printParamDeclClause(func.params->paramDeclClause());
		}
		out << ")";
		isVariadicTemplate = false;
		isFunctionDeclaration = false;
		out << " ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		out << " -> ";
		if (func.returnType || func.isConstructor)
		{
			if (!func.isMutating && (!func.isRefReturn || func.isConstReturn)) out << "const ";
			if (func.isConstructor)
			{
				out << "decltype(auto)";
			}
			else if (func.returnType->getText() == "self")
			{
				out << "typename __extension_" << type->pos.line << "_" << type->id;
				if (type->templateParams && !type->id.empty())
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				if (type->kind == TypeKind::Class && func.isRefReturn)
				{
					out << "::__class";
				}
			}
			else
			{
				printTypeId(func.returnType);
			}

			if (func.isRefReturn) out << "&";
		}
		else if (func.isForwardReturn)
		{
			out << "decltype(auto)";
		}
		else if (func.expression)
		{
			out << "decltype(auto)";
		}
		else
		{
			out << "void";
		}

		out << ";" << std::endl << std::string(depth, '\t');
		if (func.id == "operator++" || func.id == "operator--")
		{
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
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

			out << "auto " << func.id << "(__extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << " & __this, int) ";
			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> ";
			out << "typename __extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << ";" << std::endl << std::string(depth, '\t');
		}
		else if (func.isCommutative)
		{
			if (func.attributes)
			{
				for (auto attr : func.attributes->attributeSpecifier())
				{
					auto attrName = attr->Identifier()->getText();
					if (attrName == "Deprecated")
					{
						out << "[[deprecated";
						if (attr->attributeArgumentClause())
							out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
						out << "]] ";
					}
					else if (attrName == "Unused") {
						out << "[[maybe_unused]] ";
					}
					else if (attrName == "NoDiscard") {
						out << "[[nodiscard]] ";
					}
					else if (attrName == "NoReturn") {
						out << "[[noreturn]] ";
					}
					else if (attrName == "ForceInline") {
						out << "FORCE_INLINE ";
					}
					else if (attrName == "NoInline") {
						out << "NOINLINE ";
					}
					else
					{
						printAttributeSpecifier(attr);
						out << " ";
					}
				}
			}

			isFunctionDeclaration = true;
			if (func.templateParams) {
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
			else
			{
				out << "inline ";
			}

			out << "auto " << func.id;
			if (!func.params->paramDeclClause())
			{
				if (func.id.starts_with("_operator_"))
					out << "_postfix(__extension_" << type->pos.line << "_" << type->id;
				if (type->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				out << " & __this) ";
			}
			else
			{
				out << "(";
				printParamDeclClause(func.params->paramDeclClause());
				out << ", const __extension_" << type->pos.line << "_" << type->id;
				if (type->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				out << " & __this) ";
			}

			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> decltype(auto);" << std::endl << std::string(depth, '\t');
		}
	}

	for (const auto& prop : type->properties)
	{
		out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		
		if (prop.attributes)
		{
			for (auto attr : prop.attributes->attributeSpecifier())
			{
				auto attrName = attr->Identifier()->getText();
				if (attrName == "Deprecated")
				{
					out << "[[deprecated";
					if (attr->attributeArgumentClause())
						out << "(" << attr->attributeArgumentClause()->expressionList()->getText() << ")";
					out << "]] ";
				}
				else if (attrName == "Unused") {
					out << "[[maybe_unused]] ";
				}
				else if (attrName == "NoDiscard") {
					out << "[[nodiscard]] ";
				}
				else if (attrName == "NoReturn") {
					out << "[[noreturn]] ";
				}
				else if (attrName == "ForceInline") {
					out << "FORCE_INLINE ";
				}
				else if (attrName == "NoInline") {
					out << "NOINLINE ";
				}
				else
				{
					printAttributeSpecifier(attr);
					out << " ";
				}
			}
		}
		if (type->templateParams)
		{
			printTemplateParams(type->templateParams);
			out << " ";
		}
		if (!type->templateParams && prop.isStatic) {
			out << "template<class __TT> requires std::same_as<__TT, __extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << "> ";
		}
		isUnsafe = prop.isUnsafe;
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
			if (prop.access == AccessSpecifier::Public || prop.access == AccessSpecifier::Protected || prop.access == AccessSpecifier::Private) out << DLLName << "_API ";
			else out << DLLName << "_HIDDEN ";
		}

		out << "auto ";
		if (prop.isStatic) out << "__static_";
		out << "get" << prop.id << "(";
		if (!prop.isStatic) {
			out << "__extension_" << type->pos.line << "_" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			out << " const& __this ";
			if (prop.isRef) out << "LIFETIMEBOUND";
		}
		out << ")";
		isVariadicTemplate = false;
		isFunctionDeclaration = false;
		out << " -> ";
		if (!prop.isRef || prop.isConst) out << "const ";
		printTypeId(prop.type);
		if (prop.isRef) out << "&";
		out << ";" << std::endl << std::string(depth, '\t');
	}

	if (!type->templateParams && !type->templateSpecializationArgs && type->interfaces)
	{
		for (auto iface : type->interfaces->baseSpecifier()) {
			out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			out << "ADV_CHECK_INTERFACE_IMPLEMENTATION(" << type->id << ", ";
			auto name = iface->className()->Identifier();
			auto tid = iface->className()->simpleTemplateId();
			if (tid) name = tid->templateName()->Identifier();
			printIdentifier(name);
			out << ", ";
			printBaseSpecifier(iface);
			out << ", " << type->id;
			out << ");\n" << std::string(depth, '\t');
		}
	}

	if (!type->compilationCondition.empty())
	{
		out << "#endif " << std::endl;
	}
}

void CppAdvanceCodegen::printEnumClassData(StructDefinition* type) const
{
	for (const auto& nested : type->nestedStructs)
	{
		printEnumClassData(nested.get());
	}
	if (type->kind != TypeKind::EnumClass) return;
	std::string parentType;
	for (const auto& constant : type->constants)
	{
		if (constant.type) continue;

		if (parentType.empty()) {
			parentType = constant.parentType;
			StringReplace(parentType, ".", "::");
		}
		out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n";
		out << "const " << parentType << "::__self " << parentType << "::" << constant.id << " = ";
		out << parentType << "::__self{ new (::operator new(sizeof(" << parentType << "))) "
			<< parentType << "(";
		printExpressionList(constant.expressionList);
		out << ") };";
		out << "\n" << std::string(depth, '\t');
		out << "#line " << constant.pos.line << " \"" << filename << ".adv\"\n";
		out << parentType << "::__self::__Property_" << constant.id << "<> "
			<< parentType << "::__self::" << constant.id << ";\n" << std::string(depth, '\t');
	}

	out << "#line " << type->pos.line << " \"" << filename << ".adv\"\n";
	out << "const " << parentType << "::__self " << parentType << "::__values[] = { ";
	bool first = true;
	for (const auto& constant : type->constants)
	{
		if (constant.type) continue;
		if (!first) out << ", ";
		first = false;

		out << constant.id;
	}
	out << " };\n" << std::string(depth, '\t');
}

void CppAdvanceCodegen::printTypeDefinitions() const
{
	out.switchTo(true);
	if (!sema.namedTuples.empty() || !sema.globalStructs.empty())
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
		enumValues.clear();
		isNested = false;
		if (type->kind == TypeKind::Class || type->kind == TypeKind::EnumClass)
		{
			printClassRef(type.get());
		}
		else if (type->kind == TypeKind::Interface)
		{
			printInterface(type.get());
		}
		else if (type->kind == TypeKind::Extension)
		{
			printExtension(type.get());
		}
		else
		{
			printType(type.get());
		}
		
		if (!type->compilationCondition.empty())
		{
			out << "#if " << type->compilationCondition << std::endl;
		}
		lastEnumValue.clear();
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
			if (constant.initializer) {
				printInitializerClause(constant.initializer);
			}
			else if (constant.expression) {
				if (type->enumBase)
				{
					printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
				}
				else
				{
					out << "CppAdvance::i32";
				}
				out << "(";
				printConstantExpression(constant.expression);
				out << ")";
			} 
			else if (lastEnumValue.empty()) {
				if (type->isAbstract) // flags
				{
					if (type->enumBase)
					{
						printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
						out << "(1)";
					}
					else out << "1";
				} 
				else if (type->enumBase)
				{
					printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
					out << "()";
				}
				else out << "0";
			}
			else if (type->isAbstract) // flags
			{
				if (type->enumBase)
				{
					printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
				}
				else
				{
					out << "CppAdvance::i32";
				}
				out << "(";
				out << "CppAdvance::i64(" << lastEnumValue << ".__value) << 1 ? CppAdvance::i64(" << lastEnumValue << ".__value) << 1 : 1";
				out << ")";
			}
			else
			{
				if (type->enumBase)
				{
					printSimpleTypeSpecifier(type->enumBase->simpleTypeSpecifier());
				}
				else
				{
					out << "CppAdvance::i32";
				}
				out << "(";
				out << "CppAdvance::i64(" << lastEnumValue << ".__value) + 1";
				out << ")";
			}
			out << ";" << std::endl << std::string(depth, '\t');
			lastEnumValue = constant.id;
			if (!constant.compilationCondition.empty())
			{
				out << "#endif " << std::endl << std::string(depth, '\t');
			}
			currentDeclarationName.clear();
		}
		std::set<std::string> enums;
		for (const auto& [originName, values] : enumValues)
		{
			auto name = originName;
			StringReplace(name, ".", "::");
			enums.insert(name);
			out << "inline constexpr " << name << " " << name << "::" << "__values[] = {";
			bool first = true;
			for (const auto& constant : values)
			{
				if (!first) out << ", ";
				first = false;
				out << constant;
			}
			out << "};\n" << std::string(depth, '\t');
			out << "inline constexpr std::span<const " << name << "> " << name << "::" << "GetValues() noexcept { return __values; }\n"
				<< std::string(depth, '\t');
		}
		for (const auto& eenum : enums)
		{
			auto name = eenum;
			StringReplace(name, "::", "__");
			out << "#define ADV_USING_ENUM_" << name << " \\\n" << std::string(depth,'\t');
			for (const auto& constant : enumValues[eenum])
			{
				out << "constexpr auto " << constant << " = " << eenum << "::" << constant << ";\\\n" << std::string(depth, '\t');
			}
			out << "\n" << std::string(depth, '\t');
		}
		if (!type->compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}

		if (type->access == AccessSpecifier::Protected || type->isUnsafe) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl << std::string(depth,'\t');
		if (currentTupleSize > 0)
		{
			out << "namespace std {\n" << std::string(++depth, '\t');
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
			}
			else
			{
				out << "template<>";
			}
			out << " struct tuple_size<" << type->id;
			if (type->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << ">";
			}
			else if (type->templateSpecializationArgs)
			{
				out << "<";
				bool first = true;
				for (auto param : type->templateSpecializationArgs->templateArgument())
				{
					if (!first) out << ", ";
					first = false;
					printTemplateArgument(param);
				}
				out << ">";
			}
			out << "> : integral_constant<size_t, " << currentTupleSize << "> {}; \n" << std::string(depth, '\t');
			int i = 0;
			for (const auto& field : type->fields) {
				if (field.isStatic || field.isThreadLocal || field.access != AccessSpecifier::Public) continue;
				if (type->templateParams)
				{
					printTemplateParams(type->templateParams);
				}
				else
				{
					out << "template<>";
				}
				out << " struct tuple_element<" << i++ << ", " << type->id;
				if (type->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				else if (type->templateSpecializationArgs)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateSpecializationArgs->templateArgument())
					{
						if (!first) out << ", ";
						first = false;
						printTemplateArgument(param);
					}
					out << ">";
				}
				out << "> { using type = ";
				printTypeId(field.type);
				out << "; };\n" << std::string(depth, '\t');
			}

			for (const auto& prop : type->properties) {
				if (!prop.setter || !sema.propertiesNeedField.contains(prop.setter) || prop.isStatic
					|| prop.access != AccessSpecifier::Public) continue;
				if (type->templateParams)
				{
					printTemplateParams(type->templateParams);
				}
				else
				{
					out << "template<>";
				}
				out << " struct tuple_element<" << i++ << ", " << type->id;
				if (type->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				else if (type->templateSpecializationArgs)
				{
					out << "<";
					bool first = true;
					for (auto param : type->templateSpecializationArgs->templateArgument())
					{
						if (!first) out << ", ";
						first = false;
						printTemplateArgument(param);
					}
					out << ">";
				}
				out << "> { using type = ";
				printTypeId(prop.type);
				out << "; };\n" << std::string(depth, '\t');
			}
			out << "\n" << std::string(--depth, '\t') << "}\n" << std::string(depth, '\t');
		}
		sema.symbolContexts.pop();
	}
	for (const auto& type : sema.globalStructs)
	{
		if (type->kind == TypeKind::RefStruct || type->kind == TypeKind::StaticClass 
			|| type->kind == TypeKind::Interface || type->kind == TypeKind::Extension) continue;
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
		if (type->kind == TypeKind::Struct || type->kind == TypeKind::Enum || type->kind == TypeKind::Struct
			|| type->kind == TypeKind::Union || type->kind == TypeKind::UnionStruct)
		{
			printStructWrapper(type.get());
		}
		else if (type->kind == TypeKind::Class || type->kind == TypeKind::EnumClass)
		{
			printType(type.get());
		}
		
		if (type->access == AccessSpecifier::Protected || type->isUnsafe) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
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
        out << "struct " << tuple.id << " final : public CppAdvance::Struct { \n" << std::string(++depth, '\t');
		out << "using __class = CppAdvance::__Class_Basic<" << tuple.id << ">;";
		for (const auto& [field,type] : tuple.fields)
		{
			out << "\n" << std::string(depth, '\t');
			printTypeId(type);
			out << " " << field << ";";
		}
		out << "\n" << std::string(depth, '\t') << tuple.id << "() = default;";
		out << "\n" << std::string(depth, '\t') << tuple.id << "(";
		bool first = true;
		for (const auto& [field, type] : tuple.fields)
		{
			if (!first) out << ", ";
			first = false;
			out << "CppAdvance::In<";
			printTypeId(type);
			out << "> _" << field;
		}
		out << ") : ";
		first = true;
		for (const auto& [field, type] : tuple.fields)
		{
			if (!first) out << ", ";
			first = false;
			out << field << "{_" << field << "}";
		}
		out << " {}";
		out << "\n" << std::string(depth, '\t') << "FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }";
		out << "\n" << std::string(depth, '\t') << "FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }";
		auto fullName = id;
		StringReplace(fullName, ".", "::");
		out << "\n" << std::string(depth, '\t');
		out << "template <size_t I> friend auto& get(" << fullName << "&);\n" << std::string(depth, '\t');
		out << "template <size_t I> friend const auto& get(const " << fullName << "&);\n" << std::string(depth, '\t');
		out << "\n" << std::string(--depth, '\t') << "};\n" << std::string(depth, '\t');
		int i = 0;
		for (const auto& [field, type] : tuple.fields) {
			out << "template <> inline auto& get<" << i << ">(" << fullName << "& t) { return t." << field << "; }\n" << std::string(depth, '\t');
			out << "template <> inline const auto& get<" << i++ << ">(const " << fullName << "& t) { return t." << field << "; }\n" << std::string(depth, '\t');
		}
		out << "\n" << std::string(--depth, '\t') << "}";
		if (tuple.access == AccessSpecifier::Protected) out << " } ";
		out << std::endl;
		out << "namespace std {\n" << std::string(++depth, '\t');
		out << "template <> struct tuple_size<" << fullName << "> : integral_constant<size_t, " << tuple.fields.size() << "> {};\n" << std::string(depth, '\t');

		i = 0;
		for (const auto& [field, type] : tuple.fields) {
			out << "template <> struct tuple_element<" << i++ << ", " << fullName << "> { using type = ";
			printTypeId(type);
			out << "; };\n" << std::string(depth, '\t');
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

void CppAdvanceCodegen::printRefStructCheck(CppAdvanceParser::TheTypeIdContext* type) const
{
	out << " ADV_CHECK_REF_STRUCT(";
	auto t = type->getText();
	StringReplace(t, "\"", "\\\"");
	out << "\"" << t << "\", ";
	printTypeId(type);
	out << ")";
}

void CppAdvanceCodegen::printSpecialFunctionDefinitions() const
{
	for (const auto& type : sema.globalStructs)
	{
		if (type->kind == TypeKind::Interface)
		{
			bool first = true;
			for (const auto& method : type->methods)
			{
				if (!method.isDefault && !method.isStatic) continue;
				if (first)
				{
					if (type->access != AccessSpecifier::Private) {
						out.switchTo(true);
						emptyLine = true;
					}
					else
					{
						out.switchTo(false);
					}
					if (!type->compilationCondition.empty())
					{
						out << "#if " << type->compilationCondition << std::endl;
					}
					if (type->access == AccessSpecifier::Protected) {
						out << "namespace __" << filename << "_Protected" << (type->isUnsafe ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
					}
					else if (type->isUnsafe)
					{
						out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
					}
				}
				first = false;
				if (type->templateParams)
				{
					printTemplateParams(type->templateParams);
					out << " "; 
				}
				out << "inline ";

				if (method.returnType)
				{
					if (method.isConstReturn || !method.isRefReturn) out << "const ";
					printTypeId(method.returnType);
				}
				else if (method.isStatic)
				{
					out << "decltype(auto)";
				}
				else
				{
					out << "void";
				}
				if (method.isRefReturn) out << "&";
				out << " " << type->id;
				bool first = true;
				if (type->templateParams)
				{
					out << "<";
					for (auto param : type->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
					out << ">";
				}
				auto id = method.id;
				if (!method.isStatic) id = "__default_" + id;
				out << "::" << id << "(";
				first = true;
				if (method.params)
				{
					if (auto params = method.params->paramDeclClause())
					{
						if (!first) out << ", ";
						first = false;
						printParamDeclClause(params);
					}
				}
				out << ") ";
				if (!method.isStatic) out << "const ";
				if (method.exceptionSpecification) printExceptionSpecification(method.exceptionSpecification);
				auto func = static_cast<CppAdvanceParser::FunctionDefinitionContext*>(method.params->parent);
				if (func->functionBody())
				{
					functionProlog = true;
					printFunctionBody(func->functionBody());
				}
				else if (func->shortFunctionBody())
				{
					printShortFunctionBody(func->shortFunctionBody());
				}
				out << "\n" << std::string(depth, '\t');
			}
			
		}
		else if (type->kind == TypeKind::Extension)
		{
			isExtension = true;
			currentType = type->id;
			currentTemplateParams = nullptr;
			if (type->templateParams)
			{
				auto parent = static_cast<CppAdvanceParser::ExtensionHeadContext*>(type->templateParams->parent);
				if(parent->theTypeId())
					currentTemplateParams = type->templateParams;
			}
			
			currentTemplateSpecArgs = type->templateSpecializationArgs;
			for (const auto& func : type->methods)
			{
				if (type->access != AccessSpecifier::Private && (type->templateParams || func.isInline)) {
					out.switchTo(true);
					emptyLine = true;
				}
				else
				{
					out.switchTo(false);
				}
				if (!type->compilationCondition.empty())
				{
					out << "#if " << type->compilationCondition << std::endl;
				}
				if (type->access == AccessSpecifier::Protected) {
					out << "namespace __" << filename << "_Protected" << (type->isUnsafe ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
				}
				else if (type->isUnsafe)
				{
					out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
				}
				out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				if (func.indexerParams)
				{
					bool isInline = func.isInline;
					bool isConstexpr = func.isConstexpr; 
					bool isUnchecked = false;
					if (func.attributes) for (auto attr : func.attributes->attributeSpecifier())
					{
						auto attrName = attr->Identifier()->getText();
						if (attrName == "Unchecked") isUnchecked = true;
					}

					if (type->templateParams)
					{
						printTemplateParams(type->templateParams);
						out << " ";
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
					if (!func.isMutating && (func.isConstReturn || !func.isRefReturn)) out << "const ";
					printTypeId(func.returnType);
					if (func.isRefReturn) out << "&";
					out << " getAt(__extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams)
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << " ";
					if (!func.isMutating) out << "const";
					out << "& __this ";
					if (!func.isMutating) out << "LIFETIMEBOUND";
					out << ", ";
					printParamDeclClause(func.indexerParams);
					out << ")";
					if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
					auto parent = static_cast<CppAdvanceParser::IndexerContext*>(func.indexerParams->parent);
					if (parent->functionBody())
					{
						functionProlog = true;
						printFunctionBody(parent->functionBody());
					}
					else if (parent->shortFunctionBody())
					{
						printShortFunctionBody(parent->shortFunctionBody());
					}
					out << "\n" << std::string(depth, '\t');
					continue;
				}
				if (type->templateParams)
				{
					printTemplateParams(type->templateParams);
					out << " ";
				}
				isUnsafe = func.isUnsafe;
				if (isUnsafe)
				{
					out << "[[clang::annotate(\"unsafe\")]] ";
				}

				if (func.templateParams) {
					printTemplateParams(func.templateParams);
					out << " ";
				}
				else if (func.templateSpecializationArgs)
				{
					out << "template<> ";
				}

				if (!type->templateParams && func.isStatic) {
					out << "template<class __TT> requires std::same_as<__TT, __extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams)
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << "> ";
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

				//bool isRegularMethod = !func.isConstructor;
				out << "auto ";
				if (func.isConstructor) {
					out << "__construct_";
				}
				else if (func.isStatic) {
					out << "__static_" << func.id;
				}
				else {
					out << func.id;
					if (func.templateSpecializationArgs) {
						out << "<";
						printTemplateArgumentList(func.templateSpecializationArgs);
						out << ">";
					}
				}
				out << "(";
				if (!func.isConstructor && !func.isStatic) {
					out << "__extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams)
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << " ";
					if (!func.isMutating) out << "const";
					out << "& __this ";
					if (!func.isMutating) out << "LIFETIMEBOUND";
				}
				else if (func.isConstructor)
				{
					out << "CppAdvance::ConstructorProxy<__extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams && !type->id.empty())
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << "> __ctordata";
				}
				if (func.params && func.params->paramDeclClause())
				{
					if (!func.isStatic) out << ", ";
					printParamDeclClause(func.params->paramDeclClause());
				}
				out << ")";
				isVariadicTemplate = false;
				isFunctionDeclaration = false;
				out << " ";
				if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
				out << " -> ";
				if (func.returnType || func.isConstructor)
				{
					if (!func.isMutating && (!func.isRefReturn || func.isConstReturn)) out << "const ";
					if (func.isConstructor)
					{
						out << "decltype(auto)";
					}
					else if (func.returnType->getText() == "self")
					{
						out << "typename __extension_" << type->pos.line << "_" << type->id;
						if (type->templateParams)
						{
							out << "<";
							bool first = true;
							for (auto param : type->templateParams->templateParamDeclaration())
							{
								if (!first) out << ", ";
								first = false;
								printIdentifier(param->Identifier());
							}
							out << ">";
						}
						if (type->kind == TypeKind::Class && func.isRefReturn)
						{
							out << "::__class";
						}
					}
					else
					{
						printTypeId(func.returnType);
					}

					if (func.isRefReturn) out << "&";
				}
				else if (func.isForwardReturn)
				{
					out << "decltype(auto)";
				}
				else if (func.expression)
				{
					out << "decltype(auto)";
				}
				else
				{
					out << "void";
				}

				auto parent = static_cast<CppAdvanceParser::FunctionDefinitionContext*>(func.params->parent);
				if (parent->functionBody())
				{
					functionProlog = true;
					printFunctionBody(parent->functionBody());
				}
				else if (parent->shortFunctionBody())
				{
					printShortFunctionBody(parent->shortFunctionBody());
				}
				else if (auto constructor = dynamic_cast<CppAdvanceParser::ConstructorContext*>(func.params->parent))
				{
					printConstructorBody(constructor->constructorBody());
				}
				out << std::endl << std::string(depth, '\t');
				if (func.id == "operator++" || func.id == "operator--")
				{
					if (type->templateParams)
					{
						printTemplateParams(type->templateParams);
						out << " ";
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

					out << "auto " << func.id << "(__extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams)
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << " & __this, int) ";
					isVariadicTemplate = false;
					isFunctionDeclaration = false;
					if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
					out << " -> ";
					out << "typename __extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams)
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << " { auto copy = __this.__ref(); __this.__ref()." << func.id << "(); return copy; }" << std::endl << std::string(depth, '\t');
				}
				else if (func.isCommutative)
				{
					if (type->templateParams)
					{
						printTemplateParams(type->templateParams);
						out << " ";
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

					out << "auto " << func.id;
					if (!func.params->paramDeclClause())
					{
						if (func.id.starts_with("_operator_"))
							out << "_postfix";
						out << "(__extension_" << type->pos.line << "_" << type->id;
						if (type->templateParams)
						{
							out << "<";
							bool first = true;
							for (auto param : type->templateParams->templateParamDeclaration())
							{
								if (!first) out << ", ";
								first = false;
								printIdentifier(param->Identifier());
							}
							out << ">";
						}
						out << " & __this) ";
					}
					else {
						out << "(";
						printParamDeclClause(func.params->paramDeclClause());
						out << ", const __extension_" << type->pos.line << "_" << type->id;
						if (type->templateParams)
						{
							out << "<";
							bool first = true;
							for (auto param : type->templateParams->templateParamDeclaration())
							{
								if (!first) out << ", ";
								first = false;
								printIdentifier(param->Identifier());
							}
							out << ">";
						}
						out << " & __this) ";
					}
					
					isVariadicTemplate = false;
					isFunctionDeclaration = false;
					if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
					out << " -> decltype(auto)";

					if (!func.params->paramDeclClause())
					{
						out << " { auto copy = __this; ADV_UFCS(" << func.id << ")(__this); return copy; }";
					}
					else
					{
						out << " { return ADV_UFCS(" << func.id << ")(__this, ";
						out << func.params->paramDeclClause()->paramDeclList()->paramDeclaration(0)->Identifier()->getText();
						out << "); }";
					}
					
					out << std::endl << std::string(depth, '\t');
				}

				if (type->access == AccessSpecifier::Protected || type->isUnsafe) out << "\n" << std::string(--depth, '\t') << "}";
				out << std::endl;
				if (!type->compilationCondition.empty())
				{
					out << "#endif " << std::endl;
				}
			}

			for (const auto& prop : type->properties)
			{
				out << "#line " << prop.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');

				if (type->templateParams)
				{
					printTemplateParams(type->templateParams);
					out << " ";
				}
				if (!type->templateParams && prop.isStatic) {
					out << "template<class __TT> requires std::same_as<__TT, __extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams)
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << "> ";
				}
				isUnsafe = prop.isUnsafe;
				if (isUnsafe)
				{
					out << "[[clang::annotate(\"unsafe\")]] ";
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
				if (prop.isStatic) out << "__static_";
				out << "get" << prop.id << "(";
				if (!prop.isStatic) {
					out << "__extension_" << type->pos.line << "_" << type->id;
					if (type->templateParams)
					{
						out << "<";
						bool first = true;
						for (auto param : type->templateParams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(param->Identifier());
						}
						out << ">";
					}
					out << " const& __this ";
					if (prop.isRef) out << "LIFETIMEBOUND";
				}
				out << ")";
				isVariadicTemplate = false;
				isFunctionDeclaration = false;
				out << " -> ";
				if (!prop.isRef || prop.isConst) out << "const ";
				printTypeId(prop.type);
				if (prop.isRef) out << "&";
				auto parent = static_cast<CppAdvanceParser::PropertyContext*>(prop.type->parent);
				if (parent->functionBody())
				{
					functionProlog = true;
					printFunctionBody(parent->functionBody());
				}
				else if (parent->shortFunctionBody())
				{
					printShortFunctionBody(parent->shortFunctionBody());
				}
				out << std::endl << std::string(depth, '\t');
			}
			currentTemplateParams = nullptr;
			currentTemplateSpecArgs = nullptr;
			isExtension = false;
		}
		//if (type->kind != TypeKind::Class && type->kind != TypeKind::EnumClass) continue;
		if (type->access != AccessSpecifier::Private) {
			out.switchTo(true);
			emptyLine = true;
		}
		else
		{
			out.switchTo(false);
		}
		if (!type->compilationCondition.empty())
		{
			out << "#if " << type->compilationCondition << std::endl;
		}
		if (type->access == AccessSpecifier::Protected) {
			out << "namespace __" << filename << "_Protected" << (type->isUnsafe ? "__Unsafe" : "") << " {\n" << std::string(++depth, '\t');
		}
		else if (type->isUnsafe)
		{
			out << "namespace __Unsafe { [[clang::annotate(\"unsafe\")]] \n" << std::string(++depth, '\t');
		}

		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		currentType.clear();
		printTypeSpecialFunctionDefinitions(type.get(), nullptr);
		

		if (type->access == AccessSpecifier::Protected || type->isUnsafe) out << "\n" << std::string(--depth, '\t') << "}";
		out << std::endl;
		if (!type->compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
	}
}

void CppAdvanceCodegen::printTypeSpecialFunctionDefinitions(StructDefinition* type, StructDefinition* parent) const
{
	for (const auto& nested : type->nestedStructs)
	{
		printTypeSpecialFunctionDefinitions(nested.get(), type);
	}
	if (type->kind != TypeKind::Class && type->kind != TypeKind::EnumClass) return;
	if (!type->isAbstract && type->isDefaultConstructible && type->kind != TypeKind::EnumClass)
	{
		if (parent) {
			if (parent->templateParams)
			{
				printTemplateParams(parent->templateParams);
				out << " ";
			}
			else if (parent->templateSpecializationArgs)
			{
				out << "template<> ";
			}
		}
		if (type->templateParams)
		{
			printTemplateParams(type->templateParams);
			out << " ";
		}
		else if (type->templateSpecializationArgs)
		{
			out << "template<> ";
		}
		out << "inline ";
		if (parent)
		{
			out << parent->id;
			if (parent->templateSpecializationArgs)
			{
				out << "<";
				printTemplateArgumentList(parent->templateSpecializationArgs);
				out << ">";
			}
			else if (parent->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto tparam : parent->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::";
		}
		out << type->id;
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
			for (auto tparam : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}

		out << "::ADV_CLASS_DEFAULT_CTOR(" << type->id << ")\n" << std::string(depth, '\t');
	}

	if (parent) {
		if (parent->templateParams)
		{
			printTemplateParams(parent->templateParams);
			out << " ";
		}
		else if (parent->templateSpecializationArgs)
		{
			out << "template<> ";
		}
	}
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else if (type->templateSpecializationArgs)
	{
		out << "template<> ";
	}
	out << "inline ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id;
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}

	out << "::ADV_CLASS_STRONG_CTOR_REF(" << type->id << ")\n" << std::string(depth, '\t');

	if (parent) {
		if (parent->templateParams)
		{
			printTemplateParams(parent->templateParams);
			out << " ";
		}
		else if (parent->templateSpecializationArgs)
		{
			out << "template<> ";
		}
	}
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else if (type->templateSpecializationArgs)
	{
		out << "template<> ";
	}
	out << "inline ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id;
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}

	out << "& ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id;
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}
	out << "::ADV_CLASS_STRONG_ASSIGN_REF(" << type->id << ")\n" << std::string(depth, '\t');

	if (parent) {
		if (parent->templateParams)
		{
			printTemplateParams(parent->templateParams);
			out << " ";
		}
		else if (parent->templateSpecializationArgs)
		{
			out << "template<> ";
		}
	}
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else if (type->templateSpecializationArgs)
	{
		out << "template<> ";
	}
	out << "inline ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id << "__Unowned";
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}

	out << "::ADV_CLASS_UNOWNED_CTOR_REF(" << type->id << "__Unowned)\n" << std::string(depth, '\t');

	if (parent) {
		if (parent->templateParams)
		{
			printTemplateParams(parent->templateParams);
			out << " ";
		}
		else if (parent->templateSpecializationArgs)
		{
			out << "template<> ";
		}
	}
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else if (type->templateSpecializationArgs)
	{
		out << "template<> ";
	}
	out << "inline ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id << "__Unowned";
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}

	out << "& ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id << "__Unowned";
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}
	out << "::ADV_CLASS_UNOWNED_ASSIGN_REF(" << type->id << "__Unowned)\n" << std::string(depth, '\t');

	if (parent) {
		if (parent->templateParams)
		{
			printTemplateParams(parent->templateParams);
			out << " ";
		}
		else if (parent->templateSpecializationArgs)
		{
			out << "template<> ";
		}
	}
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else if (type->templateSpecializationArgs)
	{
		out << "template<> ";
	}
	out << "inline ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id << "__Weak";
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}

	out << "::ADV_CLASS_WEAK_CTOR_REF(" << type->id << "__Weak)\n" << std::string(depth, '\t');

	if (parent) {
		if (parent->templateParams)
		{
			printTemplateParams(parent->templateParams);
			out << " ";
		}
		else if (parent->templateSpecializationArgs)
		{
			out << "template<> ";
		}
	}
	if (type->templateParams)
	{
		printTemplateParams(type->templateParams);
		out << " ";
	}
	else if (type->templateSpecializationArgs)
	{
		out << "template<> ";
	}
	out << "inline ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id << "__Weak";
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}

	out << "& ";
	if (parent)
	{
		out << parent->id;
		if (parent->templateSpecializationArgs)
		{
			out << "<";
			printTemplateArgumentList(parent->templateSpecializationArgs);
			out << ">";
		}
		else if (parent->templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : parent->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
	}
	out << type->id << "__Weak";
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
		for (auto tparam : type->templateParams->templateParamDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			printIdentifier(tparam->Identifier());
		}
		out << ">";
	}
	out << "::ADV_CLASS_WEAK_ASSIGN_REF(" << type->id << "__Weak)\n" << std::string(depth, '\t');

	for (const auto& field : type->fields)
	{
		if (!field.isStatic && !field.isThreadLocal) continue;

		if (!field.compilationCondition.empty())
		{
			out << "#if " << field.compilationCondition << std::endl << std::string(depth, '\t');
		}

		if (parent) {
			if (parent->templateParams)
			{
				printTemplateParams(parent->templateParams);
				out << " ";
			}
			else if (parent->templateSpecializationArgs)
			{
				out << "template<> ";
			}
		}
		if (type->templateParams)
		{
			printTemplateParams(type->templateParams);
			out << " ";
		}
		else if (type->templateSpecializationArgs)
		{
			out << "template<> ";
		}
		out << "inline decltype(auto) ";
		if (parent)
		{
			out << parent->id;
			if (parent->templateSpecializationArgs)
			{
				out << "<";
				printTemplateArgumentList(parent->templateSpecializationArgs);
				out << ">";
			}
			else if (parent->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto tparam : parent->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::";
		}
		out << type->id;
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
			for (auto tparam : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::get" << field.id << "() { return __class::" << field.id << "; }\n" << std::string(depth, '\t');
		if (!field.isConst)
		{
			if (parent) {
				if (parent->templateParams)
				{
					printTemplateParams(parent->templateParams);
					out << " ";
				}
				else if (parent->templateSpecializationArgs)
				{
					out << "template<> ";
				}
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
			}
			else if (type->templateSpecializationArgs)
			{
				out << "template<> ";
			}
			out << "inline void ";
			if (parent)
			{
				out << parent->id;
				if (parent->templateSpecializationArgs)
				{
					out << "<";
					printTemplateArgumentList(parent->templateSpecializationArgs);
					out << ">";
				}
				else if (parent->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto tparam : parent->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(tparam->Identifier());
					}
					out << ">";
				}
				out << "::";
			}
			out << type->id;
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
				for (auto tparam : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::set" << field.id << "(const ";
			printTypeId(field.type);
			out << "& value) { __class::" << field.id << " = value; }\n" << std::string(depth, '\t');
		}
		if (!field.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
	}

	if (type->kind == TypeKind::EnumClass)
	{
		for (const auto& constant : type->constants)
		{
			if (constant.type) continue; 
			if (parent) {
				if (parent->templateParams)
				{
					printTemplateParams(parent->templateParams);
					out << " ";
				}
				else if (parent->templateSpecializationArgs)
				{
					out << "template<> ";
				}
			}
			out << "FORCE_INLINE decltype(auto) ";
			if (parent)
			{
				out << parent->id;
				if (parent->templateSpecializationArgs)
				{
					out << "<";
					printTemplateArgumentList(parent->templateSpecializationArgs);
					out << ">";
				}
				else if (parent->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto tparam : parent->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(tparam->Identifier());
					}
					out << ">";
				}
				out << "::";
			}
			out << type->id;
			out << "::get" << constant.id << "() noexcept { return __class::" << constant.id << "; }\n" << std::string(depth, '\t');
		}
		if (parent) {
			if (parent->templateParams)
			{
				printTemplateParams(parent->templateParams);
				out << " ";
			}
			else if (parent->templateSpecializationArgs)
			{
				out << "template<> ";
			}
		}
		out << "FORCE_INLINE decltype(auto) ";
		if (parent)
		{
			out << parent->id;
			if (parent->templateSpecializationArgs)
			{
				out << "<";
				printTemplateArgumentList(parent->templateSpecializationArgs);
				out << ">";
			}
			else if (parent->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto tparam : parent->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::";
		}
		out << type->id;
		out << "::GetValues() noexcept { return __class::GetValues(); }\n" << std::string(depth, '\t');
	}

	for (const auto& func : type->methods)
	{
		if (!func.isStatic && !func.isConverter && !func.id.starts_with("operator") && !func.id.starts_with("_operator")
			&& !(func.isConstructor && func.implicitSpecification)) continue;
		if (!func.compilationCondition.empty())
		{
			out << "#if " << func.compilationCondition << std::endl << std::string(depth, '\t');
		}
		out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');

		isFunctionDeclaration = true;
		if (parent) {
			if (parent->templateParams)
			{
				printTemplateParams(parent->templateParams);
				out << " ";
			}
			else if (parent->templateSpecializationArgs)
			{
				out << "template<> ";
			}
		}
		if (type->templateParams)
		{
			printTemplateParams(type->templateParams);
			out << " ";
		}
		else if (type->templateSpecializationArgs)
		{
			out << "template<> ";
		}
		if (func.templateParams) {
			printTemplateParams(func.templateParams);
			out << " ";
		}
		else if (func.templateSpecializationArgs)
		{
			out << "template<> ";
		}

		out << "inline ";
		if (func.isConstexpr && !func.isConstructor) out << "constexpr ";

		bool isRegularMethod = !func.isConverter && !func.isConstructor;
		if (func.isCommutative)
		{
			if (func.returnType)
			{
				out << "const ";
				printTypeId(func.returnType);
				out << " ";
			}
			else
			{
				out << "decltype(auto) ";
			}
		}
		else if (isRegularMethod) {
			out << "decltype(auto) ";
		}
		if (parent)
		{
			out << parent->id;
			if (parent->templateSpecializationArgs)
			{
				out << "<";
				printTemplateArgumentList(parent->templateSpecializationArgs);
				out << ">";
			}
			else if (parent->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto tparam : parent->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::";
		}
		out << type->id;
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
			for (auto tparam : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
		if (func.isConverter)
		{
			out << "operator ";
			printTypeId(func.returnType);
			if (func.isConstReturn) out << " const&";
			else if (func.isRefReturn) out << " &";
		}
		else if (func.isConstructor)
		{
			out << type->id;
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
		if (!func.isConstructor && !func.isStatic) out << " const ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);

		if (!func.isStatic && func.isRefReturn)
			out << " LIFETIMEBOUND";

		if (func.isConstructor)
		{
			out << " : ___super(new (::operator new(sizeof(__class))) __class(";
			if (auto clause = func.params->paramDeclClause()) {
				bool first = true;
				for (auto param : clause->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
			}
			out << ")) {}";
		}
		else {
			out << "{ ADV_EXPRESSION_BODY(";
			if (func.isStatic)
			{
				out << "__class::";
			}
			else
			{
				out << "__ref().";
			}
			if (func.templateParams) out << "template ";
			if (func.isConverter)
			{
				out << "operator ";
				if (func.isConstReturn) out << "const ";
				printTypeId(func.returnType);
				if (func.isRefReturn) out << "&";
			}
			else
			{
				out << func.id;
			}

			if (func.templateSpecializationArgs)
			{
				out << "<";
				bool first = true;
				for (auto tparam : func.templateSpecializationArgs->templateArgument())
				{
					if (!first) out << ", ";
					first = false;
					printTemplateArgument(tparam);
				}
				out << ">";
			}
			else if (func.templateParams)
			{
				out << "<";
				bool first = true;
				for (auto tparam : func.templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "(";
			if (func.params)
			{
				if (auto clause = func.params->paramDeclClause()) {
					bool first = true;
					for (auto param : clause->paramDeclList()->paramDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(param->Identifier());
					}
				}
			}
			else if (func.indexerParams)
			{
				bool first = true;
				for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
			}
			out << ")); }";
		}
		out << std::endl << std::string(depth, '\t');
		if (func.isConstructor) continue;
		if (func.id == "operator++" || func.id == "operator--")
		{
			if (parent) {
				if (parent->templateParams)
				{
					printTemplateParams(parent->templateParams);
					out << " ";
				}
				else if (parent->templateSpecializationArgs)
				{
					out << "template<> ";
				}
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
			}
			else if (type->templateSpecializationArgs)
			{
				out << "template<> ";
			}

			isFunctionDeclaration = true;
			out << "inline ";
			if (func.isConstexpr) "constexpr ";

			out << "auto ";
			if (parent)
			{
				out << parent->id;
				if (parent->templateSpecializationArgs)
				{
					out << "<";
					printTemplateArgumentList(parent->templateSpecializationArgs);
					out << ">";
				}
				else if (parent->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto tparam : parent->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(tparam->Identifier());
					}
					out << ">";
				}
				out << "::";
			}
			out << type->id;
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
				for (auto tparam : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::";
			out << func.id << "(int) ";
			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> " << type->id << " { return ";
			if (func.isStatic) out << "__class::";
			else out << "__ref().";
			out << func.id << "(1); }" << std::endl << std::string(depth, '\t');
		}
		if (func.isStatic) continue;
		if (parent) {
			if (parent->templateParams)
			{
				printTemplateParams(parent->templateParams);
				out << " ";
			}
			else if (parent->templateSpecializationArgs)
			{
				out << "template<> ";
			}
		}
		if (type->templateParams)
		{
			printTemplateParams(type->templateParams);
			out << " ";
		}
		else if (type->templateSpecializationArgs)
		{
			out << "template<> ";
		}
		if (func.templateParams) {
			printTemplateParams(func.templateParams);
			out << " ";
		}
		else if (func.templateSpecializationArgs)
		{
			out << "template<> ";
		}

		out << "inline ";
		if (func.isConstexpr) "constexpr ";

		isRegularMethod = !func.isConverter;
		if (isRegularMethod) out << "decltype(auto) ";
		if (parent)
		{
			out << parent->id;
			if (parent->templateSpecializationArgs)
			{
				out << "<";
				printTemplateArgumentList(parent->templateSpecializationArgs);
				out << ">";
			}
			else if (parent->templateParams)
			{
				out << "<";
				bool first = true;
				for (auto tparam : parent->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::";
		}
		out << type->id << "__Unowned";
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
			for (auto tparam : type->templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "::";
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
		isIndexer = func.indexerParams;
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
		if (!func.isStatic) out << " const ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);

		if (!func.isStatic && func.isRefReturn)
			out << " LIFETIMEBOUND";

		out << "{ ADV_EXPRESSION_BODY(";
		if (func.isStatic)
		{
			out << "__class::";
		}
		else
		{
			out << "__ref().";
		}
		if (func.templateParams) out << "template ";
		if (func.isConverter)
		{
			out << "operator ";
			if (func.isConstReturn) out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
		}
		else
		{
			out << func.id;
		}

		if (func.templateSpecializationArgs)
		{
			out << "<";
			bool first = true;
			for (auto tparam : func.templateSpecializationArgs->templateArgument())
			{
				if (!first) out << ", ";
				first = false;
				printTemplateArgument(tparam);
			}
			out << ">";
		}
		else if (func.templateParams)
		{
			out << "<";
			bool first = true;
			for (auto tparam : func.templateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(tparam->Identifier());
			}
			out << ">";
		}
		out << "(";
		if (func.params)
		{
			if (auto clause = func.params->paramDeclClause()) {
				bool first = true;
				for (auto param : clause->paramDeclList()->paramDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
			}
		}
		else if (func.indexerParams)
		{
			bool first = true;
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(param->Identifier());
			}
		}
		out << ")); }" << std::endl << std::string(depth, '\t');
		if (func.id == "operator++" || func.id == "operator--")
		{
			if (parent) {
				if (parent->templateParams)
				{
					printTemplateParams(parent->templateParams);
					out << " ";
				}
				else if (parent->templateSpecializationArgs)
				{
					out << "template<> ";
				}
			}
			if (type->templateParams)
			{
				printTemplateParams(type->templateParams);
				out << " ";
			}
			else if (type->templateSpecializationArgs)
			{
				out << "template<> ";
			}

			isFunctionDeclaration = true;
			out << "inline ";
			if (func.isConstexpr) "constexpr ";

			out << "auto ";
			if (parent)
			{
				out << parent->id;
				if (parent->templateSpecializationArgs)
				{
					out << "<";
					printTemplateArgumentList(parent->templateSpecializationArgs);
					out << ">";
				}
				else if (parent->templateParams)
				{
					out << "<";
					bool first = true;
					for (auto tparam : parent->templateParams->templateParamDeclaration())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(tparam->Identifier());
					}
					out << ">";
				}
				out << "::";
			} 
			out << type->id << "__Unowned";
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
				for (auto tparam : type->templateParams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "::";
			out << func.id << "(int) ";
			isVariadicTemplate = false;
			isFunctionDeclaration = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> " << type->id << " { return ";
			if (func.isStatic) out << "__class::";
			else out << "__ref().";
			out << func.id << "(1); }" << std::endl << std::string(depth, '\t');
		}

		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl << std::string(depth, '\t');
		}
		isNewDeleteOperator = false;
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
	printSpecialFunctionDefinitions();
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printDeclarationSeq(CppAdvanceParser::DeclarationSeqContext* ctx) const
{
	for (auto declaration : ctx->declaration())
	{
		emptyLine = false;
		isVolatile = false;
		isUnowned = false;
		isWeak = false;
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
	else if (auto type = ctx->classDefinition())
	{
		printClassDefinition(type);
	}
	else if (auto type = ctx->enumDefinition())
	{
		printEnumDefinition(type);
	}
	else if (auto type = ctx->enumClassDefinition())
	{
		printEnumClassDefinition(type);
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
	else if (auto decl = ctx->unitTestDeclaration())
	{
		printUnitTestDeclaration(decl);
	}
}

void CppAdvanceCodegen::printBlockDeclaration(CppAdvanceParser::BlockDeclarationContext* ctx) const
{
	if (auto decl = ctx->simpleDeclaration())
	{
		printSimpleDeclaration(decl);
	}
	else if (auto decl = ctx->simpleMultiDeclaration())
	{
		printSimpleMultiDeclaration(decl);
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
	else if (auto decl = ctx->assertDeclaration())
	{
		printAssertDeclaration(decl);
	}
	isVolatile = false;
	isUnowned = false;
	isWeak = false;
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
	else if (ctx->Unowned())
	{
		isUnowned = true;
	}
	else if (ctx->Weak())
	{
		isWeak = true;
	}
}

void CppAdvanceCodegen::printExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext* ctx) const
{
	if (!functionBody) out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	out << "extern ";
	isDeclaration = true;
	printTypeId(ctx->theTypeId());
	isDeclaration = false;
	out << " ";
	printIdentifier(ctx->Identifier());
	//if (ctx->theTypeId()->arrayDeclarator()) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
	out << ";";
}

void CppAdvanceCodegen::printExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext* ctx) const
{
	if (!functionBody) out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	out << "extern auto ";
	printIdentifier(ctx->Identifier());
	printFunctionParameters(ctx->functionParams());
	if (ctx->exceptionSpecification()) printExceptionSpecification(ctx->exceptionSpecification());
	out << " -> ";
	auto ret = ctx->returnType();
	if (auto tid = ret->theTypeId())
	{
		if (ret->Const() || !ret->Ref()) out << "const ";
		printTypeId(tid);
	}
	else
	{
		out << "void";
	}
	if (ret->Ref()) out << "&";
	out << ";";
}

std::string GetStackObjectVarName(CppAdvanceParser::TheTypeIdContext* type) {
	return "__obj_" + std::to_string(type->getStart()->getLine()) + "_" + std::to_string(type->getStart()->getCharPositionInLine());
}

std::string GetAnonymousVarName(SourcePosition pos) {
	return "__var_" + std::to_string(pos.line) + "_" + std::to_string(pos.column);
}

void CppAdvanceCodegen::printClassInitializer(CppAdvanceParser::TheTypeIdContext* type, CppAdvanceParser::NewInitializerContext* init) const {
	if (auto expressions = init->expressionList())
	{
		//printExpressionList(expr);
		int paramCount = expressions->expressionListPart().size();
		std::set<std::string> namedArgs;
		for (auto param : expressions->expressionListPart())
		{
			if (auto id = param->Identifier())
			{
				namedArgs.insert(id->getText());
			}
		}
		auto txt = type->getText();
		auto txt2 = txt;
		auto pos = txt.rfind('.');
		if (pos != txt.npos) txt2 = txt.substr(pos + 1);
		pos = txt.rfind('<');
		if (pos != txt.npos) txt = txt.substr(0, pos);
		txt2 = txt + "." + txt2;
		bool params = sema.cppParser.parametersTable.contains(txt2);
		bool printed = false;
		if (!namedArgs.empty() && params)
		{
			std::string signature;
			if (params)
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

				int currentArg = 0;
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

				while (currentArg < paramCount)
				{
					if (currentArg > 0) out << ", ";
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
					++currentArg;
				}
			}
		}
		else
		{
			printExpressionList(init->expressionList());
		}
	}
	else if (auto braced = init->bracedInitList())
	{
		out << "std::initializer_list";
		printBracedInitList(braced);
	}
}

void CppAdvanceCodegen::printStatement(CppAdvanceParser::StatContext* ctx) const
{
	out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	if (sema.parameterPrerequisites.contains(ctx))
	{
		for (const auto&[id, type] : sema.parameterPrerequisites[ctx])
		{
			out << "CppAdvance::DeferredInit<";
			printTypeId(type);
			out << "> " << id << "; ";
		}
		out << "\n" << std::string(depth, '\t') << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	}
	if (sema.stackallocPrerequisites.contains(ctx))
	{
		for (auto expr : sema.stackallocPrerequisites[ctx])
		{
			auto type = expr->theTypeId();
			auto init = expr->newInitializer();
			auto mem = expr->memorySpaceSetter();
			auto varName = GetStackObjectVarName(type);
			out << "#line " << type->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			
			if (mem)
			{
				out << "CppAdvance::StackallocWithExtraMemory<";
				printTypeId(type);
				out << ", unsigned(";
				printConstantExpression(mem->constantExpression());
				out << ")> " << varName << "(";
			}
			else
			{
				out << "CppAdvance::Stackalloc<";
				printTypeId(type);
				out << "> " << varName << "(";			
			}
			if (init)
			{
				printClassInitializer(type, init);
			}
			out << "); CppAdvance::InitStackObject((CppAdvance::Object*)" << varName << ".obj);\n" << std::string(depth, '\t');
		}
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
	}
	if (sema.conditionalPrerequisites.contains(ctx))
	{
		const auto& prerequisites = sema.conditionalPrerequisites[ctx];
		lvalue = true;
		auto last = prerequisites.size() - 1;
		out << "if (";
		for (int i = last; i >= 0; --i)
		{
			if (i < last) out << " && ";
			printPostfixExpression(prerequisites[i]);
		}
		out << ") ";
		lvalue = false;
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
	else if (auto func = ctx->functionDefinition())
	{
		printLocalFunction(func);
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
	else if (ifProlog)
	{
		if (sema.ifPrerequisites.contains(currentIf))
		{
			out << "\n" << std::string(depth, '\t');
			int i = 0;
			for (auto prereq : sema.ifPrerequisites[currentIf])
			{
				auto pattern = prereq->patternList()->pattern(0);
				bool isNull = pattern->shiftExpression() && pattern->shiftExpression()->getText() == "null";
				if (!isNull && pattern->not_() || isNull && !pattern->not_()) continue;
				out << "#line " << prereq->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				if (pattern->Let())
				{
					out << "const auto& [";
					bool first = true;
					for (auto id : pattern->Identifier())
					{
						if (!first) out << ", ";
						first = false;
						printIdentifier(id);
					}
					out << "] = ";
					out << "*__tmp" << i << "; \n" << std::string(depth, '\t');
				}
				else if (pattern->theTypeId() && !pattern->Identifier().empty())
				{
					out << "const auto& ";
					printIdentifier(pattern->Identifier(0));
					out << " = *__tmp" << i;
					out << ";\n" << std::string(depth, '\t');
				}
				else {
					auto txt = prereq->threeWayComparisonExpression()->getText();
					if (std::all_of(txt.begin(), txt.end(), [](char c) { return std::isalnum(c) || c == '_'; }))
					{
						if (isNull)
						{
							out << "auto __tmp" << i << " = *" << txt << "; ";
						}
						out << "const auto& " << txt << " = ";
						if (!isNull) out << "*";
						out << "__tmp" << i;
						out << ";\n" << std::string(depth, '\t');
					}
				}
				++i;
			}
		}
		ifProlog = false;
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
		if (!ctx->stat().empty() && !ctx->stat().back()->jumpStatement()) {
			if (!namedReturns.empty()) {
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
			else if (isMainFunction)
			{
				out << "\n" << std::string(depth, '\t') << "return 0;";
			}
		}
		if (isPropertySetter) out << "\n" << std::string(depth, '\t') << "return *this;";
	}
	if (isUnitTestBody)
	{
		out << "\n" << std::string(depth, '\t') << "return true;";
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
	currentIf = ctx;
	if (ctx->If())
	{
		std::vector<CppAdvanceParser::RelationalExpressionContext*> prerequisites;
		if (sema.ifPrerequisites.contains(ctx))
		{
			prerequisites = sema.ifPrerequisites[ctx];
		}

		int prereqIndex = 0;
		if (!prerequisites.empty())
		{
			out << "{\n" << std::string(++depth,'\t');
			for (auto prereq : prerequisites)
			{
				auto pattern = prereq->patternList()->pattern(0);
				if (pattern->shiftExpression() && pattern->shiftExpression()->getText() == "null") continue;
				out << "#line " << prereq->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "auto __tmp" << prereqIndex++ << " = CppAdvance::Cast<false, ";
				if (pattern->theTypeId())
				{
					printTypeId(pattern->theTypeId());
				}
				else if (pattern->shiftExpression())
				{
					if (!pattern->Let()) out << "decltype(";
					currentIs = prereq;
					printShiftExpression(pattern->shiftExpression());
					currentIs = nullptr;
					if (!pattern->Let()) out << ")";
				}
				else /*if (pattern->Let())*/
				{
					out << "decltype(";
					printThreeWayComparisonExpression(prereq->threeWayComparisonExpression());
					out << ")::__self";
				}
				out << ">(";
				printThreeWayComparisonExpression(prereq->threeWayComparisonExpression());
				out << ");\n" << std::string(depth, '\t');
			}
			out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		}
		out << "if " << (ctx->Static() || ctx->Consteval() ? "constexpr " : "") << "(";
		if (ctx->Consteval()) {
			if (ctx->not_()) out << "!";
			out << "std::is_constant_evaluated()";
		}
		else {
			printCondition(ctx->condition());
		}
		out << ") ";
		if (ctx->attributeSpecifierSeq())
		{
			auto attr = ctx->attributeSpecifierSeq()->attributeSpecifier(0)->Identifier()->getText();
			if (attr == "Likely")
			{
				out << "[[likely]] ";
			}
			else if (attr == "Unlikely")
			{
				out << "[[unlikely]] ";
			}
		}
		if (!currentLabel.empty()) out << "{";
		auto prevLabel = currentLabel;
		currentLabel.clear();
		if (auto block = ctx->compoundStatement())
		{
			ifProlog = true;
			printCompoundStatement(block);
		}
		else
		{
			out << "{" << std::endl << std::string(++depth, '\t');
			if (!prerequisites.empty())
			{
				prereqIndex = 0;
				for (auto prereq : sema.ifPrerequisites[currentIf])
				{
					auto pattern = prereq->patternList()->pattern(0);
                    bool isNull = pattern->shiftExpression() && pattern->shiftExpression()->getText() == "null";
					if (!isNull && pattern->not_() || isNull && !pattern->not_()) continue;
					out << "#line " << prereq->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
					if (pattern->Let())
					{
						out << "const auto& [";
						bool first = true;
						for (auto id : pattern->Identifier())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(id);
						}
						out << "] = ";
						out << "*__tmp" << prereqIndex << "; \n" << std::string(depth, '\t');
					}
					else if (pattern->theTypeId() && !pattern->Identifier().empty())
					{
						out << "const auto& ";
						printIdentifier(pattern->Identifier(0));
						out << " = *__tmp" << prereqIndex;
						out << ";\n" << std::string(depth, '\t');
					}
					else {
						auto txt = prereq->threeWayComparisonExpression()->getText();
						if (std::all_of(txt.begin(), txt.end(), [](char c) { return std::isalnum(c) || c == '_'; }))
						{
							if (isNull)
							{
								out << "auto __tmp" << prereqIndex << " = *" << txt << "; ";
							}
							out << "const auto& " << txt << " = ";
							if (!isNull) out << "*";
							out << "__tmp" << prereqIndex;
							out << ";\n" << std::string(depth, '\t');
						}
					}
					++prereqIndex;
				}
			}
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
		if (!prerequisites.empty())
		{
			out << "\n" << std::string(--depth, '\t') << "}";
		}
	}
	else if (ctx->Switch())
	{
		switchStatements.push(ctx);
		switchProcessedVariants.push({ 0,0 });
		int i = 0;
		for (auto branch : ctx->switchStatementBranch())
		{
			printSwitchStatementBranch(branch, ctx->threeWayComparisonExpression(), i++);
		}
		if (ctx->switchStatementBranch().back()->patternList()->getText() != "_")
		{
			out << " else { using __switchType = decltype(";
			printThreeWayComparisonExpression(ctx->threeWayComparisonExpression());
			out << "); static_assert((!std::derived_from<__switchType, CppAdvance::Enum> &&"
				<< " !std::derived_from<__switchType, CppAdvance::EnumClassRef> && !std::derived_from<__switchType, CppAdvance::Union>) "
				<< "|| CppAdvance::GetVariantsCount<__switchType>() <= " 
				<< switchProcessedVariants.top().first + switchProcessedVariants.top().second << ", "
				<< "\"Switch does not handle all possible variants, add a default branch\"); }";
		}
		out << "\n";
		for (auto branch : ctx->switchStatementBranch())
		{
			out << std::string(--depth,'\t') << "}\n";
		}
		switchProcessedVariants.pop();
		switchStatements.pop();
	}
}

void CppAdvanceCodegen::printSwitchStatementBranch(CppAdvanceParser::SwitchStatementBranchContext* ctx, 
	CppAdvanceParser::ThreeWayComparisonExpressionContext* switchExpr, int branchIndex) const
{
	if (branchIndex > 0) out << "else ";
	out << "{\n" << std::string(++depth, '\t');
	auto tmpName = "__tmp__valid_" + std::to_string(switchExpr->getStart()->getLine());
	auto pattern = ctx->patternList()->pattern(0);
	if (branchIndex == 0)
	{
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "auto " << tmpName << " = CppAdvance::Cast<false, ";
		out << "decltype(";
		printThreeWayComparisonExpression(switchExpr);
		out << ")::__self";
		out << ">(";
		printThreeWayComparisonExpression(switchExpr);
		out << ");\n" << std::string(depth, '\t');
	}

	auto isDefault = ctx->patternList()->getText() == "_";
	if (pattern->theTypeId() && !isDefault || pattern->shiftExpression() && pattern->Let()) {
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		tmpName = "__tmp" + std::to_string(branchIndex);
		out << "auto " << tmpName << " = CppAdvance::Cast<false, ";
		if (pattern->theTypeId())
		{
			printTypeId(pattern->theTypeId());
		}
		else if (pattern->shiftExpression())
		{
			printShiftExpression(pattern->shiftExpression());
		}
		out << ">(";
		printThreeWayComparisonExpression(switchExpr);
		out << ");\n" << std::string(depth, '\t');
	}

	if (!isDefault)
	{
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "if(";
		bool skipFirst = false;
		bool isNull = pattern->shiftExpression() && pattern->shiftExpression()->getText() == "null";
		if (!isNull)
		{
			if (pattern->not_()) out << "!";
			out << tmpName << ".isValid()";
			if (!(pattern->Let() && !pattern->shiftExpression()) && (!pattern->theTypeId() || !pattern->propertyPattern().empty()))
			{
				if (pattern->not_())
				{
					out << " || ";
				}
				else {
					out << " && ";
				}
			}
			else
			{
				skipFirst = true;
			}
		}
		printPatternList(ctx->patternList(), switchExpr, !isNull ? tmpName : "", "", false, false, skipFirst);
		out << ") ";
		if (ctx->attributeSpecifierSeq())
		{
			auto attr = ctx->attributeSpecifierSeq()->attributeSpecifier(0)->Identifier()->getText();
			if (attr == "Likely")
			{
				out << "[[likely]] ";
			}
			else if (attr == "Unlikely")
			{
				out << "[[unlikely]] ";
			}
		}
		out << " {\n" << std::string(++depth, '\t');
		if (!isNull && !pattern->not_() || isNull && pattern->not_()) {
			if (pattern->Let())
			{
				out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "const auto& [";
				bool first = true;
				for (auto id : pattern->Identifier())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(id);
				}
				out << "] = ";
				out << "*" << tmpName << "; \n" << std::string(depth, '\t');
			}
			else if (pattern->theTypeId() && !pattern->Identifier().empty())
			{
				out << "const auto& ";
				printIdentifier(pattern->Identifier(0));
				out << " = *" << tmpName;
				out << ";\n" << std::string(depth, '\t');
			}
			else {
				auto txt = switchExpr->getText();
				if (std::all_of(txt.begin(), txt.end(), [](char c) { return std::isalnum(c) || c == '_'; }))
				{
					out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
					if (isNull)
					{
						out << "auto " << tmpName << " = *" << txt << "; ";
					}
					out << "const auto& " << txt << " = ";
					if (!isNull) out << "*";
					out << tmpName;
					out << ";\n" << std::string(depth, '\t');
				}
			}
		}
        printStatement(ctx->stat());
		out << "\n" << std::string(--depth,'\t') << "}";
	}
	else {
		printStatement(ctx->stat());
	}
	out << "\n" << std::string(depth, '\t');
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
				printIdentifier(ids[0]);
			}
			else
			{
				out << "[";
				bool first = true;
				for (auto id : ids) {
					if (!first) out << ", ";
					printIdentifier(id);
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
		if (ctx->not_()) out << "!";
		if (auto id = ctx->Identifier())
		{
			out << "ADV_DEBUG_";
			printIdentifier(id);
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
			out << "goto BREAK_";
			printIdentifier(id);
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
			out << "goto CONTINUE_"; 
			printIdentifier(id);
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
		out << "& ";
		printIdentifier(ctx->Identifier());
	}
}

void CppAdvanceCodegen::printCondition(CppAdvanceParser::ConditionContext* ctx) const
{
	isCondition = true;
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
	isCondition = false;
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
			//isArray = t->arrayDeclarator();
			out << " ";
		}
		else
		{
			symbolTable[id] = "";
			out << "auto ";
		}
		currentType = symbolTable[id];
		out << id;
		//if (isArray) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
		if (auto expr = ctx->initializerClause())
		{
			out << " = ";
			if (first)
			{
				printInitializerClause(ctx->initializerClause());
			}
			else
			{
				printIdentifier(ids[0]);
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
	out << " ";
	printIdentifier(ctx->Identifier());

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
		printIdentifier(ctx->Identifier());
	}
}

void CppAdvanceCodegen::printStructDefinition(CppAdvanceParser::StructDefinitionContext* ctx) const
{
	isStructDeclaration = functionBody;
	currentAccessSpecifier = std::nullopt;
	auto prevTypeName = currentShortType;
	if (isStructDeclaration)
	{
		if (!ctx->structHead()->Ref() && !ctx->structHead()->className()->simpleTemplateId())
		{
			if (auto tparams = ctx->structHead()->templateParams())
			{
				printTemplateParams(tparams);
				out << " ";
			}
			out << "class __Class_" << ctx->structHead()->className()->getText() << ";\n" << std::string(depth, '\t');
		}
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		printStructHead(ctx->structHead());
		out << "\n" << std::string(depth++, '\t') << "{" << "\n" << std::string(depth, '\t');
		out << "public: using __self = "; 
		printClassName(ctx->structHead()->className());
		out << ";\n" << std::string(depth, '\t');
		if (!ctx->structHead()->Ref()) {
			out << "public: using __class = __Class_";
			printClassName(ctx->structHead()->className());
			out << ";\n" << std::string(depth, '\t');
		}
		out << "public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }\n" << std::string(depth, '\t');
	}
	
	if (ctx->structMemberSpecification())
		printStructMemberSpecification(ctx->structMemberSpecification());

	if (functionBody) {
		if (depth > 0) --depth;
		out << "\n" << std::string(depth, '\t') << "};";
		if (!ctx->structHead()->Ref())
		{
			out << "\n" << std::string(depth, '\t');
			out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			if (auto tparams = ctx->structHead()->templateParams())
			{
				printTemplateParams(tparams);
				out << " ";
			}
			else if (ctx->structHead()->className()->simpleTemplateId())
			{
				out << "template<> ";
			}
			out << "class __Class_";
			printClassName(ctx->structHead()->className());
			out << " : public CppAdvance::ValueType";
			if (ctx->structHead()->baseClause()) {
				for (auto iface : ctx->structHead()->baseClause()->baseSpecifierList()->baseSpecifier())
				{
					out << ", public ";
					if (iface->nestedNameSpecifier())
					{
						printNestedNameSpecifier(iface->nestedNameSpecifier());
					}
					printClassName(iface->className());
					out << "::__class";
				}
			}

			out << "\n" << std::string(depth++, '\t') << "{\n" << std::string(depth, '\t');
			if (ctx->structHead()->baseClause()) {
				for (auto iface : ctx->structHead()->baseClause()->baseSpecifierList()->baseSpecifier())
				{
					out << "#line " << iface->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
					out << "ADV_CHECK_INTERFACE(" << iface->getText() << ", ";
					if (iface->nestedNameSpecifier())
					{
						printNestedNameSpecifier(iface->nestedNameSpecifier());
					}
					printClassName(iface->className());
					out << ");\n" << std::string(depth, '\t');
				}
			}
			out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			printClassName(ctx->structHead()->className());
			if (auto tparams = ctx->structHead()->templateParams())
			{
				out << "<";
				bool first = true;
				for (auto tparam : tparams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << " " << "__value;\n" << std::string(depth, '\t');
			out << "public: using __underlying = ";
			printClassName(ctx->structHead()->className());
			if (auto tparams = ctx->structHead()->templateParams())
			{
				out << "<";
				bool first = true;
				for (auto tparam : tparams->templateParamDeclaration())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(tparam->Identifier());
				}
				out << ">";
			}
			out << "; using __self = __underlying;\n" << std::string(depth, '\t');
			if (ctx->structMemberSpecification())
			{
				for (auto decl : ctx->structMemberSpecification()->structMemberDeclaration())
				{
					if (!decl->structDefinition() || 
						decl->accessSpecifier() && decl->accessSpecifier()->Public() || decl->protectedInternal()) continue;
					auto id = decl->structDefinition()->structHead()->className();
					if (auto tparams = decl->structDefinition()->structHead()->templateParams())
					{
						printTemplateParams(tparams);
						out << " ";
					}
					out << "using " << id->getText() << " = typename __self::" << id->getText();
					if (auto tparams = decl->structDefinition()->structHead()->templateParams())
					{
						out << "<";
						bool first = true;
						for (auto tparam : tparams->templateParamDeclaration())
						{
							if (!first) out << ", ";
							first = false;
							printIdentifier(tparam->Identifier());
						}
						out << ">";
					}
					out << ";\n" << std::string(depth, '\t');
				}
			}
			
			out << "__Class_" << ctx->structHead()->className()->getText() << "(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>)"
				<< " : __value{value} {}\n" << std::string(depth, '\t');
			out << "operator __underlying() const noexcept { return __value; }\n" << std::string(depth, '\t');
			if (ctx->structMemberSpecification())
			{
				auto decls = ctx->structMemberSpecification()->structMemberDeclaration();
				for (auto decl : ctx->structMemberSpecification()->structMemberDeclaration())
				{
					if (decl->accessSpecifier() && !decl->accessSpecifier()->Public() || decl->protectedInternal()) continue;
					if (auto cond = decl->memberVersionConditionalDeclaration())
					{
						if (auto inner = cond->memberVersionIfDeclaration()->structMemberDeclaration())
							decls.push_back(inner);
						if (auto stat = cond->memberVersionIfDeclaration()->memberDeclarationCompoundStatement())
						{
							for (auto d : stat->structMemberDeclaration())
							{
								decls.push_back(d);
							}
						}
						if (auto elseDecl = cond->memberVersionElseDeclaration())
						{
							if (auto inner = cond->memberVersionElseDeclaration()->structMemberDeclaration())
								decls.push_back(inner);
							if (auto stat = cond->memberVersionElseDeclaration()->memberDeclarationCompoundStatement())
							{
								for (auto d : stat->structMemberDeclaration())
								{
									decls.push_back(d);
								}
							}
						}
					}

					if (auto cond = decl->memberDeclarationCompoundStatement())
					{
						for (auto d : cond->structMemberDeclaration())
						{
							decls.push_back(d);
						}
					}
				}

				for (auto decl : decls) {
					if (auto prop = decl->property())
					{
						if (prop->Static()) continue;
						CppAdvanceParser::PropertySetterContext* setter = nullptr;
						CppAdvanceParser::PropertyGetterContext* getter = nullptr;
						if (auto body = prop->propertyBody())
						{
							setter = body->propertySetter();
							getter = body->propertyGetter();
						}
						auto id = prop->Identifier()->getText();
						if (setter && (!setter->accessSpecifier() && !setter->protectedInternal()))
						{
							out << "__underlying& set" << id << "(const ";
							printTypeId(prop->theTypeId());
							out << "& value) { return __value.set" << id << "(value); }\n" << std::string(depth, '\t');
						}
						if (getter && !getter->accessSpecifier() && !getter->protectedInternal() || !setter && !getter)
						{
							out << "auto get" << id << "() const -> ";
							if (prop->Const()) out << "const ";
							printTypeId(prop->theTypeId());
							if (prop->Ref()) out << "&";
							out << " { return __value.get" << id << "(); }\n" << std::string(depth, '\t');
						}
					}
					else if (auto method = decl->functionDefinition())
					{
						if (method->templateParams() || method->simpleTemplateId()
							|| method->functionParams() && !method->returnType() && method->shortFunctionBody()) continue;
						bool isStatic = false;
						bool isMut = false;
						for (auto spec : method->functionSpecifier())
						{
							if (spec->Static()) isStatic = true;
							if (spec->Mutable()) isMut = true;
						}
						if (isStatic) continue;
						//std::string id;

						out << "auto ";
						if (method->Identifier()) printIdentifier(method->Identifier());
						if (method->operatorFunctionId()) printOperatorFunctionId(method->operatorFunctionId());

						printFunctionParameters(method->functionParams());
						if (!isMut) out << " const ";
						if (method->exceptionSpecification()) printExceptionSpecification(method->exceptionSpecification());
						out << " -> ";
						if (method->returnType() && method->returnType()->theTypeId())
						{
							printTypeId(method->returnType()->theTypeId());
							if (method->returnType()->Const() || !method->returnType()->Ref()) out << " const";
							if (method->returnType()->Ref()) out << " &";
						}
						else
						{
							out << "void";
						}
						out << " { ADV_EXPRESSION_BODY(__value.";
						if (method->Identifier()) printIdentifier(method->Identifier());
						if (method->operatorFunctionId()) printOperatorFunctionId(method->operatorFunctionId());
						out << "(";
						bool first = true;
						if (auto params = method->functionParams()->paramDeclClause())
						{
							for (auto param : params->paramDeclList()->paramDeclaration())
							{
								if (!first) out << ", ";
								first = false;
								printIdentifier(param->Identifier());
							}
						}

						out << ")); }\n" << std::string(depth, '\t');
					}
				}
			}
			out << "\n" << std::string(--depth, '\t') << "};";
		}
	}

	currentShortType = prevTypeName;
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
	currentShortType = ctx->className()->getText();
	if (ctx->Ref())
	{
		out << " : public CppAdvance::RefStruct";
	}
	else
	{
		out << " : public CppAdvance::Struct";
		checkForRefStruct = true;
	}
}

void CppAdvanceCodegen::printClassDefinition(CppAdvanceParser::ClassDefinitionContext* ctx) const
{
	isStructDeclaration = functionBody;
	currentAccessSpecifier = std::nullopt;
	auto prevTypeName = currentShortType;

	if (ctx->structMemberSpecification())
		printStructMemberSpecification(ctx->structMemberSpecification());

	currentShortType = prevTypeName;
}

void CppAdvanceCodegen::printClassHead(CppAdvanceParser::ClassHeadContext* ctx) const
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
	out << "class ";
	printClassName(ctx->className());
	currentShortType = ctx->className()->getText();
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
	auto prevCheckForRefStruct = checkForRefStruct;
	checkForRefStruct = false;
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
			checkForRefStruct = prevCheckForRefStruct;
			printMemberBlockDeclaration(member);
		}
	}
	else if (auto func = ctx->functionDefinition())
	{
		printFunctionDefinition(func);
	}
	else if (auto func = ctx->constructor())
	{
		printConstructor(func);
	}
	else if (auto func = ctx->destructor())
	{
		printDestructor(func);
	}
	else if (auto func = ctx->conversionFunction())
	{
		printConversionFunction(func);
	}
	else if (auto func = ctx->indexer())
	{
		printIndexer(func);
	}
	else if (auto prop = ctx->property())
	{
		printProperty(prop);
	}
	else if (auto fr = ctx->friendDeclaration())
	{
		printFriendDeclaration(fr);
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
				if (vdecl->not_()) out << "!";
				if (auto id = vdecl->Identifier())
				{
					out << "ADV_DEBUG_";
					printIdentifier(id);
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
	else if (auto type = ctx->classDefinition())
	{
		printClassDefinition(type);
	}
	else if (auto type = ctx->enumDefinition())
	{
		printEnumDefinition(type);
	}
	else if (auto type = ctx->enumClassDefinition())
	{
		printEnumClassDefinition(type);
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

void CppAdvanceCodegen::printEnumDefinition(CppAdvanceParser::EnumDefinitionContext* ctx) const
{
	if (isStructDeclaration || functionBody) return;

	if (ctx->enumMemberSpecification())
	{
		printEnumMemberSpecification(ctx->enumMemberSpecification());
	}
}

void CppAdvanceCodegen::printEnumMemberSpecification(CppAdvanceParser::EnumMemberSpecificationContext* ctx) const
{
	for (auto decl : ctx->enumMemberDeclaration())
	{
		printEnumMemberDeclaration(decl);
	}
}

void CppAdvanceCodegen::printEnumMemberDeclaration(CppAdvanceParser::EnumMemberDeclarationContext* ctx) const
{
	if (ctx->functionDefinition())
	{
		printFunctionDefinition(ctx->functionDefinition());
	}
	else if (ctx->property())
	{
		printProperty(ctx->property());
	}
}

void CppAdvanceCodegen::printEnumClassDefinition(CppAdvanceParser::EnumClassDefinitionContext* ctx) const
{
	if (isStructDeclaration || functionBody) return;

	currentType = ctx->enumClassHead()->Identifier()->getText();
	printEnumClassList(ctx->enumClassList());
	if (ctx->enumClassMemberSpecification())
	{
		printEnumClassMemberSpecification(ctx->enumClassMemberSpecification());
	}
}

void CppAdvanceCodegen::printEnumClassList(CppAdvanceParser::EnumClassListContext* ctx) const
{
	
}

void CppAdvanceCodegen::printEnumClassEnumerator(CppAdvanceParser::ClassEnumeratorDefinitionContext* ctx) const
{
	
}

void CppAdvanceCodegen::printEnumClassMemberSpecification(CppAdvanceParser::EnumClassMemberSpecificationContext* ctx) const
{
	for (auto decl : ctx->structMemberDeclaration())
	{
		printStructMemberDeclaration(decl);
	}
}

void CppAdvanceCodegen::printAttributeSpecifierSeq(CppAdvanceParser::AttributeSpecifierSeqContext* ctx) const
{
	for (auto attr : ctx->attributeSpecifier())
	{
		printAttributeSpecifier(attr);
		out << " ";
	}
}

void CppAdvanceCodegen::printAttributeSpecifier(CppAdvanceParser::AttributeSpecifierContext* ctx) const
{
	out << "[[clang::annotate(\"UserAttr: ";
	if (ctx->nestedNameSpecifier())
	{
		printNestedNameSpecifier(ctx->nestedNameSpecifier());
	}
	printIdentifier(ctx->Identifier());
	if (ctx->attributeArgumentClause())
	{
		printAttributeArgumentClause(ctx->attributeArgumentClause());
	}
	out << "\")]]";
}

void CppAdvanceCodegen::printAttributeArgumentClause(CppAdvanceParser::AttributeArgumentClauseContext* ctx) const
{
	out << "(";
	printExpressionList(ctx->expressionList());
	out << ")";
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
	auto op = ctx->operator_();
	if (op->In())
	{
		out << "_operator_in";
	}
	else if (op->DoubleCaret() || op->Tilde() || op->TildeAssign() || op->DoubleStar() || op->DoubleStarAssign() || op->Greater().size() > 2
		|| op->SignedRightShiftAssign()
		|| op->Op1() || op->Op2() || op->Op3() || op->Op4() || op->Op5() || op->Op6() || op->Op7() || op->Op8() || op->Op9() || op->Op10())
	{
		out << sema.getCustomOperatorName(op->getText());
	}
	else {
		out << "operator ";
		printOperator(ctx->operator_());
	}
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

void CppAdvanceCodegen::printBaseSpecifier(CppAdvanceParser::BaseSpecifierContext* ctx) const
{
	if (ctx->nestedNameSpecifier())
	{
		printNestedNameSpecifier(ctx->nestedNameSpecifier());
	}
	printClassName(ctx->className());
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
		isUnsafe = ctx->Unsafe();
		if (ctx->Inline()) isInline = true;

		if (auto body = ctx->constructorBody())
		{
			if (body->Equal()) isConstexpr = true;
			else if (body->Assign()) isInline = true;
		}
		else if (auto body = ctx->delegatingConstructorBody())
		{
			if (body->EqualArrow()) isConstexpr = true;
			else if (body->AssignArrow()) isInline = true;
		}

		if (isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (isInline)
		{
			out << "inline ";
		}

		if (ctx->implicitSpecification())
		{
			printImplicitSpecification(ctx->implicitSpecification());
		}
		else if (ctx->functionParams()->paramDeclClause() && ctx->functionParams()->paramDeclClause()->paramDeclList()->paramDeclaration().size() == 1)
		{
			out << "explicit ";
		}

		out << currentShortType;

		printFunctionParameters(ctx->functionParams());
		isVariadicTemplate = false;
		out << " ";
		if (ctx->exceptionSpecification()) printExceptionSpecification(ctx->exceptionSpecification());
		if (auto body = ctx->constructorBody())
		{
			printConstructorBody(body);
		}
		else if (auto body = ctx->delegatingConstructorBody())
		{
			printDelegatingConstructorBody(ctx->delegatingConstructorBody());
		}
		else
		{
			out << " = default;";
		}
		out << std::endl;
	}
	isUnsafe = prevUnsafe;
	refParameters.clear();
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printConstructorBody(CppAdvanceParser::ConstructorBodyContext* ctx) const
{
	bool isDelegating = ctx->delegatingConstructorStatement();
	bool isDelegatingThis = false;
	if (isDelegating && !isExtension)
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
	bool prev = functionBody;
	functionBody = true;
	if (!isDelegatingThis && !isExtension) {
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
	if (isExtension)
	{
		out << "\n" << std::string(depth, '\t') << "#line " << ctx->delegatingConstructorStatement()->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		printDelegatingConstructorStatement(ctx->delegatingConstructorStatement());
	}
	for (auto stat : memberInitializationStatements) {
		if (initializedMemberStatements.contains(stat)) continue;
		out << "\n" << std::string(depth, '\t') << "#line " << stat->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		printMemberInitializationStatement(stat,true);
	}
	for (auto stat : ctx->stat()) {
		out << "\n" << std::string(depth, '\t');
		printStatement(stat);
	}
	if (isExtension)
	{
		out << "\n" << std::string(depth, '\t');
		out << "return __this;";
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
	if (isExtension)
	{
		out << "auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<" << currentType;
		bool first = true;
		if (currentTemplateParams)
		{
			out << "<";
			for (auto param: currentTemplateParams->templateParamDeclaration())
			{
				if (!first) out << ", ";
				first = false;
				printIdentifier(param->Identifier());
			}
			out << ">";
		}
		else if (currentTemplateSpecArgs)
		{
			out << "<";
			printTemplateArgumentList(currentTemplateSpecArgs);
			out << ">";

		}
		out << ">::ConstructingType(";
		printExpressionList(ctx->expressionList());
		out << ");";
	}
	else 
	{
		if (ctx->This())
		{
			out << currentType;
		}
		else if (ctx->Super())
		{
			out << "___super";
		}
		out << "(";
		printExpressionList(ctx->expressionList());
		out << ")";
	}
}

void CppAdvanceCodegen::printDestructor(CppAdvanceParser::DestructorContext* ctx) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
	bool prevUnsafe = isUnsafe;
	SourcePosition pos = { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() };
	isDestructor = true;
	if (sema.methods.contains(pos))
	{
		const MethodDefinition& func = sema.methods[pos];
		if (func.access != AccessSpecifier::Private &&
			(func.isInline || func.parentTemplateParams || func.parentTemplateSpecializationArgs)) {
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
		if (func.isConstexpr)
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
		isVariadicTemplate = false;
		out << "() ";
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		isUnsafe = func.isUnsafe;
		currentShortType.clear();
		currentTypeWithTemplate.clear();
		currentType = func.id;
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
		out.switchTo(false);
	}
	else
	{
		out << "public: ";

		bool isInline = false;
		bool isConstexpr = false;
		if (ctx->Inline()) isInline = true;

		if (auto body = ctx->functionBody())
		{
			if (body->Equal()) isConstexpr = true;
			else if (body->Assign()) isInline = true;
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			if (body->EqualArrow()) isConstexpr = true;
			else if (body->AssignArrow()) isInline = true;
		}

		if (isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (isInline)
		{
			out << "inline ";
		}

		out << "~" << currentShortType << "() ";
		if (ctx->exceptionSpecification()) printExceptionSpecification(ctx->exceptionSpecification());
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
	isDestructor = false;
	isUnsafe = prevUnsafe;
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext* ctx, bool insideBody) const
{
	if (ctx->This() && insideBody) {
		if (isExtension) out << "__";
		out << "this->";
	}
	printIdentifier(ctx->Identifier());
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
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		/*if (func.isOverride) out << " override ";
		if (func.isFinal) out << " final ";*/
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

		if (ctx->templateParams())
		{
			printTemplateParams(ctx->templateParams());
			out << " ";
		}

		bool isInline = false;
		bool isConstexpr = false;
		bool isVirtual = false;
		bool isOverride = false;
		bool isFinal = false;
		isUnsafe = false;
		for (auto spec : ctx->functionSpecifier())
		{
			if (spec->Inline()) isInline = true;
			if (spec->Virtual()) isVirtual = true;
			if (spec->Override()) isOverride = true;
			if (spec->Final()) isFinal = true;
			if (spec->Unsafe()) isUnsafe = true;
		}

		if (auto body = ctx->functionBody())
		{
			if (body->Equal()) isConstexpr = true;
			else if (body->Assign()) isInline = true;
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			if (body->EqualArrow()) isConstexpr = true;
			else if (body->AssignArrow()) isInline = true;
		}

		if (isConstexpr)
		{
			out << "inline constexpr ";
		}
		else if (isInline)
		{
			out << "inline ";
		}

		if (ctx->implicitSpecification())
		{
			printImplicitSpecification(ctx->implicitSpecification());
		}
		else
		{
			out << "explicit ";
		}

		printConversionFunctionId(ctx->conversionFunctionId());
		out << "() const ";
		isVariadicTemplate = false;
		if (ctx->exceptionSpecification()) printExceptionSpecification(ctx->exceptionSpecification());
		/*if (isOverride) out << " override ";
		if (isFinal) out << " final ";*/
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
		out << std::endl;
	}
	isUnsafe = prevUnsafe;
	sema.symbolContexts.pop();
}

void CppAdvanceCodegen::printIndexer(CppAdvanceParser::IndexerContext* ctx) const
{
	sema.symbolContexts.push(sema.symbolContexts.top());
	bool prevUnsafe = isUnsafe;
	bool prevFunctionBody = functionBody;
	
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
		bool isUnchecked = false;
		if (func.attributes) for (auto attr : func.attributes->attributeSpecifier())
		{
			auto attrName = attr->Identifier()->getText();
			if (attrName == "Unchecked") isUnchecked = true;
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
		if (isUnchecked)
		{
			out << "CppAdvance::UncheckedTag, ";
		}
		printParamDeclClause(func.indexerParams);
		out << ") ";
		isVariadicTemplate = false;
		if (!func.isStatic) {
			if (func.isConstReturn) out << "const ";
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
			if (!func.isRefReturn) out << "const ";
			printTypeId(ret);
			if (func.isRefReturn) out << "&";
			if (auto idc = ctx->returnType()->Identifier()) {
				auto id = idc->getText();
				namedReturns.emplace_back(id, ret);
				symbolTable[id] = ret->getText();
			}
			else if (ret->VertLine().empty() && ret->singleTypeId(0)->typeSpecifierSeq() 
				&& ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier())
			{
				auto tup = ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
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
		/*if (func.isOverride) out << " override ";
		if (func.isFinal) out << " final ";*/
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
				printIdentifier(param->Identifier());
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
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(func.indexerParams);
			out << ") ";
			isVariadicTemplate = false;
			out << " const ";
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
				else if (ret->VertLine().empty() && ret->singleTypeId(0)->typeSpecifierSeq() 
					&& ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier())
				{
					auto tup = ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
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
			/*if (func.isOverride) out << " override ";
			if (func.isFinal) out << " final ";*/
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
					printIdentifier(param->Identifier());
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

		bool isInline = func.isInline;
		if (func.indexerGetter)
		{
			if (auto body = func.indexerGetter->functionBody())
			{
				isInline = body->Assign() || body->Equal();
			}
			else if (auto body = func.indexerGetter->shortFunctionBody())
			{
				isInline = body->AssignArrow() || body->EqualArrow();
			}
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
		out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
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
		out << "::getAt";
		isUnsafe = func.isUnsafe;
		out << "(";
		if (isUnchecked)
		{
			out << "CppAdvance::UncheckedTag, ";
		}
		printParamDeclClause(func.indexerParams);
		out << ") ";
		isVariadicTemplate = false;
		if (!func.isStatic) {
			if (func.isConstReturn) out << "const ";
		}
		if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
		out << " -> ";
		if (func.isConstReturn || !func.isRefReturn) out << "const ";
		printTypeId(func.returnType);
		if (func.isRefReturn) out << "&";
		/*if (func.isOverride) out << " override ";
		if (func.isFinal) out << " final ";*/

		if (func.indexerGetter) {
			if (auto body = func.indexerGetter->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = func.indexerGetter->shortFunctionBody())
			{
				printShortFunctionBody(body);
			}
		}
		else
		{
			out << " { return _operator_subscript(";
			bool first = true;
			for (auto param : func.indexerParams->paramDeclList()->paramDeclaration()) {
				if (!first) out << ", ";
				first = false;
                printIdentifier(param->Identifier());
			}
			out << "); }";
		}
		currentShortType.clear();
		currentTypeWithTemplate.clear();
		if (!func.isConstReturn && !func.isStatic && !func.isMutating)
		{
			out << "\n" << std::string(depth, '\t');
			out << "#line " << func.pos.line << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
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
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(func.indexerParams);
			out << ") const ";
			isVariadicTemplate = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> ";
			out << "const ";
			printTypeId(func.returnType);
			if (func.isRefReturn) out << "&";
			if (func.isOverride) out << " override ";
			if (func.isFinal) out << " final ";

			if (func.indexerGetter) {
				if (auto body = func.indexerGetter->functionBody())
				{
					functionProlog = true;
					printFunctionBody(body);
				}
				else if (auto body = func.indexerGetter->shortFunctionBody())
				{
					printShortFunctionBody(body);
				}
			}
			else
			{
				out << " { return _operator_subscript(";
				bool first = true;
				for (auto param : func.indexerParams->paramDeclList()->paramDeclaration()) {
					if (!first) out << ", ";
					first = false;
					printIdentifier(param->Identifier());
				}
				out << "); }";
			}
			currentShortType.clear();
			currentTypeWithTemplate.clear();
		}

		if (func.indexerSetter)
		{
			isInline = false;
			if (auto body = func.indexerSetter->functionBody())
			{
				isInline = body->Assign() || body->Equal();
			}
			else if (auto body = func.indexerSetter->shortFunctionBody())
			{
				isInline = body->AssignArrow() || body->EqualArrow();
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
			if (isUnchecked)
			{
				out << "CppAdvance::UncheckedTag, ";
			}
			printParamDeclClause(func.indexerParams);
			out << ", const ";
			printTypeId(func.returnType);
			out << "& value) ";
			isVariadicTemplate = false;
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> void ";
			if (!func.isStatic) {
				/*if (func.isOverride) out << "override ";
				if (func.isFinal) out << "final ";*/
			}

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
		out.switchTo(false);
	}
	else
	{
		CppAdvanceParser::IndexerGetterContext* getter = nullptr;
		CppAdvanceParser::IndexerSetterContext* setter = nullptr;

		if (auto prop = ctx->indexerProperty())
		{
			getter = prop->indexerGetter();
			setter = prop->indexerSetter();
		}

		if (!currentAccessSpecifier) currentAccessSpecifier = AccessSpecifier::Private; std::string funcname;

		auto params = ctx->paramDeclClause()->paramDeclList()->paramDeclaration();
		funcname = "_operator_subscript";
		
		
		if (!ctx->returnType()->Const()) {
			out << "#line " << ctx->getStart()->getLine() << " \"" << filename << "\"";
			out << "\n" << std::string(depth, '\t');

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
			default:
				break;
			}

			out << "inline auto " << funcname << "(";
			printParamDeclClause(ctx->paramDeclClause());
			out << ") -> ";
			printTypeId(ctx->returnType()->theTypeId());
			if (ctx->returnType()->Ref()) out << "&";
			out << " ";
			if (auto body = ctx->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = ctx->shortFunctionBody())
			{
				functionProlog = true;
				printShortFunctionBody(body);
			}
			out << "\n" << std::string(depth, '\t');
		}
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << "\"";
		out << "\n" << std::string(depth, '\t');

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
		default:
			break;
		}

		out << "inline auto " << funcname << "(";
		printParamDeclClause(ctx->paramDeclClause());
		out << ") const -> const ";
		printTypeId(ctx->returnType()->theTypeId());
		if (ctx->returnType()->Ref()) out << "&";
		out << " ";
		if (auto body = ctx->functionBody())
		{
			functionProlog = true;
			printFunctionBody(body);
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			functionProlog = true;
			printShortFunctionBody(body);
		}
		out << "\n" << std::string(depth, '\t');
	}
	isUnsafe = prevUnsafe;
	functionBody = prevFunctionBody;
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
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
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
				isPropertySetter = true;
				out << "-> __self";
				auto shortParent = StringSplit(parent, "::").back();
				if (shortParent.starts_with("__Class_")) out << "Class";
				out << "& ";
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
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
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
		out.switchTo(false);
	}
	else
	{
		auto id = ctx->Identifier()->getText();
		currentPropertyField = "p_" + id;
		isUnsafe = ctx->Unsafe();

		CppAdvanceParser::PropertyGetterContext* getter = nullptr;
		CppAdvanceParser::PropertySetterContext* setter = nullptr;
		if (auto body = ctx->propertyBody())
		{
			getter = body->propertyGetter();
			setter = body->propertySetter();
		}

		if (setter && (setter->Semi() || sema.propertiesNeedField.contains(setter)))
		{
			out << "private: ";
			if (ctx->Const()) out << "const ";
            printTypeId(ctx->theTypeId());
			if (ctx->Ref()) out << "&";
			out << " " << currentPropertyField;
			if (ctx->initializerClause())
			{
				out << " = ";
				printInitializerClause(ctx->initializerClause());
			}
			out << ";" << std::endl << std::string(depth, '\t');
		}

		if (!currentAccessSpecifier) {
			if (auto acc = ctx->accessSpecifier()) {
				if (acc->Public()) currentAccessSpecifier = AccessSpecifier::Public;
				else if (acc->Internal()) currentAccessSpecifier = AccessSpecifier::Internal;
				else if (acc->Protected()) currentAccessSpecifier = AccessSpecifier::Protected;
				else if (acc->Private()) currentAccessSpecifier = AccessSpecifier::Private;
			}
			else {
				currentAccessSpecifier = AccessSpecifier::Private;
			}
		}
		AccessSpecifier getAccess;
		AccessSpecifier setAccess;
		if (setter)
		{
			if (auto body = setter->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = setter->shortFunctionBody())
			{
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
			}
			else
			{
				isInline = true;
			}

			out << "#line " << setter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');

			setAccess = *currentAccessSpecifier;
			if (setter->protectedInternal()) setAccess = AccessSpecifier::ProtectedInternal;
			if (auto acc = setter->accessSpecifier()) {
				if (acc->Public()) setAccess = AccessSpecifier::Public;
				else if (acc->Internal()) setAccess = AccessSpecifier::Internal;
				else if (acc->Protected()) setAccess = AccessSpecifier::Protected;
				else if (acc->Private()) setAccess = AccessSpecifier::Private;
			}
			switch (setAccess)
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

			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			out << "set" << id << "(const ";
			printTypeId(ctx->theTypeId());
			out << "& value) ";
			isPropertySetter = true;
			out << "-> __self";
			if (currentShortType.starts_with("__Class_")) out << "Class";
			out << "& ";
			/*if (ctx->Override()) out << "override ";
			if (ctx->Final()) out << "final ";*/

			if (auto body = setter->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = setter->shortFunctionBody())
			{
				printShortFunctionBody(setter->shortFunctionBody());
			}
			else
			{
				out << "{ p_" << id << " = value; return *this; }";
			}

			isPropertySetter = false;
			out << std::endl << std::string(depth, '\t');
		}
		if (getter)
		{
			isInline = false;
			isConstexpr = false;
			if (auto body = getter->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = getter->shortFunctionBody())
			{
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
			}
			else
			{
				isInline = true;
			}

			out << "#line " << getter->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
			getAccess = *currentAccessSpecifier;
			if (getter->protectedInternal()) getAccess = AccessSpecifier::ProtectedInternal;
			if (auto acc = getter->accessSpecifier()) {
				if (acc->Public()) getAccess = AccessSpecifier::Public;
				else if (acc->Internal()) getAccess = AccessSpecifier::Internal;
				else if (acc->Protected()) getAccess = AccessSpecifier::Protected;
				else if (acc->Private()) getAccess = AccessSpecifier::Private;
			}
			switch (getAccess)
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

			if (isConstexpr)
			{
				out << "inline constexpr ";
			}
			else if (isInline)
			{
				out << "inline ";
			}

			out << "auto ";
			out << "get" << id << "() const ";

			out << " -> ";
			if (ctx->Const()) out << "const ";
			printTypeId(ctx->theTypeId());
			if (ctx->Ref()) out << "&";
			out << " ";
			/*if (ctx->Override()) out << "override ";
			if (ctx->Final()) out << "final ";*/

			if (auto body = getter->functionBody())
			{
				functionProlog = true;
				printFunctionBody(body);
			}
			else if (auto body = getter->shortFunctionBody())
			{
				printShortFunctionBody(getter->shortFunctionBody());
			}
			else
			{
				out << "{ return p_" << id << "; }";
			}

			out << std::endl << std::string(depth, '\t');
		}
		else if (!setter)
		{
			out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');

			getAccess = *currentAccessSpecifier;
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

			isInline = false;
			isConstexpr = false;
			if (auto body = ctx->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = ctx->shortFunctionBody())
			{
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
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
			out << "get" << id << "() const ";

			out << " -> ";
			if (ctx->Const()) out << "const ";
			printTypeId(ctx->theTypeId());
			if (ctx->Ref()) out << "&";
			out << " ";
			/*if (ctx->Override()) out << "override ";
			if (ctx->Final()) out << "final ";*/

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

		out << "#line 9999 \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (setter)
		{
			if (getter)
			{
				out << "ADV_PROPERTY_GETTER_SETTER";
				out << "(";
				switch (*currentAccessSpecifier)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				out << ", " << id << ", ";
				switch (getAccess)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}
				out << ", get" << id << ", ";
				switch (setAccess)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}
				out << ", set" << id << ", ";
				if (ctx->Const()) out << "const ";
				printTypeId(ctx->theTypeId());
				if (ctx->Ref()) out << "&";
				out << ")";
			}
			else
			{
				out << "ADV_PROPERTY_SETTER";
				out << "(";
				switch (setAccess)
				{
				case AccessSpecifier::Public:
				case AccessSpecifier::Internal:
					out << "public";
					break;
				case AccessSpecifier::Protected:
				case AccessSpecifier::ProtectedInternal:
					out << "protected";
					break;
				case AccessSpecifier::Private:
					out << "private";
					break;
				}

				out << ", " << id << ", set" << id << ", ";
				if (ctx->Const()) out << "const ";
				printTypeId(ctx->theTypeId());
				if (ctx->Ref()) out << "&";
				out << ")";
			}
		}
		else
		{
			out << "ADV_PROPERTY_GETTER";
			out << "(";
			switch (getAccess)
			{
			case AccessSpecifier::Public:
			case AccessSpecifier::Internal:
				out << "public";
				break;
			case AccessSpecifier::Protected:
			case AccessSpecifier::ProtectedInternal:
				out << "protected";
				break;
			case AccessSpecifier::Private:
				out << "private";
				break;
			}

			out << ", " << id << ", get" << id << ", ";
			if (ctx->Const()) out << "const ";
			printTypeId(ctx->theTypeId());
			if (ctx->Ref()) out << "&";
			out << ")";
		}
		out << ";";
	}
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
	out << " auto ";
	printIdentifier(ctx->Identifier());
	printFunctionParameters(ctx->functionParams());
	if (auto spec = ctx->exceptionSpecification())
	{
		out << " ";
		printExceptionSpecification(spec);
	}
	out << " -> ";
	if (auto ret = ctx->returnType()) {
		if (ret->Const() || !ret->Ref()) out << "const ";
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
		isMainFunction = func.id == "__Astrum_Main";
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

		if (isMainFunction)
		{
			out << "ADV_ENTRY_POINT\n" << std::string(depth, '\t');
		}
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		if (isMainFunction)
		{
			out << "extern \"C\" ";
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
		if (func.returnType)
		{
			if (func.isConstReturn || !func.isRefReturn) out << "const ";
			auto ret = func.returnType;
			printTypeId(ret);
			if (auto idc = ctx->returnType()->Identifier()) {
				auto id = idc->getText();
				namedReturns.emplace_back(id,ret);
				symbolTable[id] = ret->getText();
			}
			else if (ret->VertLine().empty() && ret->singleTypeId(0)->typeSpecifierSeq() 
				&& ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier())
			{
				auto tup = ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
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
		else if (isMainFunction)
		{
			out << "CppAdvance::i32";
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

		if (func.isCommutative)
		{
			out << std::endl << std::string(depth, '\t');
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
			auto params = func.params->paramDeclClause()->paramDeclList()->paramDeclaration() | std::views::reverse;
			if (params.size() == 1 && func.id.starts_with("_operator_"))
				out << "_postfix";
			out << "(";
			bool first = true;
			for (auto param : params)
			{
				if (!first) out << ", ";
				first = false;
				printParamDeclaration(param);
			}
			out << ")";
			isVariadicTemplate = false;
			out << " ";
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> decltype(auto) ";
			if (!func.params->paramDeclClause())
			{
				out << " { auto copy = ";
				out << params[0]->Identifier()->getText();
				out << "; ADV_UFCS(" << func.id << ")(";
				out << params[0]->Identifier()->getText();
				out << "); return copy; }";
			}
			else
			{
				out << " { return ADV_UFCS(" << func.id << ")(";
				out << params[1]->Identifier()->getText();
				out << ", ";
				out << params[0]->Identifier()->getText();
				out << "); }";
			}
		}

		if (func.access == AccessSpecifier::Protected || _isUnsafe) out << "\n" << std::string(--depth,'\t') << "}";
		out << std::endl;
		if (!func.compilationCondition.empty())
		{
			out << "#endif " << std::endl;
		}
		out.switchTo(false);
		isMainFunction = false;
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
			}
			if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
			out << " -> ";
			if (func.returnType)
			{
				if (func.isConstReturn || !func.isRefReturn) out << "const ";
				auto ret = func.returnType;
				
				auto shortParent = StringSplit(parent, "::").back();
				if (shortParent.starts_with("__Class_") && ret->getText() == "self" && func.isRefReturn)
				{
					out << "__selfClass";
				}
				else
				{
					printTypeId(ret);
				}
				if (auto idc = ctx->returnType()->Identifier()) {
					auto id = idc->getText();
					namedReturns.emplace_back(id, ret);
					symbolTable[id] = ret->getText();
				}
				else if (ret->VertLine().empty() && ret->singleTypeId(0)->typeSpecifierSeq() 
					&& ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier())
				{
					auto tup = ret->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
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
			/*if (func.isOverride) out << " override ";
			if (func.isFinal) out << " final ";*/
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
				out << " -> __self { auto copy = CppAdvance::New<__self>(__self(*this)); ++(*this); return copy; }";
				currentShortType.clear();
				currentTypeWithTemplate.clear();
			}
			else if (func.isCommutative)
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
				if (!func.params->paramDeclClause()) {
					auto parent = func.parentType;
					StringReplace(parent, ".", "::");
					out << parent;
					currentShortType = func.shortType;
					currentTypeWithTemplate = parent;
					out << "::";
				}
				
				out << func.id;
				if (!func.params->paramDeclClause())
				{
					if (func.id.starts_with("_operator_"))
						out << "_postfix() ";
				}
				else
				{
					out << "(";
					printParamDeclClause(func.params->paramDeclClause());
					auto parent = func.parentType;
					StringReplace(parent, ".", "::");
					currentShortType = func.shortType;
					currentTypeWithTemplate = parent;
					out << ", const typename " << parent << "::__self& __this) ";
				}
				isVariadicTemplate = false;
				if (func.exceptionSpecification) printExceptionSpecification(func.exceptionSpecification);
				out << " -> decltype(auto) ";
				if (!func.params->paramDeclClause())
				{
					out << " { auto copy = __ref(); ADV_UFCS(" << func.id << ")(__ref()); return copy; }";
				}
				else
				{
					out << " { return ADV_UFCS(" << func.id << ")(__this, ";
					out << func.params->paramDeclClause()->paramDeclList()->paramDeclaration(0)->Identifier()->getText();
					out << "); }";
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
				if (spec->Unsafe()) isUnsafe = true;
			}

			if (auto body = ctx->functionBody())
			{
				if (body->Equal()) isConstexpr = true;
				else if (body->Assign()) isInline = true;
			}
			else if (auto body = ctx->shortFunctionBody())
			{
				if (body->EqualArrow()) isConstexpr = true;
				else if (body->AssignArrow()) isInline = true;
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
				printIdentifier(id);
			}
			else if (auto op = ctx->operatorFunctionId())
			{
				auto id = op->getText();
				printOperatorFunctionId(op);
				if (id.ends_with(" new") || id.ends_with(" delete")) isNewDeleteOperator = true;
			}
			
			printFunctionParameters(ctx->functionParams());
			isVariadicTemplate = false;
			out << " ";
			if (!isMut) out << "const ";
			if (ctx->exceptionSpecification()) printExceptionSpecification(ctx->exceptionSpecification());
			out << " -> ";
			if (auto ret = ctx->returnType())
			{
				if (ret->Const() || !ret->Ref()) out << "const ";
				if (ret->theTypeId()) {
					if (currentShortType.starts_with("__Class_") && ret->theTypeId()->getText() == "self" && ctx->returnType()->Ref())
					{
						out << "__selfClass";
					}
					else
					{
						printTypeId(ret->theTypeId());
					}
				}
				if (auto idc = ctx->returnType()->Identifier()) {
					auto id = idc->getText();
					namedReturns.emplace_back(id, ret->theTypeId());
					symbolTable[id] = ret->getText();
				}
				else if (ret->theTypeId() && ret->theTypeId()->VertLine().empty() && ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq() 
					&& ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier())
				{
					auto tup = ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
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
			/*if (isOverride) out << " override ";
			if (isFinal) out << " final ";*/
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

void CppAdvanceCodegen::printLocalFunction(CppAdvanceParser::FunctionDefinitionContext* ctx) const
{
	bool isStatic = false;
	for (auto spec : ctx->functionSpecifier())
	{
		if (spec->Static()) isStatic = true;
	}
	if (isStatic)
	{
		out << "static ";
	}
	out << "CppAdvance::LocalFunction<";
	if (auto ret = ctx->returnType())
	{
		if (ret->Const() || !ret->Ref())
		{
			out << "const ";
		}
		if (ret->theTypeId())
		{
			printTypeId(ret->theTypeId());
		}
		if (ret->Ref())
		{
			out << "&";
		}
	}
	else
	{
		out << "void";
	}
	out << "(";
	if (auto params = ctx->functionParams()->paramDeclClause())
	{
		bool first = true;
		for (auto param : params->paramDeclList()->paramDeclaration())
		{
			if (!first) out << ", ";
			first = false;
			if (param->theTypeId())
			{
				printTypeId(param->theTypeId());
			}
		}
	}
	out << ")> ";
	printIdentifier(ctx->Identifier());
	out << "; ";
	printIdentifier(ctx->Identifier());
	out << " = [&] ";
	if (ctx->templateParams())
	{
		printTemplateParams(ctx->templateParams());
		out << " ";
	}
	printFunctionParameters(ctx->functionParams());
	if (auto ret = ctx->returnType())
	{
		out << " -> ";
		if (ret->Const() || !ret->Ref())
		{
			out << "const ";
		}
		if (ret->theTypeId())
		{
			printTypeId(ret->theTypeId());
		}
		if (ret->Ref())
		{
			out << "&";
		}
		out << " ";
	}
	if (ctx->functionBody())
	{
		functionProlog = true;
		printFunctionBody(ctx->functionBody());
	}
	else if (ctx->shortFunctionBody())
	{
		printShortFunctionBody(ctx->shortFunctionBody());
	}
	out << ";";
}

void CppAdvanceCodegen::printFunctionParameters(CppAdvanceParser::FunctionParamsContext* ctx) const
{
	out << "(";
	if (auto clause = ctx->paramDeclClause())
	{
		printParamDeclClause(clause);
	}
	else if (isMainFunction)
	{
		//out << "CppAdvance::Array<CppAdvance::Str>";
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
	out << " ";
	printIdentifier(ctx->Identifier());

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
		if (!isDestructor) out << "ADV_EXPRESSION_BODY(";
		printExpression(stat->expr());
		if (!isDestructor) out << ")";
		out << "; ";
		if (isPropertySetter) out << "return *this;";
		if (isMainFunction) out << "return 0;";
		out << "\n" << std::string(--depth, '\t') << "}";
	}
	functionBody = prev;
}

void CppAdvanceCodegen::printFriendDeclaration(CppAdvanceParser::FriendDeclarationContext* ctx) const
{
	if (isStructDeclaration) out << "private: friend ";
	if (auto def = ctx->functionDefinition())
	{
		printFunctionDefinition(def);
	}
	else if (isStructDeclaration)
	{
		if (ctx->functionParams())
		{
			if (auto t = ctx->returnType())
			{
				if (t->Const() || !t->Ref()) out << "const ";
				printTypeId(t->theTypeId());
				if (t->Ref()) out << "&";
			}
			else
			{
				out << "void";
			}

			out << " ";
			printIdentifier(ctx->Identifier());
			printFunctionParameters(ctx->functionParams());
			out << ";";
		}
		else
		{
			if (auto tparams = ctx->templateParams())
			{
				printTemplateParams(tparams);
				out << " ";
			}
			out << "friend class ";
			printIdentifier(ctx->Identifier());
			out << ";";
		}
	}
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
	else if (auto decl = ctx->simpleMultiDeclaration())
	{
		printSimpleMultiDeclaration(decl);
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
	else if (auto decl = ctx->assertDeclaration())
	{
		printAssertDeclaration(decl);
	}
	isVolatile = false;
	isUnowned = false;
	isWeak = false;
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
	currentDeclaration = ctx;
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
		if (isUnowned) out << "::__unowned_ref";
		else if (isWeak) out << "::__weak_ref";
		//isArray = t->arrayDeclarator();
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
		else if (isUnowned)
		{
			out << "decltype(";
			printInitializerClause(ctx->initializerClause());
			out << ")::__unowned_ref ";
		}
		else if (isWeak)
		{
			out << "decltype(";
			printInitializerClause(ctx->initializerClause());
			out << ")::__weak_ref ";
		}
		else
		{
			out << "auto ";
		}
	}
	currentType = symbolTable[id];
	printIdentifier(ctx->Identifier());
	//if (isArray) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
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
				printIdentifier(ctx->Identifier());
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
				out << " = ";
				printIdentifier(ctx->Identifier());
			}
		}
		else if (checkForRefStruct)
		{
			out << ";";
			printRefStructCheck(ctx->theTypeId());
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
	currentDeclaration = nullptr;
}

void CppAdvanceCodegen::printSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext* ctx) const
{
	if (!functionBody) {
		emptyLine = true;
		return;
	}
	bool prevUnsafe = isUnsafe;

	bool first = true;
	bool isArray = false;
	auto ids = ctx->Identifier();
	if (auto spec = ctx->declSpecifierSeq())
	{
		printDeclSpecifierSeq(spec);
	}
	isDeclaration = true;
	printTypeId(ctx->theTypeId());
	if (isUnowned) out << "::__unowned_ref";
	else if (isWeak) out << "::__weak_ref";
	isDeclaration = false;
	//isArray = ctx->theTypeId()->arrayDeclarator();
	out << " ";
	for (auto id : ids)
	{
		auto txt = id->getText();
		currentDeclarationName = txt;
		symbolTable[txt] = ctx->theTypeId()->getText();
		currentType = symbolTable[txt];
		
		if (!first) out << ", ";
		first = false;
		printIdentifier(id);
		//if (isArray) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
		
		if (functionBody && !checkForRefStruct)
		{
			out << "{}";
		}
	}
	out << "; ";
	if (checkForRefStruct)
	{
		printRefStructCheck(ctx->theTypeId());
		out << ";";
	}
	isUnsafe = prevUnsafe;
	currentDeclarationName.clear();
}

void CppAdvanceCodegen::printDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext* ctx) const
{
	out << "const auto& [";
	bool first = true;
	for (auto seq = ctx->identifierSeq();  auto id : seq->Identifier()) {
		if (!first) out << ", ";
		printIdentifier(id);
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
	else if (ctx->Object())
	{
		out << "CppAdvance::ObjectRef";
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
		printIdentifier(ids[0]);
	}
	else {
		out << "[";
		bool first = true;
		for (auto idctx : ids)
		{
			if (!first) out << ", ";
			printIdentifier(idctx);
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
	out << "& "; printIdentifier(ctx->Identifier()); out << ";";
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
		if (first)
		{
			if (isUnowned)
			{
				out << "decltype(";
				printInitializerClause(ctx->initializerClause());
				out << ")::__unowned_ref ";
			}
			else if (isWeak)
			{
				out << "decltype(";
				printInitializerClause(ctx->initializerClause());
				out << ")::__weak_ref ";
			}
			else
			{
				out << "auto ";
			}
		}
		else
		{
			out << "auto ";
		}
		
		out << id << " = ";
		currentType = symbolTable[id];
		if (first)
		{
			printInitializerClause(ctx->initializerClause());
		}
		else
		{
			printIdentifier(ids[0]);
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
			//isArray = t->arrayDeclarator();
			currentType = t->getText();
		}
		else
		{
			out << "auto";
		}

		out << " ";
		printIdentifier(ctx->Identifier());
		//if (isArray) printArrayDeclarator(ctx->theTypeId()->arrayDeclarator());
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
		out << "decltype(auto) "; printIdentifier(ctx->Identifier());out << " = ";
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
		out << "using "; printIdentifier(ctx->Identifier()); out << " = ";
		printTypeId(ctx->theTypeId());
		out << ";";
	}
}

void CppAdvanceCodegen::printAssertDeclaration(CppAdvanceParser::AssertDeclarationContext* ctx) const
{
	if (ctx->Static())
	{
		out << "static_assert(";
		printConstantExpression(ctx->constantExpression());
		out << ", " << ctx->StringLiteral()->getText() << ");";
	}
	else
	{
		out << "ADV_ASSERT((";
		printConditionalExpression(ctx->conditionalExpression(0));
		out << "), ";
		if (ctx->conditionalExpression().size() > 1)
		{
            printConditionalExpression(ctx->conditionalExpression(1));
		}
		else
		{
			out << 'u' << '"' << ctx->conditionalExpression(0)->getText() << '"';
		}
		out << ");";
	}
}

void CppAdvanceCodegen::printUnitTestDeclaration(CppAdvanceParser::UnitTestDeclarationContext* ctx) const
{
	if (!UnitTestMode) return;
	isUnitTestBody = true;
	functionBody = true;
	out.switchTo(false);
	out << "#ifdef ADV_UNITTEST\n" << std::string(depth, '\t');
	out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth,'\t');
	out << "static bool " << sema.getUnitTestId(ctx) << " = []()";
	printCompoundStatement(ctx->compoundStatement());
	out << "();\n" << std::string(depth, '\t');
	out << "#endif" << std::string(depth, '\t');
	functionBody = false;
	isUnitTestBody = false;
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
	if (ctx->assignmentOperator())
	{
		currentAssignment = ctx;
	}
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
		else if (ctx->assignmentOperator()->DoubleStarAssign())
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_mul_mul_eq)(";
			printLogicalOrExpression(ctx->logicalOrExpression());
			out << ", ";
			paren = true;
		}
		else if (ctx->assignmentOperator()->SignedRightShiftAssign())
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_gt_gt_gt_eq)(";
			printLogicalOrExpression(ctx->logicalOrExpression());
			out << ", ";
			paren = true;
		}
		else if (ctx->assignmentOperator()->TildeAssign())
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_not_eq)(";
			printLogicalOrExpression(ctx->logicalOrExpression());
			out << ", ";
			paren = true;
		}
		else if (ctx->assignmentOperator()->Op1())
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(" << sema.getCustomOperatorName(ctx->assignmentOperator()->Op1()->getText()) << ")(";
			printLogicalOrExpression(ctx->logicalOrExpression());
			out << ", ";
			paren = true;
		}
		else {
			printLogicalOrExpression(ctx->logicalOrExpression());
			printAssignmentOperator(ctx->assignmentOperator());
		}
		lvalue = false; 
		printInitializerClause(ctx->initializerClause());
		if (paren) out << ")";
		if (ctx->assignmentOperator()->DoubleQuestionAssign()) out << "; })";
		isAssignment = false;
	}
	currentAssignment = nullptr;
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
	else if (ctx->DoubleQuestionAssign())
	{
		out << ".assignIfNull([&]() FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { return ";
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
		out << "CppAdvance::Out(&"; printIdentifier(ctx->Identifier()); out << ")";
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
	if (ctx->assignmentExpression())
	{
		if (!ctx->expr())
		{
			out << "CppAdvance::ElvisOperator(";
			printNullCoalescingExpression(ctx->nullCoalescingExpression());
			out << ", [&]() FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { return ";
			printAssignmentExpression(ctx->assignmentExpression());
			out << "; })";
		}
		else
		{
			printNullCoalescingExpression(ctx->nullCoalescingExpression());
			out << " ? ";
			printExpression(ctx->expr());
			out << " : ";
			printAssignmentExpression(ctx->assignmentExpression());
		}
	}
	else
	{
		printNullCoalescingExpression(ctx->nullCoalescingExpression());
	}
}

void CppAdvanceCodegen::printNullCoalescingExpression(CppAdvanceParser::NullCoalescingExpressionContext* ctx) const
{
	lvalue = false;
	printLogicalOrExpression(ctx->logicalOrExpression());
	auto expressions = ctx->nullCoalescingBranch();
	for (auto orExpr : expressions)
	{
		out << ".valueOr([&]() FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ";
		if (auto expr = orExpr->logicalOrExpression())
		{
			out << "return ";
			printLogicalOrExpression(expr);
		}
		else
		{
			printThrowExpression(orExpr->throwExpression());
			out << "; return *(";
			printLogicalOrExpression(ctx->logicalOrExpression());
			out << ")";
		}
	}
	for (int i = 0; i < expressions.size(); ++i)
	{
		out << "; })";
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
	if (ctx->exclusiveOrExpression())
	{
		printExclusiveOrExpression(ctx->exclusiveOrExpression());
	}
	else if (ctx->VertLine())
	{
		printInclusiveOrExpression(ctx->inclusiveOrExpression(0));
        out << " | ";
        printInclusiveOrExpression(ctx->inclusiveOrExpression(1));
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op2()->getText()) << ")(";
		printInclusiveOrExpression(ctx->inclusiveOrExpression(0));
		out << ", ";
        printInclusiveOrExpression(ctx->inclusiveOrExpression(1));
		out << ")";
	}
}

void CppAdvanceCodegen::printExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext* ctx) const
{
	if (ctx->andExpression())
	{
		printAndExpression(ctx->andExpression());
	}
	else if (ctx->Caret())
	{
		printExclusiveOrExpression(ctx->exclusiveOrExpression(0));
		out << " ^ ";
		printExclusiveOrExpression(ctx->exclusiveOrExpression(1));
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op3()->getText()) << ")(";
		printExclusiveOrExpression(ctx->exclusiveOrExpression(0));
		out << ", ";
		printExclusiveOrExpression(ctx->exclusiveOrExpression(1));
		out << ")";
	}
}

void CppAdvanceCodegen::printAndExpression(CppAdvanceParser::AndExpressionContext* ctx) const
{
	if (ctx->equalityExpression())
	{
		printEqualityExpression(ctx->equalityExpression());
	}
	else if (ctx->Amp())
	{
		printAndExpression(ctx->andExpression(0));
		out << " & ";
		printAndExpression(ctx->andExpression(1));
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op4()->getText()) << ")(";
		printAndExpression(ctx->andExpression(0));
		out << ", ";
		printAndExpression(ctx->andExpression(1));
		out << ")";
	}
}

void CppAdvanceCodegen::printEqualityExpression(CppAdvanceParser::EqualityExpressionContext* ctx) const
{
	if (ctx->relationalExpression())
	{
		printRelationalExpression(ctx->relationalExpression());
	}
	else if (ctx->Equal())
	{
		printEqualityExpression(ctx->equalityExpression(0));
		out << " == ";
		currentEquality = ctx;
		printEqualityExpression(ctx->equalityExpression(1));
	}
	else if (ctx->NotEqual())
	{
		printEqualityExpression(ctx->equalityExpression(0));
		out << " != ";
		currentEquality = ctx;
		printEqualityExpression(ctx->equalityExpression(1));
	}
	else if (ctx->IdentityEqual())
	{
		out << "CppAdvance::IdentityEquals(";
		printEqualityExpression(ctx->equalityExpression(0));
		out << ", ";
		currentEquality = ctx;
		printEqualityExpression(ctx->equalityExpression(1));
		out << ")";
	}
	else if (ctx->NotIdentityEqual())
	{
		out << "!CppAdvance::IdentityEquals(";
		printEqualityExpression(ctx->equalityExpression(0));
		out << ", ";
		currentEquality = ctx;
		printEqualityExpression(ctx->equalityExpression(1));
		out << ")";
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op5()->getText()) << ")(";
		printEqualityExpression(ctx->equalityExpression(0));
		out << ", ";
		currentEquality = ctx;
		printEqualityExpression(ctx->equalityExpression(1));
		out << ")";
	}
	currentEquality = nullptr;
}

void CppAdvanceCodegen::printRelationalExpression(CppAdvanceParser::RelationalExpressionContext* ctx) const
{
	if (ctx->threeWayComparisonExpression())
	{
		if (ctx->As())
		{
			out << "CppAdvance::Cast<";
			if (ctx->Question())
			{
				out << "false";
			}
			else
			{
				out << "true";
			}
			out << ", ";
			printTypeId(ctx->theTypeId());
			out << ">(";
			printThreeWayComparisonExpression(ctx->threeWayComparisonExpression());
			out << ")";
		}
		else if (ctx->Is())
		{
			bool skipFirst = false;
			currentIs = ctx;
			std::string tmpName;
			out << "(";
			if (isCondition && currentIf && sema.ifPrerequisites.contains(currentIf))
			{
				auto patterns = sema.ifPrerequisites[currentIf];
				auto it = std::find(patterns.begin(), patterns.end(), ctx);
				if (it != patterns.end())
				{
					auto pattern = (*it)->patternList()->pattern(0);
					if (!(pattern->shiftExpression() && pattern->shiftExpression()->getText() == "null"))
					{
						if (pattern->not_()) out << "!";
						tmpName = "__tmp" + std::to_string (it - patterns.begin());
						out << tmpName << ".isValid()";
						if (!(pattern->Let() && !pattern->shiftExpression()) && (!pattern->theTypeId() || !pattern->propertyPattern().empty()))
						{
							if (pattern->not_())
							{
								out << " || ";
							}
							else {
								out << " && ";
							}
						}
						else
						{
							skipFirst = true;
						}
					}
				}
			}
			printPatternList(ctx->patternList(), ctx->threeWayComparisonExpression(), tmpName, "", false, false, skipFirst);
			
			out << ")";
			currentIs = nullptr;
		}
		else
		{
			printThreeWayComparisonExpression(ctx->threeWayComparisonExpression());
		}
	}
	else if (ctx->Greater())
	{
		printRelationalExpression(ctx->relationalExpression(0));
		out << " > ";
		printRelationalExpression(ctx->relationalExpression(1));
	}
	else if (ctx->Less())
	{
		printRelationalExpression(ctx->relationalExpression(0));
		out << " < ";
		printRelationalExpression(ctx->relationalExpression(1));
	}
	else if (ctx->GreaterEqual())
	{
		printRelationalExpression(ctx->relationalExpression(0));
		out << " >= ";
		printRelationalExpression(ctx->relationalExpression(1));
	}
	else if (ctx->LessEqual())
	{
		printRelationalExpression(ctx->relationalExpression(0));
		out << " <= ";
		printRelationalExpression(ctx->relationalExpression(1));
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op6()->getText()) << ")(";
		printRelationalExpression(ctx->relationalExpression(0));
		out << ", ";
		printRelationalExpression(ctx->relationalExpression(1));
		out << ")";
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

void CppAdvanceCodegen::printPatternList(CppAdvanceParser::PatternListContext* ctx, CppAdvanceParser::ThreeWayComparisonExpressionContext* leftExpr,
	std::string_view tmpName, std::string_view propertyName, bool isDeconstruction, bool isIndex, bool skipFirst) const
{
	static int contextIndex = 0;
	int i = 0;
	for (auto pattern : ctx->pattern()) {
		if (i == 0 && skipFirst) {
			if (!switchProcessedVariants.empty())
			{
				switchProcessedVariants.top().second++;
			}
			++i;  continue;
		}
		if (pattern->theTypeId() && pattern->theTypeId()->getText() == "_")
		{
			out << "true";
			++i;  continue;
		}
		if (i > 0) {
			auto op = ctx->patternCombinationOperator(i - 1);
			if (op->And())
			{
				out << " && ";
			}
			else if (op->Or())
			{
				out << " || ";
			}
		}
		if (pattern->not_())
		{
			out << "!";
		}
		if (pattern->LeftBrace() || pattern->LeftBracket())
		{
			out << "(";
			bool first = true;
			contextIndex = 0;
			for (auto subpatterns : pattern->patternList())
			{
				if (!first) {
					out << "\n" << std::string(depth + 1, '\t') << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"";
					out << "\n" << std::string(depth + 1, '\t') << " && ";
				}
				first = false;
				out << "(";
				if (pattern->LeftBrace())
				{
					printPatternList(subpatterns, leftExpr, tmpName, "", true);
				}
				else
				{
					printPatternList(subpatterns, leftExpr, tmpName, "", false, true);
				}
				contextIndex++;
				
				out << ")";
			}
			contextIndex = 0;
			first = true;
			for (auto subpatterns : pattern->propertyPattern())
			{
				if (!first) {
					out << "\n" << std::string(depth + 1, '\t') << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"";
					out << "\n" << std::string(depth + 1, '\t') << " && ";
				}
				first = false;
				out << "(";
				printPatternList(subpatterns->patternList(), leftExpr, tmpName, subpatterns->Identifier()->getText());
				out << ")";
			}
			out << ")";
		}
		else {
			out << "CppAdvance::Is";
			if (auto type = pattern->theTypeId())
			{
				out << "<typename ";
				printTypeId(type);
				out << ">(";
				if (isDeconstruction)
				{
					out << "get<" << contextIndex << ">";
				}
				else if (!propertyName.empty())
				{
					out << "ADV_UPCS(" << propertyName << ")";
				}
				if (isDeconstruction || isIndex || !propertyName.empty())
				{
					out << "(";
				}
				printThreeWayComparisonExpression(leftExpr);
				if (isDeconstruction || isIndex)
				{
					out << ")";
				}
				else if (!switchProcessedVariants.empty())
				{
					switchProcessedVariants.top().second++;
				}
				if (isIndex)
				{
					out << "[" << contextIndex << "]";
				}
				else if (!propertyName.empty()) {
					out << ").__ref()";
				}
				out << ")";
			}
			else if (auto expr = pattern->shiftExpression())
			{
				if (pattern->Let())
				{
					out << "<typename ";
					printShiftExpression(expr);
					out << ">(";
					if (isDeconstruction)
					{
						out << "get<" << contextIndex << ">";
					}
					else if (!propertyName.empty())
					{
						out << "ADV_UPCS(" << propertyName << ")";
					}
					if (isDeconstruction || isIndex || !propertyName.empty())
					{
						out << "(";
					}
					printThreeWayComparisonExpression(leftExpr);
					if (isDeconstruction || isIndex)
					{
						out << ")";
					}
					if (isIndex)
					{
						out << "[" << contextIndex << "]";
					}
					else if (!propertyName.empty()) {
						out << ").__ref()";
					}
					out << ")";
				}
				else {
					if (pattern->Greater())
					{
						out << "Greater";
					}
					else if (pattern->GreaterEqual())
					{
						out << "GreaterOrEqual";
					}
					else if (pattern->Less())
					{
						out << "Less";
					}
					else if (pattern->LessEqual())
					{
						out << "LessOrEqual";
					}
					out << "(";
					
					if (isDeconstruction)
					{
						out << "get<" << contextIndex << ">";
					}
					else if (!propertyName.empty())
					{
						out << "ADV_UPCS(" << propertyName << ")";
					}
					if (isDeconstruction || isIndex || !propertyName.empty())
					{
						out << "(";
					}
					if (!tmpName.empty())
					{
						out << "*" << tmpName;
					}
					else {
						printThreeWayComparisonExpression(leftExpr);
					}
					if (isDeconstruction || isIndex)
					{
						out << ")";
					}
					if (isIndex)
					{
						out << "[" << contextIndex << "]";
					}
					else if (!propertyName.empty()) {
						out << ")";
						if (tmpName.empty())
						{
							out << ".__ref()";
						}
					}
					out << ", ";
					printShiftExpression(expr);
					out << ")";
				}
			}
		}
		++i;
	}
}

void CppAdvanceCodegen::printShiftExpression(CppAdvanceParser::ShiftExpressionContext* ctx) const
{
	if (ctx->additiveExpression())
	{
		printAdditiveExpression(ctx->additiveExpression());
	}
	else if (!ctx->shiftOperator()->Greater().empty())
	{
		if (ctx->shiftOperator()->Greater().size() == 2)
		{
			printShiftExpression(ctx->shiftExpression(0));
			out << " >> ";
			printShiftExpression(ctx->shiftExpression(1));
		}
		else
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_gt_gt_gt)(";
			printShiftExpression(ctx->shiftExpression(0));
			out << ", ";
			printShiftExpression(ctx->shiftExpression(1));
			out << ")";
		}
	}
	else if (!ctx->shiftOperator()->Less().empty())
	{
		printShiftExpression(ctx->shiftExpression(0));
		out << " << ";
		printShiftExpression(ctx->shiftExpression(1));
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->shiftOperator()->Op7()->getText()) << ")(";
		printShiftExpression(ctx->shiftExpression(0));
		out << ", ";
		printShiftExpression(ctx->shiftExpression(1));
		out << ")";
	}
}

void CppAdvanceCodegen::printAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext* ctx) const
{
	if (ctx->multiplicativeExpression())
	{
		printMultiplicativeExpression(ctx->multiplicativeExpression());
	}
	else if (ctx->Plus())
	{
		printAdditiveExpression(ctx->additiveExpression(0));
		out << " + ";
		printAdditiveExpression(ctx->additiveExpression(1));
	}
	else if (ctx->Minus())
	{
		printAdditiveExpression(ctx->additiveExpression(0));
		out << " - ";
		printAdditiveExpression(ctx->additiveExpression(1));
	}
	else if (ctx->Tilde())
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(_operator_not)(";
		printAdditiveExpression(ctx->additiveExpression(0));
		out << ", ";
		printAdditiveExpression(ctx->additiveExpression(1));
		out << ")";
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op8()->getText()) << ")(";
		printAdditiveExpression(ctx->additiveExpression(0));
		out << ", ";
		printAdditiveExpression(ctx->additiveExpression(1));
		out << ")";
	}
}

void CppAdvanceCodegen::printMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext* ctx) const
{
	if (ctx->powerExpression())
	{
		printPowerExpression(ctx->powerExpression());
	}
	else if (ctx->Star())
	{
		printMultiplicativeExpression(ctx->multiplicativeExpression(0));
		out << " * ";
		printMultiplicativeExpression(ctx->multiplicativeExpression(1));
	}
	else if (ctx->Div())
	{
		printMultiplicativeExpression(ctx->multiplicativeExpression(0));
		out << " / ";
		printMultiplicativeExpression(ctx->multiplicativeExpression(1));
	}
	else if (ctx->Mod())
	{
		printMultiplicativeExpression(ctx->multiplicativeExpression(0));
		out << " % ";
		printMultiplicativeExpression(ctx->multiplicativeExpression(1));
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op9()->getText()) << ")(";
		printMultiplicativeExpression(ctx->multiplicativeExpression(0));
		out << ", ";
		printMultiplicativeExpression(ctx->multiplicativeExpression(1));
		out << ")";
	}
}

void CppAdvanceCodegen::printPowerExpression(CppAdvanceParser::PowerExpressionContext* ctx) const
{
	if (ctx->switchExpression())
	{
		printSwitchExpression(ctx->switchExpression());
	}
	else if (ctx->DoubleStar())
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(_operator_mul_mul)(";
		printPowerExpression(ctx->powerExpression(0));
		out << ", ";
		printPowerExpression(ctx->powerExpression(1));
		out << ")";
	}
	else if (ctx->DoubleCaret())
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(_operator_xor_xor)(";
		printPowerExpression(ctx->powerExpression(0));
		out << ", ";
		printPowerExpression(ctx->powerExpression(1));
		out << ")";
	}
	else
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->Op10()->getText()) << ")(";
		printPowerExpression(ctx->powerExpression(0));
		out << ", ";
		printPowerExpression(ctx->powerExpression(1));
		out << ")";
	}
}

void CppAdvanceCodegen::printSwitchExpression(CppAdvanceParser::SwitchExpressionContext* ctx) const
{
	if (ctx->rangeExpression())
	{
		printRangeExpression(ctx->rangeExpression());
	}
	else
	{
		switchExpressions.push(ctx);
		switchProcessedVariants.push({ 0,0 });
		int i = 0;
		out << "[";
		if (functionBody) out << "&";
		out << "]() ";
		if (ctx->Arrow())
		{
			out << "-> ";
			printTypeId(ctx->theTypeId());
			out << " ";
		}
		out << "\nADV_WARNING_DISABLE(4715, -Wreturn-type)\n" << std::string(depth, '\t');

		for (auto branch : ctx->switchExpressionBranch())
		{
			printSwitchExpressionBranch(branch, ctx->threeWayComparisonExpression(), i++);
		}
		if (ctx->switchExpressionBranch().back()->patternList()->getText() != "_")
		{
			out << " else { using __switchType = decltype(";
			printThreeWayComparisonExpression(ctx->threeWayComparisonExpression());
			out << "); static_assert((!std::derived_from<__switchType, CppAdvance::Enum> &&"
				<< " !std::derived_from<__switchType, CppAdvance::EnumClassRef> && !std::derived_from<__switchType, CppAdvance::Union>) "
				<< "|| CppAdvance::GetVariantsCount<__switchType>() <= "
				<< switchProcessedVariants.top().first + switchProcessedVariants.top().second << ", "
				<< "\"Switch does not handle all possible variants, add a default branch\"); }";
		}
		out << "\n";
		for (auto branch : ctx->switchExpressionBranch())
		{
			out << std::string(--depth, '\t') << "}\n";
		}
		out << "ADV_WARNING_POP\n" << std::string(depth, '\t') << "()";
		switchProcessedVariants.pop();
		switchExpressions.pop();
	}
}

void CppAdvanceCodegen::printSwitchExpressionBranch(CppAdvanceParser::SwitchExpressionBranchContext* ctx,
	CppAdvanceParser::ThreeWayComparisonExpressionContext* switchExpr, int branchIndex) const
{
	if (branchIndex > 0) out << "else ";
	out << "{\n" << std::string(++depth, '\t');
	auto tmpName = "__tmp__valid_" + std::to_string(switchExpr->getStart()->getLine());
	auto pattern = ctx->patternList()->pattern(0);
	if (branchIndex == 0)
	{
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "auto " << tmpName << " = CppAdvance::Cast<false, ";
		out << "decltype(";
		printThreeWayComparisonExpression(switchExpr);
		out << ")::__self";
		out << ">(";
		printThreeWayComparisonExpression(switchExpr);
		out << ");\n" << std::string(depth, '\t');
	}

	auto isDefault = ctx->patternList()->getText() == "_";
	if (pattern->theTypeId() && !isDefault || pattern->shiftExpression() && pattern->Let()) {
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		tmpName = "__tmp" + std::to_string(branchIndex);
		out << "auto " << tmpName << " = CppAdvance::Cast<false, ";
		if (pattern->theTypeId())
		{
			printTypeId(pattern->theTypeId());
		}
		else if (pattern->shiftExpression())
		{
			printShiftExpression(pattern->shiftExpression());
		}
		out << ">(";
		printThreeWayComparisonExpression(switchExpr);
		out << ");\n" << std::string(depth, '\t');
	}

	if (!isDefault)
	{
		out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
		out << "if(";
		bool skipFirst = false;
		bool isNull = pattern->shiftExpression() && pattern->shiftExpression()->getText() == "null";
		if (!isNull)
		{
			if (pattern->not_()) out << "!";
			out << tmpName << ".isValid()";
			if (!(pattern->Let() && !pattern->shiftExpression()) && (!pattern->theTypeId() || !pattern->propertyPattern().empty()))
			{
				if (pattern->not_())
				{
					out << " || ";
				}
				else {
					out << " && ";
				}
			}
			else
			{
				skipFirst = true;
			}
		}
		printPatternList(ctx->patternList(), switchExpr, !isNull ? tmpName : "", "", false, false, skipFirst);
		out << ") {\n" << std::string(++depth, '\t');
		if (!isNull && !pattern->not_() || isNull && pattern->not_()) {
			if (pattern->Let())
			{
				out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
				out << "const auto& [";
				bool first = true;
				for (auto id : pattern->Identifier())
				{
					if (!first) out << ", ";
					first = false;
					printIdentifier(id);
				}
				out << "] = ";
				out << "*" << tmpName << "; \n" << std::string(depth, '\t');
			}
			else if (pattern->theTypeId() && !pattern->Identifier().empty())
			{
				out << "const auto& ";
				printIdentifier(pattern->Identifier(0));
				out << " = *" << tmpName;
				out << ";\n" << std::string(depth, '\t');
			}
			else {
				auto txt = switchExpr->getText();
				if (std::all_of(txt.begin(), txt.end(), [](char c) { return std::isalnum(c) || c == '_'; }))
				{
					out << "#line " << ctx->getStart()->getLine() << " \"" << filename << ".adv\"\n" << std::string(depth, '\t');
					if (isNull)
					{
						out << "auto " << tmpName << " = *" << txt << "; ";
					}
					out << "const auto& " << txt << " = ";
					if (!isNull) out << "*";
					out << tmpName;
					out << ";\n" << std::string(depth, '\t');
				}
			}
		}
		if (!ctx->expr()->assignmentExpression()->throwExpression())
		{
			out << "return ";
		}
		printExpression(ctx->expr());
		out << ";\n" << std::string(--depth, '\t') << "}";
	}
	else {
		if (!ctx->expr()->assignmentExpression()->throwExpression())
		{
			out << "return ";
		}
		printExpression(ctx->expr());
		out << ";";
	}
	out << "\n" << std::string(depth, '\t');
}

void CppAdvanceCodegen::printRangeExpression(CppAdvanceParser::RangeExpressionContext* ctx) const
{
	if (ctx->DoubleDot() || ctx->DoubleDotEqual())
	{
		out << "Range(";
		if (ctx->rangeExpressionStart())
		{
			printUnaryExpression(ctx->rangeExpressionStart()->unaryExpression());
		}
		else
		{
			out << "0";
		}
		out << ", ";
		if (ctx->rangeExpressionEnd())
		{
			printUnaryExpression(ctx->rangeExpressionEnd()->unaryExpression());
		}
		else
		{
			out << "Index(0, true)";
		}
		out << ", ";
        out << (ctx->DoubleDot() ? "false" : "true");
		out << ")";
	}
	else
	{
		printUnaryExpression(ctx->unaryExpression());
	}
}

void CppAdvanceCodegen::printUnaryExpression(CppAdvanceParser::UnaryExpressionContext* ctx) const
{
	unaryExpressions.push(ctx);
	bool paren = false;
	if (auto upo = ctx->unaryPrefixOperator())
	{
		literalMinus = upo->Minus();
		if (upo->Plus()) {
			out << "+";
		}
		else if (upo->Tilde()) {
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_not)(";
			paren = true;
		}
		else if (upo->not_()) {
			out << "!";
		}
		else if (upo->Dollar())
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_dollar)(";
			paren = true;
		}
		else if (upo->Caret())
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_xor)(";
			paren = true;
		}
		else if (upo->DoubleCaret())
		{
			std::string ufcs = "ADV_UFCS";
			if (!functionBody) ufcs += "_NONLOCAL";
			out << ufcs << "(_operator_xor_xor)(";
			paren = true;
		}
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
		paren = true;
	}
	else if (ctx->refCaptureOperator())
	{
		out << "CppAdvance::MutableRef<std::remove_cvref_t<decltype(";
		printUnaryExpressionTail(ctx->unaryExpressionTail());
		out << ")>>(";
		paren = true;
	}
	else if (ctx->Out())
	{
		isOutExpression = true;
		out << "CppAdvance::Out(&";
		paren = true;
	}
	else if (ctx->unaryCustomOperator())
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->unaryCustomOperator()->getText()) << ")(";
		paren = true;
	}
	printUnaryExpressionTail(ctx->unaryExpressionTail());	
	if (!lvalue && sema.optionalChains.contains(ctx))
	{
		for (int i = 0; i < sema.optionalChains[ctx]; ++i)
		{
			out << "); })";
		}
	}
	if (paren) out << ")";
	isOutExpression = false;
	
	unaryExpressions.pop();
	literalMinus = false;
}

void CppAdvanceCodegen::printUnaryExpressionTail(CppAdvanceParser::UnaryExpressionTailContext* ctx) const
{
	if (auto postfix = ctx->fullPostfixExpression())
	{
		printFullPostfixExpression(postfix);
	}
	else if (ctx->Sizeof())
	{
		out << "CppAdvance::usize(sizeof";
		if (ctx->Ellipsis()) out << "...";
		out << "(";
		if (ctx->theTypeId()) printTypeId(ctx->theTypeId());
		if (ctx->Identifier()) printIdentifier(ctx->Identifier());
		out << "))";
	}
	else if (ctx->Alignof())
	{
		if (!isAlignas)
		{
			out << "CppAdvance::usize(";
		}
		out << "alignof(";
		printTypeId(ctx->theTypeId());
		if (!isAlignas)
		{
			out << ")";
		}
		out << ")";
	}
}

void CppAdvanceCodegen::printNewExpression(CppAdvanceParser::NewExpressionContext* ctx) const
{
	if (auto mem = ctx->memorySpaceSetter())
	{
		out << "CppAdvance::NewWithExtraMemory<(unsigned)";
		printConstantExpression(mem->constantExpression());
		out << ", ";
	}
	else
	{
		out << "CppAdvance::New<";
	}
	
	printTypeId(ctx->theTypeId());
	out << ">(";
	if (auto init = ctx->newInitializer())
	{
		printClassInitializer(ctx->theTypeId(), init);
	}
	out << ")";
}

void CppAdvanceCodegen::printStackallocExpression(CppAdvanceParser::StackallocExpressionContext* ctx) const
{
	out << GetStackObjectVarName(ctx->theTypeId());
}


void CppAdvanceCodegen::printFullPostfixExpression(CppAdvanceParser::FullPostfixExpressionContext* ctx) const
{
	if (ctx->PlusPlus())
	{
		printPostfixExpression(ctx->postfixExpression());
		out << "++";
	}
	else if (ctx->MinusMinus())
	{
		printPostfixExpression(ctx->postfixExpression());
		out << "--";
	}
	else if (ctx->unaryCustomOperator())
	{
		std::string ufcs = "ADV_UFCS";
		if (!functionBody) ufcs += "_NONLOCAL";
		out << ufcs << "(" << sema.getCustomOperatorName(ctx->unaryCustomOperator()->getText()) << "_postfix)(";
		printPostfixExpression(ctx->postfixExpression());
		out << ")";
	}
	else {
		printPostfixExpression(ctx->postfixExpression());
	}
}

void CppAdvanceCodegen::printPostfixExpression(CppAdvanceParser::PostfixExpressionContext* ctx) const
{
	if (ignoredExpressions.contains(ctx)) return;
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
					functionCallExpressions.insert(expr->idExpression());
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

					if (!sema.cppParser.namespaces.contains(left) && funcname != currentDeclarationName && !expr->Greater() && left != "super")
					{
						std::string ufcs = "ADV_UFCS";
						if (tpl) ufcs += "_TEMPLATE";
						if (!functionBody) ufcs += "_NONLOCAL";
						if (sema.typeset.contains(left))
						{
							StringReplace(ufcs, "UFCS", "USFCS");
							out << ufcs << "((";
							printPostfixExpression(expr->postfixExpression());
							out << "), ";
							printIdExpression(expr->idExpression());
							out << ")(";
						}
						else {
							if (sema.optionalChains.contains(expr->postfixExpression()))
							{
								if (expr->Question())
								{
									if (!ignoredExpressions.contains(expr->postfixExpression())) {
										printPostfixExpression(expr->postfixExpression());
										out << ".andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(";
									}
									out << ufcs << "(";
									printIdExpression(expr->idExpression());
									out << ")(value.__ref()";
								}
								else
								{
									auto innerExpr = expr;
									while (innerExpr && !innerExpr->Question())
									{
										innerExpr = innerExpr->postfixExpression();
									}
									innerExpr = innerExpr->postfixExpression();
									if (!ignoredExpressions.contains(innerExpr))
									{
										printPostfixExpression(innerExpr);
										ignoredExpressions.insert(innerExpr);
										out << ".andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(";
									}

									out << ufcs << "(";
									printIdExpression(expr->idExpression());
									out << ")(";
									printPostfixExpression(expr->postfixExpression());
									out << ".__ref()";
								}
							}
							else
							{
								out << ufcs << "(";
								printIdExpression(expr->idExpression());
								out << ")(";
								printPostfixExpression(expr->postfixExpression());
								out << ".__ref()";
							}

							if (ctx->expressionList()) out << ", ";
						}
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
		const std::string funcname = "_operator_subscript";
		std::string ufcs = "ADV_UFCS";
        if (!functionBody) ufcs += "_NONLOCAL";

		if (sema.optionalChains.contains(ctx->postfixExpression()))
		{
			if (ctx->Question())
			{
				if (!ignoredExpressions.contains(ctx->postfixExpression())) {
					printPostfixExpression(ctx->postfixExpression());
					out << ".andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(";
				}
				out << ufcs << "(" << funcname << ")(value.__ref(), ";
			}
			else
			{
				auto innerExpr = ctx->postfixExpression();
				while (innerExpr && !innerExpr->Question())
				{
					innerExpr = innerExpr->postfixExpression();
				}
				innerExpr = innerExpr->postfixExpression();
				if (!ignoredExpressions.contains(innerExpr))
				{
					printPostfixExpression(innerExpr);
					ignoredExpressions.insert(innerExpr);
					out << ".andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(";
				}

				out << ufcs << "(" << funcname << ")(";
				printPostfixExpression(ctx->postfixExpression());
				out << ".__ref(), ";
			}
		}
		else
		{
			out << ufcs << "(" << funcname << ")(";
			printPostfixExpression(ctx->postfixExpression());
			out << ".__ref(), ";
		}

		if (ctx->attributeSpecifierSeq())
		{
			auto attr = ctx->attributeSpecifierSeq()->attributeSpecifier(0)->Identifier()->getText();
			if (attr == "Unchecked")
			{
				out << "CppAdvance::UncheckedTag{}, ";
			}
		}
		printExpressionList(ctx->expressionList());
		out << ")";
	}
	else if (ctx->Dot())
	{
		if (auto literal = ctx->IntegerLiteral())
		{
			out << "std::get<" << literal->getText() << ">(";
			printPostfixExpression(ctx->postfixExpression());
			out << ")";
		}
		else if (ctx->Type())
		{
			printSimpleTypeSpecifier(ctx->simpleTypeSpecifier());
			out << "::__static_getType()";
		}
		else {
			auto txt = ctx->getText();
			auto dotpos = txt.rfind('.');
			auto tplpos = txt.rfind('<');
			std::string upcs = "ADV_UPCS";
			if (!functionBody) upcs += "_NONLOCAL";
			auto expr = ctx->postfixExpression();
			if (dotpos != txt.npos && tplpos != txt.npos && dotpos < tplpos || dotpos == txt.npos && tplpos != txt.npos) txt = txt.substr(0, tplpos);
			if (sema.typeset.contains(txt))
			{
				StringReplace(txt, ".", "::");
				if (sema.protectedSymbols.contains(txt)) txt = "__" + filename + "_Protected::" + txt;
				out << txt;
			}
			else if (sema.optionalChains.contains(expr))
			{
				if (ctx->Question())
				{
					if (lvalue)
					{
						if (!ctx->Greater() && !functionCallExpressions.contains(ctx->idExpression())) {
							out << upcs << "(";
							printIdExpression(ctx->idExpression());
							out << ")(";
							printPostfixExpression(ctx->postfixExpression());
							out << ".operator*().__ref())";
						}
						else {
							printPostfixExpression(ctx->postfixExpression());
							out << ".operator*().__ref().";
							printIdExpression(ctx->idExpression());
						}
					}
					else if (!functionCallExpressions.contains(ctx->idExpression())) {
						if (!ignoredExpressions.contains(expr)) {
							printPostfixExpression(expr);
							out << ".andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(";
						}
						if (!ctx->Greater()) {
							out << upcs << "(";
							printIdExpression(ctx->idExpression());
							out << ")(value.__ref())";
						}
						else
						{
							out << "value.__ref().";
							printIdExpression(ctx->idExpression());
						}
					} else
					{
						if (!ignoredExpressions.contains(expr))
						{
							printPostfixExpression(expr);
							out << ".andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(value.__ref().";
						}
						else
						{
							out << "value.__ref().";
						}
					}
				}
				else if (!functionCallExpressions.contains(ctx->idExpression()))
				{
					if (!ctx->Greater()) {
						auto innerExpr = expr;
						while (innerExpr && !innerExpr->Question())
						{
							innerExpr = innerExpr->postfixExpression();
						}
						innerExpr = innerExpr->postfixExpression();
						if (!ignoredExpressions.contains(innerExpr))
						{
							printPostfixExpression(innerExpr);
							ignoredExpressions.insert(innerExpr);
							out << ".andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(";
						}

						out << upcs << "(";
						printIdExpression(ctx->idExpression());
						out << ")(";
						printPostfixExpression(expr);
						out << ".__ref())";
					}
					else
					{
						printPostfixExpression(expr);
						out << ".__ref().";
						printIdExpression(ctx->idExpression());
					}
				}
			}
			else {
				txt = txt.substr(0, dotpos);
				dotpos = txt.rfind('.');
				tplpos = txt.rfind('<');
				auto txtName = txt;
				if (dotpos != txt.npos && tplpos != txt.npos && dotpos < tplpos || dotpos == txt.npos && tplpos != txt.npos) {
					txtName = txt.substr(0, tplpos);
				}
				
				if (sema.typeset.contains(txtName))
				{
					if (ctx->Greater() || txtName == "super")
					{
						printPostfixExpression(expr);
						out << "::";
						printIdExpression(ctx->idExpression());
					}
					else if (!functionCallExpressions.contains(ctx->idExpression()))
					{
						out << "ADV_USPCS(";
						printIdExpression(ctx->idExpression());
						out << ", ";
						printPostfixExpression(expr);
						out << ")()";
					}
				}
				else if (sema.cppParser.namespaces.contains(txtName))
				{
					printPostfixExpression(expr);
					out << "::";
					printIdExpression(ctx->idExpression());
				}
				else if (ctx->Greater())
				{
					printPostfixExpression(expr);
					out << ".__ref().";
					printIdExpression(ctx->idExpression());
				}
				else
				{
					out << upcs << "(";
					printIdExpression(ctx->idExpression());
					out << ")(";
					printPostfixExpression(expr);
					out << ".__ref())";
				}
			}
		}
		
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
		else if (op->Exclamation())
		{
			out << "*(";
			++parens;
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
	else if (ctx->newExpression())
	{
		printNewExpression(ctx->newExpression());
	}
	else if (ctx->stackallocExpression())
	{
		printStackallocExpression(ctx->stackallocExpression());
	}
}

void CppAdvanceCodegen::printPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext* ctx) const
{
	if (auto id = ctx->idExpression())
	{
		if (ctx->Doublecolon())
		{
			if (currentIs)
			{
				out << "decltype(";
				printThreeWayComparisonExpression(currentIs->threeWayComparisonExpression());
				out << ")";
			}
			else if (currentEquality && !currentEquality->equalityExpression().empty())
			{
				out << "decltype(";
				printEqualityExpression(currentEquality->equalityExpression(0));
				out << ")";
			}
			else if (!switchStatements.empty())
			{
				switchProcessedVariants.top().first++;
				out << "decltype(";
				printThreeWayComparisonExpression(switchStatements.top()->threeWayComparisonExpression());
				out << ")";
			}
			else if (!switchExpressions.empty())
			{
				switchProcessedVariants.top().first++;
				out << "decltype(";
				printThreeWayComparisonExpression(switchExpressions.top()->threeWayComparisonExpression());
				out << ")";
			}
			else if (currentDeclaration)
			{
				printTypeId(currentDeclaration->theTypeId());
			}
			else if (currentAssignment)
			{
				out << "decltype(";
				printLogicalOrExpression(currentAssignment->logicalOrExpression());
				out << ")";
			}
			out << "::";
		}
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
		out << "::";
		if (ctx->Identifier()) {
			printIdentifier(ctx->Identifier());
		}
		else
		{
			out << "__static_getType()";
		}
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
		if (isExtension || isLambda)
		{
			out << "__this";
		}
		else {
			out << "(*this)";
		}
	}
	else if (ctx->Super())
	{
		out << "___super";
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
	else if (ctx->lambdaExpression())
	{
		printLambdaExpression(ctx->lambdaExpression());
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

void CppAdvanceCodegen::printLambdaExpression(CppAdvanceParser::LambdaExpressionContext* ctx) const
{
	bool isMutable = false;
	out << '[';
	if (auto list = ctx->lambdaCaptureList())
	{
		auto clause = list->lambdaCaptureClause();
		if (clause->Assign())
		{
			out << '=';
		}
		bool first = !clause->Assign();
		for (auto capture : clause->capture())
		{
			if (!first) out << ", ";
			first = false;
			if (capture->This())
			{
				if (capture->Weak())
				{
					out << "__this = __self::__weak_ref(*this)";
				}
				else
				{
					out << "__this = __self(*this)";
				}
			}
			else
			{
				printIdentifier(capture->Identifier());
				out << " = ";
				printInitializerClause(capture->initializerClause());
			}
		}
		isMutable = list->Mutable();
	}
	out << "] ";
	if (ctx->templateParams())
	{
		printTemplateParams(ctx->templateParams());
		out << " ";
	}

	auto declarator = ctx->lambdaDeclarator();
	if (declarator->functionParams())
	{
		isFunctionDeclaration = true;
		printFunctionParameters(declarator->functionParams());
		isFunctionDeclaration = false;
		out << " ";
	}
	else if (declarator->Identifier())
	{
		out << "(const auto ";
		printIdentifier(declarator->Identifier());
		out << ") ";
	}

	if (isMutable)
	{
		out << "mutable ";
	}

	if (auto ret = declarator->returnType())
	{
		out << "-> ";
		if (ret->Forward())
		{
			out << "decltype(auto)";
		}
		else {
			if (ret->Const() || !ret->Ref())
			{
				out << "const ";
			}
			if (ret->theTypeId())
			{
				printTypeId(ret->theTypeId());
			}
			if (ret->Ref())
			{
				out << "&";
			}
		}
		out << " ";
	}

	auto prev = functionBody;
	auto prevLambda = isLambda;
	functionBody = true;
	isLambda = true;
	if (auto body = ctx->lambdaBody()->functionBody())
	{
		functionProlog = true;
		printFunctionBody(body);
	}
	else
	{
		out << "{ ADV_EXPRESSION_BODY(";
		printExpression(ctx->lambdaBody()->expr());
		out << "); }";
	}
	functionBody = prev;
	isLambda = prevLambda;
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
	if (!ctx->VertLine().empty())
	{
		out << "Union" << (ctx->VertLine().size() + 1) << "<";
		bool first = true;
		for (auto type : ctx->singleTypeId())
		{
			if (!first) out << ", ";
			first = false;
			printSingleTypeId(type);
		}
		out << ">";
	}
	else {
		printSingleTypeId(ctx->singleTypeId(0));
	}
}

void CppAdvanceCodegen::printSingleTypeId(CppAdvanceParser::SingleTypeIdContext* ctx) const
{
	int brackets = 0;
	if (auto post = ctx->typePostfix())
	{
		for (auto decl : post->arrayDeclarator())
		{
			if (decl->Question()) out << "CppAdvance::Nullable<";
			printArrayDeclarator(decl);
			brackets += 1 + bool(decl->Question());
		}
	}

	if (ctx->Question()) out << "CppAdvance::Nullable<";
	printTypeSpecifierSeq(ctx->typeSpecifierSeq());
	if (ctx->Question()) out << ">";

	out << std::string(brackets, '>');
}

void CppAdvanceCodegen::printTypePostfix(CppAdvanceParser::TypePostfixContext* ctx) const
{
	for (auto decl : ctx->arrayDeclarator())
	{
		printArrayDeclarator(decl);
	}
}

void CppAdvanceCodegen::printArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext* ctx) const
{
	if (ctx->constantExpression())
	{
		out << "CppAdvance::InlineArray<";
		printConstantExpression(ctx->constantExpression());
		out << ", ";
	}
	else
	{
		out << "CppAdvance::Array<";
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
		printIdentifier(ctx->Identifier());
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
			printIdentifier(ctx->Identifier());
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
			printIdentifier(ctx->Identifier());
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

constexpr std::uint32_t StringHash(const char* s, std::uint32_t hash = 2166136261U) {
	return (s[0] == '\0') ? hash : StringHash(s + 1, (hash ^ static_cast<std::uint32_t>(s[0])) * 16777619U);
}

void CppAdvanceCodegen::printIdentifier(antlr4::tree::TerminalNode* node) const
{
	static constexpr auto anonymousVar = StringHash("_");
	static constexpr auto and_eq_ = StringHash("and_eq");
	static constexpr auto asm_ = StringHash("asm");
	static constexpr auto auto_ = StringHash("auto");
	static constexpr auto bitand_ = StringHash("bitand");
	static constexpr auto bitor_ = StringHash("bitor");
	static constexpr auto char8t = StringHash("char8_t");
	static constexpr auto char16t = StringHash("char16_t");
	static constexpr auto char32t = StringHash("char32_t");
	static constexpr auto compl_ = StringHash("compl");
	static constexpr auto constexpr_ = StringHash("constexpr");
	static constexpr auto constinit_ = StringHash("constinit");
	static constexpr auto const_cast_ = StringHash("const_cast");
	static constexpr auto co_await_ = StringHash("co_await");
	static constexpr auto co_return_ = StringHash("co_return");
	static constexpr auto co_yield_ = StringHash("co_yield");
	static constexpr auto delete_ = StringHash("delete");
	static constexpr auto double_ = StringHash("double");
	static constexpr auto dynamic_cast_ = StringHash("dynamic_cast");
	static constexpr auto explicit_ = StringHash("explicit");
	static constexpr auto export_ = StringHash("export");
	static constexpr auto float_ = StringHash("float");
	static constexpr auto goto_ = StringHash("goto");
	static constexpr auto int_ = StringHash("int");
	static constexpr auto long_ = StringHash("long");
	static constexpr auto mutable_ = StringHash("mutable");
	static constexpr auto namespace_ = StringHash("namespace");
	static constexpr auto not_eq_ = StringHash("not_eq");
	static constexpr auto nullptr_ = StringHash("nullptr");
	static constexpr auto or_eq_ = StringHash("or_eq");
	static constexpr auto register_ = StringHash("register");
	static constexpr auto reinterpret_cast_ = StringHash("reinterpret_cast");
	static constexpr auto short_ = StringHash("short");
	static constexpr auto signed_ = StringHash("signed");
	static constexpr auto static_cast_ = StringHash("static_cast");
	static constexpr auto static_assert_ = StringHash("static_assert");
	static constexpr auto template_ = StringHash("template");
	static constexpr auto thread_local_ = StringHash("thread_local");
	static constexpr auto typedef_ = StringHash("typedef");
	static constexpr auto typeid_ = StringHash("typeid");
	static constexpr auto typename_ = StringHash("typename");
	static constexpr auto unsigned_ = StringHash("unsigned");
	static constexpr auto wchar_t_ = StringHash("wchar_t");
	static constexpr auto xor_eq_ = StringHash("xor_eq");
	static constexpr auto module_ = StringHash("module");
	auto txt = node->getText();
	auto id = StringHash(txt.c_str());
	switch (id)
	{
	case anonymousVar:
		out << GetAnonymousVarName({node->getSymbol()->getLine(),node->getSymbol()->getCharPositionInLine()});
		break;
	case and_eq_:
	case asm_:
	case auto_:
	case bitand_:
	case bitor_:
	case char8t:
	case char16t:
	case char32t:
	case compl_:
	case constexpr_:
	case constinit_:
	case const_cast_:
	case co_await_:
	case co_return_:
	case co_yield_:
	case delete_:
	case double_:
	case dynamic_cast_:
	case export_:
	case explicit_:
	case float_:
	case goto_:
	case int_:
	case long_:
	case mutable_:
	case namespace_:
	case not_eq_:
	case nullptr_:
	case or_eq_:
	case register_:
	case reinterpret_cast_:
	case short_:
	case signed_:
	case static_assert_:
	case static_cast_:
	case template_:
	case thread_local_:
	case typedef_:
	case typeid_:
	case typename_:
	case unsigned_:
	case wchar_t_:
	case xor_eq_:
	case module_:
		out << txt << "_";
		break;
	default:
		out << txt;
		break;
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
	else if (ctx->interpolatedStringLiteral())
	{
		printInterpolatedStringLiteral(ctx->interpolatedStringLiteral());
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

void CppAdvanceCodegen::printInterpolatedStringLiteral(CppAdvanceParser::InterpolatedStringLiteralContext* ctx) const
{
	if (currentDeclaration && !currentDeclaration->theTypeId())
	{
		out << "String(";
	}
	out << "CppAdvance::StringInterpolation(u";
	std::vector<CppAdvanceParser::NullCoalescingExpressionContext*> expressions;
	auto processExpression = [&](auto expr) { 
		out << "{";
		if (expr->Colon())
		{
			out << ":";
			for (auto options : expr->FORMAT_STRING())
			{
				out << options->getText();
			}
		}
		out << "}";
		expressions.push_back(expr->nullCoalescingExpression());
	};

	if (auto literal = ctx->interpolatedRegularStringLiteral())
	{
		out << '"';
		for (auto part : literal->interpolatedRegularStringPart())
		{
			if (auto expr = part->interpolatedExpression())
			{
				processExpression(expr);
			}
			else if (part->DOUBLE_CURLY_INSIDE())
			{
				out << "{{";
			}
			else if (part->REGULAR_CHAR_INSIDE())
			{
				out << part->REGULAR_CHAR_INSIDE()->getText();
			}
			else if (part->REGULAR_STRING_INSIDE())
			{
				out << part->REGULAR_STRING_INSIDE()->getText();
			}
		}
		out << '"';
	}
	else if (auto literal = ctx->interpolatedVerbatiumStringLiteral())
	{
		out << "R\"_grave_(";
		for (auto part : literal->interpolatedVerbatiumStringPart())
		{
			if (auto expr = part->interpolatedExpression())
			{
				processExpression(expr);
			}
			else if (part->DOUBLE_CURLY_INSIDE())
			{
				out << "{{";
			}
			else if (part->VERBATIUM_DOUBLE_GRAVE_INSIDE())
			{
				out << '`';
			}
			else if (part->GRAVE_STRING_INSIDE())
			{
				out << part->GRAVE_STRING_INSIDE()->getText();
			}
		}
		out << ")_grave_\"";
	}
	else if (auto literal = ctx->interpolatedMultilineStringLiteral())
	{
		out << "R\"_multi_(";
		for (auto part : literal->interpolatedMultilineStringPart())
		{
			if (auto expr = part->interpolatedExpression())
			{
				processExpression(expr);
			}
			else if (part->DOUBLE_CURLY_INSIDE())
			{
				out << "{{";
			}
			else if (part->MULTILINE_QUOTES_INSIDE())
			{
				out << part->MULTILINE_QUOTES_INSIDE()->getText();
			}
			else if (part->MULTILINE_STRING_INSIDE())
			{
				out << part->MULTILINE_STRING_INSIDE()->getText();
			}
		}
		out << ")_multi_\"";
	}

	for (auto expr : expressions)
	{
		out << ", ";
		printNullCoalescingExpression(expr);
	}
	out << ")";
	if (currentDeclaration && !currentDeclaration->theTypeId())
	{
		out << ")";
	}
}
