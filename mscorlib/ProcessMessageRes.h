#pragma once

#include "..\System\Runtime\Remoting\Messaging\CADMethodReturnMessage.h"

namespace rust 
{
	class ProcessMessageRes : public ValueType // 0x0
	{
	public:
		unsigned char* arrResponse; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
