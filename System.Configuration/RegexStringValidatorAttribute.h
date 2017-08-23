#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class RegexStringValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		UnityEngine::UnicodeString* regex; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationValidatorBase* instance; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
