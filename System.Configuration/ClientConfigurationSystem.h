#pragma once

#include "..\System\Configuration\Configuration.h"

namespace System
{
	namespace Configuration
{
	class ClientConfigurationSystem : public Object // 0x0
	{
	public:
		System::Configuration::Configuration* cfg; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
