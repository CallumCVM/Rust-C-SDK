#pragma once

#include "GameObjectRef.h"
#include "ItemModProjectileMod.h"
#include "..\Rust\AmmoTypes.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ItemModProjectile : public MonoBehaviour // 0x18
	{
	public:
		GameObjectRef* projectileObject; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		ItemModProjectileMod* mods; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::AnimationCurve* spreadScalar; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* category; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		Rust::AmmoTypes ammoType; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		int numProjectiles; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		float projectileSpread; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float projectileVelocity; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float projectileVelocitySpread; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		bool useCurve; // 0x4c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x50
}
