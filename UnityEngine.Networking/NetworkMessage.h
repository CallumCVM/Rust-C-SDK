#pragma once

#include "..\System\Int16.h"
#include "..\UnityEngine\Networking\NetworkConnection.h"
#include "..\UnityEngine\Networking\NetworkReader.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkMessage : public Object // 0x0
	{
	public:
		UnityEngine::Networking::NetworkConnection* conn; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Networking::NetworkReader* reader; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Int16 msgType; // 0x20 (size: 0x2, flags: 0x6, type: 0x6)
		int channelId; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
