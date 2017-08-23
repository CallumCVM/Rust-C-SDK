#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\HostTopology.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkDiscovery : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* m_BroadcastData; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* m_MsgOutBuffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* m_MsgInBuffer; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Networking::HostTopology* m_DefaultTopology; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine.Networking.NetworkBroadcastResult> m_BroadcastsReceived; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		int m_BroadcastPort; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		int m_BroadcastKey; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		int m_BroadcastVersion; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		int m_BroadcastSubVersion; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int m_BroadcastInterval; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_UseNetworkManager; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_ShowGUI; // 0x55 (size: 0x1, flags: 0x1, type: 0x2)
		int m_OffsetX; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int m_OffsetY; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int m_HostId; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_Running; // 0x64 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_IsServer; // 0x65 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_IsClient; // 0x66 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
