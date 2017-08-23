#pragma once

#include "..\System\Configuration\Internal\IInternalConfigHost.h"
#include "..\System\Configuration\Internal\InternalConfigEventHandler.h"

namespace System
{
	namespace Configuration
{
	class InternalConfigurationRoot : public Object // 0x0
	{
	public:
		System::Configuration::Internal::IInternalConfigHost* host; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Internal::InternalConfigEventHandler* ConfigChanged; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Internal::InternalConfigEventHandler* ConfigRemoved; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool isDesignTime; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
