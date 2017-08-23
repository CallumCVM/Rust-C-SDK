#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ThrownWeapon : public AttackEntity // 0x1e0
	{
	public:
		GameObjectRef* prefabToThrow; // 0x1e0 (size: 0x8, flags: 0x6, type: 0x12)
		float maxThrowVelocity; // 0x1e8 (size: 0x4, flags: 0x6, type: 0xc)
		float tumbleVelocity; // 0x1ec (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 overrideAngle; // 0x1f0 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x200
}
