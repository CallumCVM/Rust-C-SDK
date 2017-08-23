#pragma once

#include "..\System\Configuration\ConfigurationFileMap.h"

namespace System
{
	namespace Configuration
{
	class MachineConfigurationHost : public InternalConfigurationHost // 0x0
	{
	public:
		System::Configuration::ConfigurationFileMap* map; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
