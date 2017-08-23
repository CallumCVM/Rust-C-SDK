#pragma once

#include "..\System\Configuration\ApplicationSettingsBase.h"

namespace System
{
	namespace Configuration
{
	class SettingsContext : public Hashtable // 0x68
	{
	public:
		System::Configuration::ApplicationSettingsBase* current; // 0x68 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x70
}
