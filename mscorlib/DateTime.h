#pragma once

#include "..\System\TimeSpan.h"
#include "..\System\DateTimeKind.h"

namespace System
{
	class DateTime : public ValueType // 0x0
	{
	public:
		System::TimeSpan ticks; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		System::DateTimeKind kind; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
