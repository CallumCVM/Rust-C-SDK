#pragma once

#include "..\System\Configuration\SettingsManageability.h"

namespace System
{
	namespace Configuration
{
	class SettingsManageabilityAttribute : public Attribute // 0x0
	{
	public:
		System::Configuration::SettingsManageability manageability; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
