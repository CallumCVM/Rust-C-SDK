#pragma once

#include "..\System\Configuration\ConfigInfoCollection.h"

namespace System
{
	namespace Configuration
{
	class SectionGroupInfo : public ConfigInfo // 0x40
	{
	public:
		System::Configuration::ConfigInfoCollection* sections; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigInfoCollection* groups; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
