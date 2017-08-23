#pragma once

#include "..\System\Net\Sockets\Socket.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class RConClient : public Object // 0x0
	{
	public:
		System::Net::Sockets::Socket* socket; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* connectionName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool isAuthorised; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int lastMessageID; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		bool runningConsoleCommand; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool utf8Mode; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
