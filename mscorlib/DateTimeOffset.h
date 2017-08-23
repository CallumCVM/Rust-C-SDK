#pragma once

#include "..\System\DateTime.h"
#include "..\System\TimeSpan.h"

namespace System
{
	class DateTimeOffset : public ValueType // 0x0
	{
	public:
		System::DateTime dt; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		System::TimeSpan utc_offset; // 0x20 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
