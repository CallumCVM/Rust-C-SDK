#pragma once

#include "..\UnityEngine\Networking\NetworkInstanceId.h"
#include "..\System\Int16.h"

namespace rust 
{
	class PendingOwner : public ValueType // 0x0
	{
	public:
		UnityEngine::Networking::NetworkInstanceId netId; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::Int16 playerControllerId; // 0x14 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x18
}
