#pragma once

#include "..\System\DateTime.h"
#include "..\System\DayOfWeek.h"

namespace rust 
{
	class TransitionTime : public ValueType // 0x0
	{
	public:
		System::DateTime timeOfDay; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		int month; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int day; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int week; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		System::DayOfWeek dayOfWeek; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		bool isFixedDateRule; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
