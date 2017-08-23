#pragma once

#include "..\UnityEngine\Networking\NetworkConnection.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class PendingPlayer : public ValueType // 0x0
	{
	public:
		UnityEngine::Networking::NetworkConnection* conn; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* lobbyPlayer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
