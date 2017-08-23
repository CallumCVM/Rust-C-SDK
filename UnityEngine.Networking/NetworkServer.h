#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Networking\ULocalConnectionToClient.h"
#include "..\UnityEngine\Networking\NetworkScene.h"
#include "..\UnityEngine\Networking\NetworkServer\ServerSimpleWrapper.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\Networking\NetworkInstanceId>.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkServer : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Networking.NetworkConnection>* m_LocalConnectionsFakeList; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::ULocalConnectionToClient* m_LocalConnection; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkScene* m_NetworkScene; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.HashSet<int> m_ExternalConnections; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkServer::ServerSimpleWrapper* m_SimpleServerSimple; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::HashSet<UnityEngine::Networking::NetworkInstanceId> m_RemoveList; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		bool m_LocalClientActive; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		float m_MaxDelay; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
		int m_RemoveListCount; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
