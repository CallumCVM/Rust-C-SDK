#pragma once

#include "..\System\Configuration\ConfigurationPropertyCollection.h"

namespace System
{
	namespace Configuration
{
	class KeyValueConfigurationCollection : public ConfigurationElementCollection // 0xb0
	{
	public:
		System::Configuration::ConfigurationPropertyCollection* properties; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xb8
}
