#pragma once

#include "..\UnityEngine\Networking\NetworkBehaviour\UNetInvokeType.h"
#include "..\System\Type.h"
#include "..\UnityEngine\Networking\NetworkBehaviour\CmdDelegate.h"

namespace rust 
{
	class Invoker : public Object // 0x0
	{
	public:
		System::Type* invokeClass; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Networking::NetworkBehaviour::CmdDelegate* invokeFunction; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Networking::NetworkBehaviour::UNetInvokeType invokeType; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
