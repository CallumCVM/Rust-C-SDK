#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\Transform.h"
#include "ItemDefinition.h"

namespace rust 
{
	class GunTrap : public StorageContainer // 0x2e8
	{
	public:
		GameObjectRef* gun_fire_effect; // 0x2e8 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* bulletEffect; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* triggeredEffect; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* muzzlePos; // 0x300 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* eyeTransform; // 0x308 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* ammoType; // 0x310 (size: 0x8, flags: 0x6, type: 0x12)
		int numPellets; // 0x318 (size: 0x4, flags: 0x6, type: 0x8)
		int aimCone; // 0x31c (size: 0x4, flags: 0x6, type: 0x8)
		float sensorRadius; // 0x320 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x328
}
