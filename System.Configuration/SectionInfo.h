#pragma once

#include "..\System\Configuration\ConfigurationAllowDefinition.h"
#include "..\System\Configuration\ConfigurationAllowExeDefinition.h"

namespace System
{
	namespace Configuration
{
	class SectionInfo : public ConfigInfo // 0x40
	{
	public:
		bool allowLocation; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool requirePermission; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
		bool restartOnExternalChanges; // 0x42 (size: 0x1, flags: 0x1, type: 0x2)
		System::Configuration::ConfigurationAllowDefinition allowDefinition; // 0x44 (size: 0x4, flags: 0x1, type: 0x11)
		System::Configuration::ConfigurationAllowExeDefinition allowExeDefinition; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
