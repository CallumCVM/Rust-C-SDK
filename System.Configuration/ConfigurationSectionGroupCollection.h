#pragma once

#include "..\System\Configuration\SectionGroupInfo.h"
#include "..\System\Configuration\Configuration.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationSectionGroupCollection : public NameObjectCollectionBase // 0x58
	{
	public:
		System::Configuration::SectionGroupInfo* group; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Configuration* config; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
