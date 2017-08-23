#pragma once

#include "..\UnityEngine\Networking\NetworkReader.h"
#include "..\System\Type.h"
#include "..\UnityEngine\Networking\HostTopology.h"
#include "..\UnityEngine\List.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<UnityEngine\Networking\NetworkConnection>.h"
#include "..\UnityEngine\Networking\NetworkMessageHandlers.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkServerSimple : public Object // 0x0
	{
	public:
		unsigned char* m_MsgBuffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Networking::NetworkReader* m_MsgReader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* m_NetworkConnectionClass; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::HostTopology* m_HostTopology; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.Networking.NetworkConnection>* m_Connections; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::ObjectModel::ReadOnlyCollection<UnityEngine::Networking::NetworkConnection> m_ConnectionsReadOnly; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkMessageHandlers* m_MessageHandlers; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool m_Initialized; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		int m_ListenPort; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int m_ServerHostId; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int m_RelaySlotId; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_UseWebSockets; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
