#pragma once

#include "..\UnityEngine\Ray.h"
#include "..\UnityEngine\RaycastHit.h"
#include "DamageProperties.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Collider.h"
#include "BaseEntity.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class HitTest : public Object // 0x0
	{
	public:
		UnityEngine::RaycastHit RayHit; // 0x10 (size: 0x30, flags: 0x6, type: 0x11)
		DamageProperties* damageProperties; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* gameObject; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Collider* collider; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* ignoreEntity; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* HitEntity; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* HitTransform; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* HitMaterial; // 0x70 (size: 0x8, flags: 0x6, type: 0xe)
		Type type; // 0x78 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Ray AttackRay; // 0x7c (size: 0x18, flags: 0x6, type: 0x11)
		float Radius; // 0x94 (size: 0x4, flags: 0x6, type: 0xc)
		float Forgiveness; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float MaxDistance; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		bool MultiHit; // 0xa0 (size: 0x1, flags: 0x6, type: 0x2)
		bool BestHit; // 0xa1 (size: 0x1, flags: 0x6, type: 0x2)
		bool DidHit; // 0xa2 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 HitPoint; // 0xa4 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 HitNormal; // 0xb0 (size: 0xc, flags: 0x6, type: 0x11)
		float HitDistance; // 0xbc (size: 0x4, flags: 0x6, type: 0xc)
		unsigned int HitPart; // 0xc0 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0xc8
}
