#pragma once

#include "..\System\Text\RegularExpressions\MatchEvaluator.h"

namespace rust 
{
	class Adapter : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::MatchEvaluator* ev; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
