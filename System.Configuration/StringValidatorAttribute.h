#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class StringValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		UnityEngine::UnicodeString* invalidCharacters; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationValidatorBase* instance; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int maxLength; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int minLength; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
