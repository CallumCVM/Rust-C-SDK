#pragma once

#include "..\System\TimeSpan.h"

namespace System
{
	namespace Configuration
{
	class TimeSpanValidator : public ConfigurationValidatorBase // 0x0
	{
	public:
		bool rangeIsExclusive; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		System::TimeSpan minValue; // 0x18 (size: 0x8, flags: 0x1, type: 0x11)
		System::TimeSpan maxValue; // 0x20 (size: 0x8, flags: 0x1, type: 0x11)
		__int64 resolutionInSeconds; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x30
}
