#pragma once

#include "..\UnityEngine\Networking\NetworkInstanceId.h"
#include "..\System\Int16.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class PendingPlayerInfo : public ValueType // 0x0
	{
	public:
		UnityEngine::Networking::NetworkInstanceId netId; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::Int16 playerControllerId; // 0x14 (size: 0x2, flags: 0x6, type: 0x6)
		UnityEngine::GameObject* obj; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
