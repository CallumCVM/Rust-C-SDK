#pragma once

#include "..\UnityEngine\Networking\ChannelBuffer.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Networking\NetworkMessage.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\Networking\NetworkIdentity>.h"
#include "..\UnityEngine\Networking\NetworkWriter.h"
#include "..\System\Collections\Generic\Dictionary<System\Int16,UnityEngine\Networking\NetworkMessageDelegate>.h"
#include "..\UnityEngine\Networking\NetworkMessageHandlers.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\Networking\NetworkInstanceId>.h"
#include "..\UnityEngine\Networking\NetworkError.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Generic\Dictionary<System\Int16,UnityEngine\Networking\NetworkConnection\PacketStat>.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkConnection : public Object // 0x0
	{
	public:
		UnityEngine::Networking::ChannelBuffer* m_Channels; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::List<UnityEngine.Networking.PlayerController>* m_PlayerControllers; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkMessage* m_NetMsg; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::HashSet<UnityEngine::Networking::NetworkIdentity> m_VisList; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkWriter* m_Writer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Dictionary<System::Int16,UnityEngine::Networking::NetworkMessageDelegate> m_MessageHandlersDict; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkMessageHandlers* m_MessageHandlers; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::HashSet<UnityEngine::Networking::NetworkInstanceId> m_ClientOwnedObjects; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkMessage* m_MessageInfo; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* address; // 0x58 (size: 0x8, flags: 0x6, type: 0xe)
		System::Collections::Generic::Dictionary<System::Int16,UnityEngine::Networking::NetworkConnection::PacketStat> m_PacketStats; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkError error; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		int hostId; // 0x6c (size: 0x4, flags: 0x6, type: 0x8)
		int connectionId; // 0x70 (size: 0x4, flags: 0x6, type: 0x8)
		bool isReady; // 0x74 (size: 0x1, flags: 0x6, type: 0x2)
		float lastMessageTime; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		bool logNetworkMessages; // 0x7c (size: 0x1, flags: 0x6, type: 0x2)
		bool m_Disposed; // 0x7d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
