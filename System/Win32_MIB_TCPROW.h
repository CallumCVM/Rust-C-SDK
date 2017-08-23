#pragma once

#include "..\System\Net\NetworkInformation\TcpState.h"

namespace rust 
{
	class Win32_MIB_TCPROW : public Object // 0x0
	{
	public:
		System::Net::NetworkInformation::TcpState State; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int LocalAddr; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		int LocalPort; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int RemoteAddr; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		int RemotePort; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
