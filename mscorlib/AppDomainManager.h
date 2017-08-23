#pragma once

#include "..\System\Runtime\Hosting\ApplicationActivator.h"
#include "..\System\AppDomainManagerInitializationOptions.h"

namespace System
{
	class AppDomainManager : public MarshalByRefObject // 0x18
	{
	public:
		System::Runtime::Hosting::ApplicationActivator* _activator; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::AppDomainManagerInitializationOptions _flags; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
