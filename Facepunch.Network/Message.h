#pragma once

#include "..\Network\Message\Type.h"
#include "..\Network\NetworkPeer.h"
#include "..\Network\Connection.h"

namespace Network
{
	class Message : public Object // 0x0
	{
	public:
		Network::NetworkPeer* peer; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Connection* connection; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Message::Type type; // 0x20 (size: 0x1, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
