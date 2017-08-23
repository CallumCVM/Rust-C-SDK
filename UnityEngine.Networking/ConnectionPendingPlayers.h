#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class ConnectionPendingPlayers : public ValueType // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Networking.NetworkMigrationManager.PendingPlayerInfo>* players; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x18
}
