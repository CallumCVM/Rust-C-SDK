#pragma once

#include "..\System\Net\Sockets\Socket\SocketAsyncResult.h"

namespace rust 
{
	class Worker : public Object // 0x0
	{
	public:
		System::Net::Sockets::Socket::SocketAsyncResult* result; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool requireSocketSecurity; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		int send_so_far; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
