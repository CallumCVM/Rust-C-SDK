#pragma once

#include "..\System\DateTime.h"
#include "..\System\TimeSpan.h"
#include "..\System\TimeZoneInfo\TransitionTime.h"

namespace rust 
{
	class AdjustmentRule : public Object // 0x0
	{
	public:
		System::DateTime dateEnd; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime dateStart; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		System::TimeSpan daylightDelta; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		System::TimeZoneInfo::TransitionTime daylightTransitionEnd; // 0x38 (size: 0x28, flags: 0x1, type: 0x11)
		System::TimeZoneInfo::TransitionTime daylightTransitionStart; // 0x60 (size: 0x28, flags: 0x1, type: 0x11)
	}; // size = 0x88
}
