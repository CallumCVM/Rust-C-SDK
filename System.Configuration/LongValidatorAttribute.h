#pragma once

#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class LongValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		System::Configuration::ConfigurationValidatorBase* instance; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool excludeRange; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 maxValue; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 minValue; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x40
}
