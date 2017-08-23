#pragma once

#include "..\Network\Connection\State.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Network\Connection\TimeAverageValue.h"
#include "..\System\DateTime.h"
#include "..\UnityEngine\MonoBehaviour.h"
#include "..\Network\Connection\Validation.h"
#include "..\Network\Connection\ClientInfo.h"

namespace Network
{
	class Connection : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* authStatus; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned char* token; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* username; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* os; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		Network::Connection::TimeAverageValue* packetsPerSecond; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* ipaddress; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::MonoBehaviour* player; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Connection::ClientInfo* info; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Connection::State state; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		bool active; // 0x54 (size: 0x1, flags: 0x6, type: 0x2)
		bool connected; // 0x55 (size: 0x1, flags: 0x6, type: 0x2)
		int authLevel; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		bool rejected; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		unsigned __int64 guid; // 0x60 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 userid; // 0x68 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 ownerid; // 0x70 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int protocol; // 0x78 (size: 0x4, flags: 0x6, type: 0x9)
		System::DateTime connectionTime; // 0x80 (size: 0x10, flags: 0x6, type: 0x11)
		Network::Connection::Validation validate; // 0x90 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x98
}
