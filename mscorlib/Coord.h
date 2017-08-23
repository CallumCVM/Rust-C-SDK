#pragma once

#include "..\System\Int16.h"

namespace System
{
	class Coord : public ValueType // 0x0
	{
	public:
		System::Int16 X; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 Y; // 0x12 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x18
}
