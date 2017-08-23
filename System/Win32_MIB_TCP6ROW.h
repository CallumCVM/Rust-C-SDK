#pragma once

#include "..\System\Net\NetworkInformation\TcpState.h"
#include "..\System\Net\NetworkInformation\Win32IPGlobalProperties\Win32_IN6_ADDR.h"

namespace rust 
{
	class Win32_MIB_TCP6ROW : public Object // 0x0
	{
	public:
		System::Net::NetworkInformation::TcpState State; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::Win32IPGlobalProperties::Win32_IN6_ADDR LocalAddr; // 0x18 (size: 0x8, flags: 0x6, type: 0x11)
		unsigned int LocalScopeId; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		int LocalPort; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		System::Net::NetworkInformation::Win32IPGlobalProperties::Win32_IN6_ADDR RemoteAddr; // 0x28 (size: 0x8, flags: 0x6, type: 0x11)
		unsigned int RemoteScopeId; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
		int RemotePort; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
