#include "AstrumLexerBase.h"

#include "AstrumLexer.h"

namespace AstrumLang {
	void AstrumLexerBase::OnColon() {
		if (interpolatedStringLevel > 0) {
			int ind                   = 1;
			bool switchToFormatString = true;
			while (_input->LA(ind) != '}') {
				if (_input->LA(ind) == ':' || _input->LA(ind) == ')') {
					switchToFormatString = false;
					break;
				}
				ind++;
			}

			if (switchToFormatString) {
				setMode(AstrumLexer::INTERPOLATION_FORMAT);
			}
		}
	}
}  // namespace AstrumLang