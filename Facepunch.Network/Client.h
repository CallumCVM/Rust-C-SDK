#pragma once

#include "..\Network\Connection.h"
#include "..\Network\Visibility\Manager.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Network\Stats.h"
#include "..\Network\Client\PlaybackStatsData.h"

namespace Network
{
	class Client : public NetworkPeer // 0x30
	{
	public:
		Network::Connection* <Connection>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Network::Visibility::Manager* visibility; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* connectedAddress; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ServerName; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		Network::Stats* IncomingStats; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		System.Action<UnityEngine::UnicodeString*> onDisconnected; // 0x58 (size: 0x8, flags: 0x6, type: 0x15)
		Network::Client::PlaybackStatsData* PlaybackStats; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		int connectedPort; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		bool IsOfficialServer; // 0x6c (size: 0x1, flags: 0x6, type: 0x2)
		bool <ConnectionAccepted>k__BackingField; // 0x6d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
