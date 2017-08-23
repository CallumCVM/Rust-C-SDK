#pragma once

#include "..\System\Runtime\Remoting\ServerIdentity.h"

namespace System
{
	class MarshalByRefObject : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::ServerIdentity* _identity; // 0x10 (size: 0x8, flags: 0x81, type: 0x12)
	}; // size = 0x18
}
