#pragma once

#include "..\System\IAsyncResult.h"
#include "..\System\Net\Sockets\Socket\SendFileHandler.h"

namespace rust 
{
	class SendFileAsyncResult : public Object // 0x0
	{
	public:
		System::IAsyncResult* ares; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::Socket::SendFileHandler* d; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
