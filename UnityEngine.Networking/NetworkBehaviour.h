#pragma once

#include "..\UnityEngine\Networking\NetworkIdentity.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkBehaviour : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Networking::NetworkIdentity* m_MyView; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned int m_SyncVarDirtyBits; // 0x20 (size: 0x4, flags: 0x1, type: 0x9)
		float m_LastSendTime; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_SyncVarGuard; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
