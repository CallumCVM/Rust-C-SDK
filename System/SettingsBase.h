#pragma once

#include "..\System\Configuration\SettingsContext.h"
#include "..\System\Configuration\SettingsPropertyCollection.h"
#include "..\System\Configuration\SettingsProviderCollection.h"
#include "..\System\Configuration\SettingsPropertyValueCollection.h"

namespace System
{
	namespace Configuration
{
	class SettingsBase : public Object // 0x0
	{
	public:
		System::Configuration::SettingsContext* context; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsPropertyCollection* properties; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsProviderCollection* providers; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsPropertyValueCollection* values; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool sync; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
