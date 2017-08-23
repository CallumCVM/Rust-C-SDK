#pragma once

#include "..\System\Configuration\Internal\IInternalConfigHost.h"
#include "..\System\Configuration\Internal\IInternalConfigRoot.h"
#include "..\System\Object.h"

namespace System
{
	namespace Configuration
{
	class InternalConfigurationSystem : public Object // 0x0
	{
	public:
		System::Configuration::Internal::IInternalConfigHost* host; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Internal::IInternalConfigRoot* root; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* hostInitParams; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
