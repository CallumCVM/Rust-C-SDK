#pragma once

#include "..\System\Configuration\SettingsSerializeAs.h"

namespace System
{
	namespace Configuration
{
	class SettingsSerializeAsAttribute : public Attribute // 0x0
	{
	public:
		System::Configuration::SettingsSerializeAs serializeAs; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
