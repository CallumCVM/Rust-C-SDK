#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class TimeSpanValidatorAttribute : public ConfigurationValidatorAttribute // 0x20
	{
	public:
		UnityEngine::UnicodeString* maxValueString; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* minValueString; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationValidatorBase* instance; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool excludeRange; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
