#pragma once

#include "..\System\Collections\Generic\Dictionary<UnityEngine\Networking\NetworkInstanceId,UnityEngine\Networking\NetworkIdentity>.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkScene : public Object // 0x0
	{
	public:
		System::Collections::Generic::Dictionary<UnityEngine::Networking::NetworkInstanceId,UnityEngine::Networking::NetworkIdentity> m_LocalObjects; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
