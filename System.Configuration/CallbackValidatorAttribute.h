#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class CallbackValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		UnityEngine::UnicodeString* callbackMethodName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationValidatorBase* instance; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
