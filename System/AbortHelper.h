#pragma once

#include "..\System\Net\WebConnection.h"

namespace rust 
{
	class AbortHelper : public Object // 0x0
	{
	public:
		System::Net::WebConnection* Connection; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x18
}
