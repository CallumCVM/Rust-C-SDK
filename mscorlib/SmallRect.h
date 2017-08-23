#pragma once

#include "..\System\Int16.h"

namespace System
{
	class SmallRect : public ValueType // 0x0
	{
	public:
		System::Int16 Left; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 Top; // 0x12 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 Right; // 0x14 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 Bottom; // 0x16 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x18
}
