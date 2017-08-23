#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ConfigurationSectionCollection.h"
#include "..\System\Configuration\ConfigurationSectionGroupCollection.h"
#include "..\System\Configuration\Configuration.h"
#include "..\System\Configuration\SectionGroupInfo.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationSectionGroup : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* type_name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationSectionCollection* sections; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationSectionGroupCollection* groups; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Configuration* config; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SectionGroupInfo* group; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool require_declaration; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool declared; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
		bool initialized; // 0x42 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
