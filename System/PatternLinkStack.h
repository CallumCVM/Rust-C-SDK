#pragma once

#include "..\System\Text\RegularExpressions\PatternCompiler\PatternLinkStack\Link.h"

namespace rust 
{
	class PatternLinkStack : public LinkStack // 0x18
	{
	public:
		System::Text::RegularExpressions::PatternCompiler::PatternLinkStack::Link link; // 0x18 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
