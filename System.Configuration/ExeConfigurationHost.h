#pragma once

#include "..\System\Configuration\ExeConfigurationFileMap.h"
#include "..\System\Configuration\ConfigurationUserLevel.h"

namespace System
{
	namespace Configuration
{
	class ExeConfigurationHost : public InternalConfigurationHost // 0x0
	{
	public:
		System::Configuration::ExeConfigurationFileMap* map; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationUserLevel level; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
