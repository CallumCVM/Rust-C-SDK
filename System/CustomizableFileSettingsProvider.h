#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ExeConfigurationFileMap.h"
#include "..\System\Configuration\SettingsPropertyValueCollection.h"

namespace System
{
	namespace Configuration
{
	class CustomizableFileSettingsProvider : public SettingsProvider // 0x28
	{
	public:
		UnityEngine::UnicodeString* app_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ExeConfigurationFileMap* exeMapCurrent; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ExeConfigurationFileMap* exeMapPrev; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsPropertyValueCollection* values; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
