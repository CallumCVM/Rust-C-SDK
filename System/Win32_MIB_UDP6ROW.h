#pragma once

#include "..\System\Net\NetworkInformation\Win32IPGlobalProperties\Win32_IN6_ADDR.h"

namespace rust 
{
	class Win32_MIB_UDP6ROW : public Object // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32IPGlobalProperties::Win32_IN6_ADDR LocalAddr; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
		unsigned int LocalScopeId; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		int LocalPort; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
