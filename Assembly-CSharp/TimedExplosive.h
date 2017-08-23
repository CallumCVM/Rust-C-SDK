#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class TimedExplosive : public BaseEntity // 0x130
	{
	public:
		GameObjectRef* explosionEffect; // 0x130 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* stickEffect; // 0x138 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* bounceEffect; // 0x140 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damageTypes; // 0x148 (size: 0x8, flags: 0x6, type: 0x15)
		float timerAmountMin; // 0x150 (size: 0x4, flags: 0x6, type: 0xc)
		float timerAmountMax; // 0x154 (size: 0x4, flags: 0x6, type: 0xc)
		float minExplosionRadius; // 0x158 (size: 0x4, flags: 0x6, type: 0xc)
		float explosionRadius; // 0x15c (size: 0x4, flags: 0x6, type: 0xc)
		bool canStick; // 0x160 (size: 0x1, flags: 0x6, type: 0x2)
		bool onlyDamageParent; // 0x161 (size: 0x1, flags: 0x6, type: 0x2)
		bool explosionUsesForward; // 0x162 (size: 0x1, flags: 0x6, type: 0x2)
		float lastBounceTime; // 0x164 (size: 0x4, flags: 0x81, type: 0xc)
	}; // size = 0x168
}
