#pragma once

#include "..\System\Text\RegularExpressions\RxInterpreter\RepeatContext.h"

namespace rust 
{
	class RepeatContext : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::RxInterpreter::RepeatContext* previous; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int start; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int min; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int max; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool lazy; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		int expr_pc; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int count; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
