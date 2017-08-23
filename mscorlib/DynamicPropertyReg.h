#pragma once

#include "..\System\Runtime\Remoting\Contexts\IDynamicProperty.h"
#include "..\System\Runtime\Remoting\Contexts\IDynamicMessageSink.h"

namespace rust 
{
	class DynamicPropertyReg : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Contexts::IDynamicProperty* Property; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Runtime::Remoting::Contexts::IDynamicMessageSink* Sink; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
