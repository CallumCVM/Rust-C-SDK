#pragma once

#include "..\System\Coord.h"
#include "..\System\Int16.h"
#include "..\System\SmallRect.h"

namespace System
{
	class ConsoleScreenBufferInfo : public ValueType // 0x0
	{
	public:
		System::Coord Size; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::Coord CursorPosition; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		System::Int16 Attribute; // 0x18 (size: 0x2, flags: 0x6, type: 0x6)
		System::SmallRect Window; // 0x1a (size: 0x8, flags: 0x6, type: 0x11)
		System::Coord MaxWindowSize; // 0x22 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
