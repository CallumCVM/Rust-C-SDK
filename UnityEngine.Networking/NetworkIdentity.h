#pragma once

#include "..\UnityEngine\Networking\NetworkSceneId.h"
#include "..\UnityEngine\Networking\NetworkHash128.h"
#include "..\UnityEngine\Networking\NetworkInstanceId.h"
#include "..\UnityEngine\Networking\NetworkConnection.h"
#include "..\System\Int16.h"
#include "..\UnityEngine\Networking\NetworkBehaviour.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkIdentity : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Networking::NetworkConnection* m_ConnectionToServer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkConnection* m_ConnectionToClient; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkBehaviour* m_NetworkBehaviours; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System.Collections.Generic.HashSet<int> m_ObserverConnections; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Networking.NetworkConnection>* m_Observers; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkConnection* m_ClientAuthorityOwner; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkSceneId m_SceneId; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Networking::NetworkHash128 m_AssetId; // 0x4c (size: 0x10, flags: 0x1, type: 0x11)
		bool m_ServerOnly; // 0x5c (size: 0x1, flags: 0x1, type: 0x2)
		bool m_LocalPlayerAuthority; // 0x5d (size: 0x1, flags: 0x1, type: 0x2)
		bool m_IsClient; // 0x5e (size: 0x1, flags: 0x1, type: 0x2)
		bool m_IsServer; // 0x5f (size: 0x1, flags: 0x1, type: 0x2)
		bool m_HasAuthority; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Networking::NetworkInstanceId m_NetId; // 0x64 (size: 0x4, flags: 0x1, type: 0x11)
		bool m_IsLocalPlayer; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		System::Int16 m_PlayerId; // 0x6a (size: 0x2, flags: 0x1, type: 0x6)
		bool m_Reset; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
