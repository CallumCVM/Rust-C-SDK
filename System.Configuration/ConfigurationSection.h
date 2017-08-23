#pragma once

#include "..\System\Configuration\SectionInformation.h"
#include "..\System\Configuration\IConfigurationSectionHandler.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationSection : public ConfigurationElement // 0x70
	{
	public:
		System::Configuration::SectionInformation* sectionInformation; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::IConfigurationSectionHandler* section_handler; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* externalDataXml; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object _configContext; // 0x88 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x90
}
