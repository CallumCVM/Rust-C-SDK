#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\Stack<UnityEngine\Networking\LocalClient\InternalMsg>.h"
#include "..\UnityEngine\Networking\NetworkServer.h"
#include "..\UnityEngine\Networking\NetworkMessage.h"

namespace UnityEngine
{
	namespace Networking
{
	class LocalClient : public NetworkClient // 0x78
	{
	public:
		UnityEngine::List<UnityEngine.Networking.LocalClient.InternalMsg>* m_InternalMsgs; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Networking.LocalClient.InternalMsg>* m_InternalMsgs2; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Stack<UnityEngine::Networking::LocalClient::InternalMsg> m_FreeMessages; // 0x88 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkServer* m_LocalServer; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkMessage* s_InternalMessage; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		bool m_Connected; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa8
}
