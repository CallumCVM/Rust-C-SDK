#pragma once

namespace System
{
	namespace Configuration
{
	class IntegerValidator : public ConfigurationValidatorBase // 0x0
	{
	public:
		bool rangeIsExclusive; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		int minValue; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int maxValue; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int resolution; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
