#pragma once

#include "..\System\Configuration\ConfigurationData.h"

namespace System
{
	namespace Configuration
{
	class DefaultConfig : public Object // 0x0
	{
	public:
		System::Configuration::ConfigurationData* config; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
