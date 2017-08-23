#pragma once

#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class IntegerValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		System::Configuration::ConfigurationValidatorBase* instance; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool excludeRange; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int maxValue; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int minValue; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
