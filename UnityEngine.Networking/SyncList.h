#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Networking\NetworkBehaviour.h"
#include "..\UnityEngine\Networking\SyncList\SyncListChanged<T>.h"

namespace UnityEngine
{
	namespace Networking
{
		template <typename T0>
	class SyncList : public Object // 0x0
	{
	public:
		UnityEngine::List<T>* m_Objects; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetworkBehaviour* m_Behaviour; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::SyncList::SyncListChanged<T> m_Callback; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		int m_CmdHash; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
