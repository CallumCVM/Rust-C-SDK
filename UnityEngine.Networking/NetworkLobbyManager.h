#pragma once

#include "..\UnityEngine\Networking\NetworkLobbyPlayer.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkLobbyManager : public NetworkManager // 0xe0
	{
	public:
		UnityEngine::Networking::NetworkLobbyPlayer* m_LobbyPlayerPrefab; // 0xe0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* m_GamePlayerPrefab; // 0xe8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_LobbyScene; // 0xf0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_PlayScene; // 0xf8 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<UnityEngine.Networking.NetworkLobbyManager.PendingPlayer>* m_PendingPlayers; // 0x100 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkLobbyPlayer* lobbySlots; // 0x108 (size: 0x8, flags: 0x6, type: 0x1d)
		bool m_ShowLobbyGUI; // 0x110 (size: 0x1, flags: 0x1, type: 0x2)
		int m_MaxPlayers; // 0x114 (size: 0x4, flags: 0x1, type: 0x8)
		int m_MaxPlayersPerConnection; // 0x118 (size: 0x4, flags: 0x1, type: 0x8)
		int m_MinPlayers; // 0x11c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x120
}
