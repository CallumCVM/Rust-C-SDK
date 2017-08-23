#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\LogFilter\FilterLevel.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Networking\PlayerSpawnMethod.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Networking\ConnectionConfig.h"
#include "..\UnityEngine\Networking\GlobalConfig.h"
#include "..\UnityEngine\Networking\NetworkMigrationManager.h"
#include "..\System\Net\EndPoint.h"
#include "..\UnityEngine\Networking\NetworkClient.h"
#include "..\UnityEngine\Networking\Match\MatchInfo.h"
#include "..\UnityEngine\Networking\Match\NetworkMatch.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkManager : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* m_ServerBindAddress; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_NetworkAddress; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::GameObject* m_PlayerPrefab; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_OfflineScene; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_OnlineScene; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<UnityEngine.GameObject>* m_SpawnPrefabs; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::ConnectionConfig* m_ConnectionConfig; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::GlobalConfig* m_GlobalConfig; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.Networking.QosType>* m_Channels; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* m_MatchHost; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* matchName; // 0x68 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Networking::NetworkMigrationManager* m_MigrationManager; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::EndPoint* m_EndPoint; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkClient* client; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Networking::Match::MatchInfo* matchInfo; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Networking::Match::NetworkMatch* matchMaker; // 0x90 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<UnityEngine.Networking.Match.MatchInfoSnapshot>* matches; // 0x98 (size: 0x8, flags: 0x6, type: 0x15)
		int m_NetworkPort; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_ServerBindToIP; // 0xa4 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_DontDestroyOnLoad; // 0xa5 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_RunInBackground; // 0xa6 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_ScriptCRCCheck; // 0xa7 (size: 0x1, flags: 0x1, type: 0x2)
		float m_MaxDelay; // 0xa8 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Networking::LogFilter::FilterLevel m_LogLevel; // 0xac (size: 0x4, flags: 0x1, type: 0x11)
		bool m_AutoCreatePlayer; // 0xb0 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Networking::PlayerSpawnMethod m_PlayerSpawnMethod; // 0xb4 (size: 0x4, flags: 0x1, type: 0x11)
		bool m_CustomConfig; // 0xb8 (size: 0x1, flags: 0x1, type: 0x2)
		int m_MaxConnections; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		bool m_UseWebSockets; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_UseSimulator; // 0xc1 (size: 0x1, flags: 0x1, type: 0x2)
		int m_SimulatedLatency; // 0xc4 (size: 0x4, flags: 0x1, type: 0x8)
		float m_PacketLossPercentage; // 0xc8 (size: 0x4, flags: 0x1, type: 0xc)
		int m_MaxBufferedPackets; // 0xcc (size: 0x4, flags: 0x1, type: 0x8)
		bool m_AllowFragmentation; // 0xd0 (size: 0x1, flags: 0x1, type: 0x2)
		int m_MatchPort; // 0xd4 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned int matchSize; // 0xd8 (size: 0x4, flags: 0x6, type: 0x9)
		bool m_ClientLoadedScene; // 0xdc (size: 0x1, flags: 0x1, type: 0x2)
		bool isNetworkActive; // 0xdd (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xe0
}
