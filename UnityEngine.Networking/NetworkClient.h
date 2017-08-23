#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\Networking\HostTopology.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\EndPoint.h"
#include "..\UnityEngine\Networking\NetworkMessageHandlers.h"
#include "..\UnityEngine\Networking\NetworkConnection.h"
#include "..\UnityEngine\Networking\NetworkReader.h"
#include "..\UnityEngine\Networking\NetworkClient\ConnectState.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkClient : public Object // 0x0
	{
	public:
		System::Type* m_NetworkConnectionClass; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::HostTopology* m_HostTopology; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_ServerIp; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::EndPoint* m_RemoteEndPoint; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkMessageHandlers* m_MessageHandlers; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkConnection* m_Connection; // 0x38 (size: 0x8, flags: 0x4, type: 0x12)
		unsigned char* m_MsgBuffer; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Networking::NetworkReader* m_MsgReader; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_RequestedServerHost; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		bool m_UseSimulator; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		int m_SimulatedLatency; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		float m_PacketLoss; // 0x60 (size: 0x4, flags: 0x1, type: 0xc)
		int m_ServerPort; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ClientId; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ClientConnectionId; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int m_StatResetTime; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Networking::NetworkClient::ConnectState m_AsyncConnect; // 0x74 (size: 0x4, flags: 0x4, type: 0x11)
	}; // size = 0x78
}
