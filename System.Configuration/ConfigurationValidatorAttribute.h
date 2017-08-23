#pragma once

#include "..\System\Type.h"
#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationValidatorAttribute : public Attribute // 0x0
	{
	public:
		System::Type* validatorType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationValidatorBase* instance; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
