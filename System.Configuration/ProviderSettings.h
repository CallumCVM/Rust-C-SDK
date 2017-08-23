#pragma once

#include "..\System\Configuration\ConfigNameValueCollection.h"

namespace System
{
	namespace Configuration
{
	class ProviderSettings : public ConfigurationElement // 0x70
	{
	public:
		System::Configuration::ConfigNameValueCollection* parameters; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x78
}
