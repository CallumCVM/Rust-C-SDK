#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Network\Visibility\Manager.h"
#include "..\UnityEngine\List.h"

namespace Network
{
	class Server : public NetworkPeer // 0x30
	{
	public:
		UnityEngine::UnicodeString* ip; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		Network::Visibility::Manager* visibility; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		System.Action<UnityEngine::UnicodeString*,Network.Connection> onDisconnected; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<Network.Connection>* connections; // 0x48 (size: 0x8, flags: 0x6, type: 0x15)
		System.Collections.Generic.Dictionary<unsigned __int64,Network.Connection> connectionByGUID; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		int port; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		bool compressionEnabled; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		bool logging; // 0x5d (size: 0x1, flags: 0x6, type: 0x2)
		bool debug; // 0x5e (size: 0x1, flags: 0x6, type: 0x2)
		unsigned int lastValueGiven; // 0x60 (size: 0x4, flags: 0x3, type: 0x9)
	}; // size = 0x68
}
