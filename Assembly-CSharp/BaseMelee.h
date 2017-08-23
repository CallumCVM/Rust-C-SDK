#pragma once

#include "DamageProperties.h"
#include "..\UnityEngine\List.h"
#include "GameObjectRef.h"
#include "..\ResourceDispenser\GatherProperties.h"

namespace rust 
{
	class BaseMelee : public AttackEntity // 0x1e0
	{
	public:
		DamageProperties* damageProperties; // 0x1e0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damageTypes; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* strikeFX; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<BaseMelee.MaterialFX>* materialStrikeFX; // 0x1f8 (size: 0x8, flags: 0x6, type: 0x15)
		ResourceDispenser::GatherProperties* gathering; // 0x200 (size: 0x8, flags: 0x6, type: 0x12)
		bool canThrowAsProjectile; // 0x208 (size: 0x1, flags: 0x6, type: 0x2)
		float maxDistance; // 0x20c (size: 0x4, flags: 0x6, type: 0xc)
		float attackRadius; // 0x210 (size: 0x4, flags: 0x6, type: 0xc)
		bool isAutomatic; // 0x214 (size: 0x1, flags: 0x6, type: 0x2)
		float heartStress; // 0x218 (size: 0x4, flags: 0x6, type: 0xc)
		bool throwReady; // 0x21c (size: 0x1, flags: 0x81, type: 0x2)
	}; // size = 0x220
}
