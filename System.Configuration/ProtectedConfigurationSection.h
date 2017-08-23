#pragma once

#include "..\System\Configuration\ProtectedConfigurationProviderCollection.h"

namespace System
{
	namespace Configuration
{
	class ProtectedConfigurationSection : public ConfigurationSection // 0x90
	{
	public:
		System::Configuration::ProtectedConfigurationProviderCollection* providers; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x98
}
