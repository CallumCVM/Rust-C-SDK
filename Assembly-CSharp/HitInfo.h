#pragma once

#include "BaseEntity.h"
#include "AttackEntity.h"
#include "..\Network\Connection.h"
#include "..\UnityEngine\Vector3.h"
#include "Projectile.h"
#include "..\UnityEngine\PhysicMaterial.h"
#include "DamageProperties.h"
#include "..\Rust\DamageTypeList.h"

namespace rust 
{
	class HitInfo : public Object // 0x0
	{
	public:
		BaseEntity* Initiator; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* WeaponPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		AttackEntity* Weapon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Connection* Predicted; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* HitEntity; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		Projectile* ProjectilePrefab; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::PhysicMaterial* material; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		DamageProperties* damageProperties; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::DamageTypeList* damageTypes; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		bool DoHitEffects; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool DoDecals; // 0x59 (size: 0x1, flags: 0x6, type: 0x2)
		bool IsPredicting; // 0x5a (size: 0x1, flags: 0x6, type: 0x2)
		bool UseProtection; // 0x5b (size: 0x1, flags: 0x6, type: 0x2)
		bool DidHit; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		unsigned int HitBone; // 0x60 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int HitPart; // 0x64 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int HitMaterial; // 0x68 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::Vector3 HitPositionWorld; // 0x6c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 HitPositionLocal; // 0x78 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 HitNormalWorld; // 0x84 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 HitNormalLocal; // 0x90 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 PointStart; // 0x9c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 PointEnd; // 0xa8 (size: 0xc, flags: 0x6, type: 0x11)
		int ProjectileID; // 0xb4 (size: 0x4, flags: 0x6, type: 0x8)
		float ProjectileDistance; // 0xb8 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 ProjectileVelocity; // 0xbc (size: 0xc, flags: 0x6, type: 0x11)
		bool CanGather; // 0xc8 (size: 0x1, flags: 0x6, type: 0x2)
		bool DidGather; // 0xc9 (size: 0x1, flags: 0x6, type: 0x2)
		float gatherScale; // 0xcc (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xd0
}
