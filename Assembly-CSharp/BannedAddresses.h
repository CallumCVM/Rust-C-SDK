#pragma once

#include "..\System\Net\IPAddress.h"

namespace rust 
{
	class BannedAddresses : public ValueType // 0x0
	{
	public:
		System::Net::IPAddress* addr; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float banTime; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
