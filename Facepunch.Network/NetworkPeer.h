#pragma once

#include "..\Network\Write.h"
#include "..\Network\Read.h"
#include "..\System\Action<Network\Message>.h"

namespace Network
{
	class NetworkPeer : public Object // 0x0
	{
	public:
		Network::Write* write; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Read* read; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action<Network::Message> onMessage; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		System.Func<int,Network.Read,unsigned int,int,bool> onUnconnectedMessage; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x30
}
