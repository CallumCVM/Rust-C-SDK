#pragma once

#include "..\System\UInt16.h"

namespace SteamNative
{
	class P2PSessionState_t : public ValueType // 0x0
	{
	public:
		unsigned char ConnectionActive; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char Connecting; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char P2PSessionError; // 0x12 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char UsingRelay; // 0x13 (size: 0x1, flags: 0x6, type: 0x5)
		int BytesQueuedForSend; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int PacketsQueuedForSend; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int RemoteIP; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		System::UInt16 RemotePort; // 0x20 (size: 0x2, flags: 0x6, type: 0x7)
	}; // size = 0x28
}
