#pragma once

#include "..\System\Type.h"
#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class SubclassTypeValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		System::Type* baseClass; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationValidatorBase* instance; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
