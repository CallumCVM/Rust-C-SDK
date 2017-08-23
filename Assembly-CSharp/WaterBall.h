#pragma once

#include "ItemDefinition.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\Rigidbody.h"

namespace rust 
{
	class WaterBall : public BaseEntity // 0x130
	{
	public:
		ItemDefinition* liquidType; // 0x130 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* waterExplosion; // 0x138 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rigidbody* myRigidBody; // 0x140 (size: 0x8, flags: 0x6, type: 0x12)
		int waterAmount; // 0x148 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x150
}
