#include "CppAdvanceLexerBase.h"
#include "CppAdvanceLexer.h"

void CppAdvanceLexerBase::OnColon() {
	if (interpolatedStringLevel > 0)
	{
		int ind = 1;
		bool switchToFormatString = true;
		while (_input->LA(ind) != '}')
		{
			if (_input->LA(ind) == ':' || _input->LA(ind) == ')')
			{
				switchToFormatString = false;
				break;
			}
			ind++;
		}

		if (switchToFormatString)
		{
			setMode(CppAdvanceLexer::INTERPOLATION_FORMAT);
		}
	}
}