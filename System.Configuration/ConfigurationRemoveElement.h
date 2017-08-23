#pragma once

#include "..\System\Configuration\ConfigurationPropertyCollection.h"
#include "..\System\Configuration\ConfigurationElement.h"
#include "..\System\Configuration\ConfigurationElementCollection.h"

namespace rust 
{
	class ConfigurationRemoveElement : public ConfigurationElement // 0x70
	{
	public:
		System::Configuration::ConfigurationPropertyCollection* properties; // 0x70 (size: 0x8, flags: 0x21, type: 0x12)
		System::Configuration::ConfigurationElement* _origElement; // 0x78 (size: 0x8, flags: 0x21, type: 0x12)
		System::Configuration::ConfigurationElementCollection* _origCollection; // 0x80 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x88
}
