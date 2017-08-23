#pragma once

#include "..\UnityEngine\Networking\NetworkClient.h"
#include "..\UnityEngine\Networking\Match\MatchInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\NetworkSystem\PeerInfoMessage.h"
#include "..\UnityEngine\Networking\NetworkSystem\PeerListMessage.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkMigrationManager : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Networking::NetworkClient* m_Client; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::Match::MatchInfo* m_MatchInfo; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_NewHostAddress; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Networking::NetworkSystem::PeerInfoMessage* m_NewHostInfo; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkSystem::PeerListMessage* m_PeerListMessage; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkSystem::PeerInfoMessage* m_Peers; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		System.Collections.Generic.Dictionary<int,UnityEngine.Networking.NetworkMigrationManager.ConnectionPendingPlayers> m_PendingPlayers; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		bool m_HostMigration; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_ShowGUI; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
		int m_OffsetX; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		int m_OffsetY; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_WaitingToBecomeNewHost; // 0x5c (size: 0x1, flags: 0x1, type: 0x2)
		bool m_WaitingReconnectToNewHost; // 0x5d (size: 0x1, flags: 0x1, type: 0x2)
		bool m_DisconnectedFromHost; // 0x5e (size: 0x1, flags: 0x1, type: 0x2)
		bool m_HostWasShutdown; // 0x5f (size: 0x1, flags: 0x1, type: 0x2)
		int m_OldServerConnectionId; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
