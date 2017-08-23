#pragma once

#include "..\System\Int16.h"
#include "..\UnityEngine\Networking\NetworkIdentity.h"
#include "..\UnityEngine\GameObject.h"

namespace UnityEngine
{
	namespace Networking
{
	class PlayerController : public Object // 0x0
	{
	public:
		UnityEngine::Networking::NetworkIdentity* unetView; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* gameObject; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Int16 playerControllerId; // 0x20 (size: 0x2, flags: 0x6, type: 0x6)
	}; // size = 0x28
}
