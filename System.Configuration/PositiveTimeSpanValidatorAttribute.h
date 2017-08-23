#pragma once

#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class PositiveTimeSpanValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		System::Configuration::ConfigurationValidatorBase* instance; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
