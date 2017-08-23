#pragma once

#include "..\System\Char.h"
#include "..\System\Int16.h"

namespace System
{
	class CharInfo : public ValueType // 0x0
	{
	public:
		System::Char Character; // 0x10 (size: 0x2, flags: 0x6, type: 0x3)
		System::Int16 Attributes; // 0x12 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x18
}
