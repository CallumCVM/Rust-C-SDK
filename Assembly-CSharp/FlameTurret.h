#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\List.h"
#include "GameObjectRef.h"

namespace rust 
{
	class FlameTurret : public StorageContainer // 0x2e8
	{
	public:
		UnityEngine::Transform* upper; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* eyeTransform; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damagePerSec; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* triggeredEffect; // 0x300 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* fireballPrefab; // 0x308 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* explosionEffect; // 0x310 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 aimDir; // 0x318 (size: 0xc, flags: 0x6, type: 0x11)
		float arc; // 0x324 (size: 0x4, flags: 0x6, type: 0xc)
		float triggeredDuration; // 0x328 (size: 0x4, flags: 0x6, type: 0xc)
		float flameRange; // 0x32c (size: 0x4, flags: 0x6, type: 0xc)
		float flameRadius; // 0x330 (size: 0x4, flags: 0x6, type: 0xc)
		float fuelPerSec; // 0x334 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x338
}
