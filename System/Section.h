#pragma once

#include "..\System\Int16.h"

namespace rust 
{
	class Section : public ValueType // 0x0
	{
	public:
		System::Int16 mask; // 0x10 (size: 0x2, flags: 0x1, type: 0x6)
		System::Int16 offset; // 0x12 (size: 0x2, flags: 0x1, type: 0x6)
	}; // size = 0x18
}
