#pragma once

#include "ItemDefinition.h"
#include "..\UnityEngine\ParticleSystem.h"
#include "FlameJet.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"
#include "SoundDefinition.h"
#include "Sound.h"

namespace rust 
{
	class FlameThrower : public AttackEntity // 0x1e0
	{
	public:
		ItemDefinition* fuelType; // 0x1e0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ParticleSystem* flameEffects; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x1d)
		FlameJet* jet; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* fireballPrefab; // 0x1f8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damagePerSec; // 0x200 (size: 0x8, flags: 0x6, type: 0x15)
		SoundDefinition* flameStart3P; // 0x208 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* flameLoop3P; // 0x210 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* flameStop3P; // 0x218 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* pilotLoopSoundDef; // 0x220 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* loopSound; // 0x228 (size: 0x8, flags: 0x1, type: 0x12)
		Sound* pilotLoopSound; // 0x230 (size: 0x8, flags: 0x1, type: 0x12)
		int maxAmmo; // 0x238 (size: 0x4, flags: 0x6, type: 0x8)
		int ammo; // 0x23c (size: 0x4, flags: 0x6, type: 0x8)
		float timeSinceLastAttack; // 0x240 (size: 0x4, flags: 0x6, type: 0xc)
		float nextReadyTime; // 0x244 (size: 0x4, flags: 0x6, type: 0xc)
		float flameRange; // 0x248 (size: 0x4, flags: 0x6, type: 0xc)
		float flameRadius; // 0x24c (size: 0x4, flags: 0x6, type: 0xc)
		float reloadDuration; // 0x250 (size: 0x4, flags: 0x1, type: 0xc)
		bool isReloading; // 0x254 (size: 0x1, flags: 0x1, type: 0x2)
		float tickRate; // 0x258 (size: 0x4, flags: 0x1, type: 0xc)
		float lastFlameTick; // 0x25c (size: 0x4, flags: 0x1, type: 0xc)
		float fuelPerSec; // 0x260 (size: 0x4, flags: 0x6, type: 0xc)
		float ammoRemainder; // 0x264 (size: 0x4, flags: 0x1, type: 0xc)
		float currentGaugeSetting; // 0x268 (size: 0x4, flags: 0x1, type: 0xc)
		bool wasFlameOn; // 0x26c (size: 0x1, flags: 0x1, type: 0x2)
		float nextUnfireTime; // 0x270 (size: 0x4, flags: 0x1, type: 0xc)
		bool firing; // 0x274 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x278
}
