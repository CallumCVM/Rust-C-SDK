#pragma once

#include "..\UnityEngine\Behaviour.h"
#include "..\UnityEngine\Collider.h"

namespace rust 
{
	class NetworkSleep : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Behaviour* behaviours; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Collider* colliders; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		int BehavioursDisabled; // 0x28 (size: 0x4, flags: 0x3, type: 0x8)
		int CollidersDisabled; // 0x2c (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x30
}
