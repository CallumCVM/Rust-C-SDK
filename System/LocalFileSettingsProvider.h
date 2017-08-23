#pragma once

#include "..\System\Configuration\CustomizableFileSettingsProvider.h"

namespace System
{
	namespace Configuration
{
	class LocalFileSettingsProvider : public SettingsProvider // 0x28
	{
	public:
		System::Configuration::CustomizableFileSettingsProvider* impl; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
