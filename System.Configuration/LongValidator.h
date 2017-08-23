#pragma once

namespace System
{
	namespace Configuration
{
	class LongValidator : public ConfigurationValidatorBase // 0x0
	{
	public:
		bool rangeIsExclusive; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 minValue; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 maxValue; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 resolution; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x30
}
