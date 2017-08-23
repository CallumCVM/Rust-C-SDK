#pragma once

#include "..\System\Configuration\ConfigurationSection.h"
#include "..\System\Configuration\ConfigurationAllowDefinition.h"
#include "..\System\Configuration\ConfigurationAllowExeDefinition.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ProtectedConfigurationProvider.h"

namespace System
{
	namespace Configuration
{
	class SectionInformation : public Object // 0x0
	{
	public:
		System::Configuration::ConfigurationSection* parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* config_source; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* type_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* raw_xml; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ProtectedConfigurationProvider* protection_provider; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <ConfigFilePath>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationAllowDefinition allow_definition; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		System::Configuration::ConfigurationAllowExeDefinition allow_exe_definition; // 0x4c (size: 0x4, flags: 0x1, type: 0x11)
		bool allow_location; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		bool allow_override; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
		bool inherit_on_child_apps; // 0x52 (size: 0x1, flags: 0x1, type: 0x2)
		bool restart_on_external_changes; // 0x53 (size: 0x1, flags: 0x1, type: 0x2)
		bool require_permission; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
		bool force_update; // 0x55 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_declared; // 0x56 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_locked; // 0x57 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
