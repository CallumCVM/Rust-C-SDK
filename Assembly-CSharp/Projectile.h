#pragma once

#include "..\UnityEngine\Vector3.h"
#include "DamageProperties.h"
#include "MinMax.h"
#include "..\UnityEngine\List.h"
#include "ScaleRenderer.h"
#include "SoundDefinition.h"
#include "BasePlayer.h"
#include "AttackEntity.h"
#include "Projectile.h"
#include "ItemModProjectile.h"
#include "..\UnityEngine\Plane.h"
#include "..\UnityEngine\Ray.h"
#include "HitTest.h"

namespace rust 
{
	class Projectile : public MonoBehaviour // 0x18
	{
	public:
		DamageProperties* damageProperties; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MinMax* damageDistances; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		MinMax* damageMultipliers; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damageTypes; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		ScaleRenderer* rendererToScale; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		ScaleRenderer* firstPersonRenderer; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* flybySound; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* closeFlybySound; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		BasePlayer* owner; // 0x58 (size: 0x8, flags: 0x86, type: 0x12)
		AttackEntity* sourceWeaponPrefab; // 0x60 (size: 0x8, flags: 0x86, type: 0x12)
		Projectile* sourceProjectilePrefab; // 0x68 (size: 0x8, flags: 0x86, type: 0x12)
		ItemModProjectile* mod; // 0x70 (size: 0x8, flags: 0x86, type: 0x12)
		HitTest* hitTest; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 initialVelocity; // 0x80 (size: 0xc, flags: 0x6, type: 0x11)
		float drag; // 0x8c (size: 0x4, flags: 0x6, type: 0xc)
		float gravityModifier; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		float thickness; // 0x94 (size: 0x4, flags: 0x6, type: 0xc)
		float initialDistance; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		bool remainInWorld; // 0x9c (size: 0x1, flags: 0x6, type: 0x2)
		float stickProbability; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
		float breakProbability; // 0xa4 (size: 0x4, flags: 0x6, type: 0xc)
		float conditionLoss; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		float ricochetChance; // 0xac (size: 0x4, flags: 0x6, type: 0xc)
		float penetrationPower; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		bool createDecals; // 0xb4 (size: 0x1, flags: 0x6, type: 0x2)
		float flybySoundDistance; // 0xb8 (size: 0x4, flags: 0x6, type: 0xc)
		float closeFlybyDistance; // 0xbc (size: 0x4, flags: 0x6, type: 0xc)
		float tumbleSpeed; // 0xc0 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 tumbleAxis; // 0xc4 (size: 0xc, flags: 0x6, type: 0x11)
		int projectileID; // 0xd0 (size: 0x4, flags: 0x86, type: 0x8)
		int seed; // 0xd4 (size: 0x4, flags: 0x86, type: 0x8)
		bool clientsideEffect; // 0xd8 (size: 0x1, flags: 0x86, type: 0x2)
		bool clientsideAttack; // 0xd9 (size: 0x1, flags: 0x86, type: 0x2)
		float integrity; // 0xdc (size: 0x4, flags: 0x86, type: 0xc)
		float maxDistance; // 0xe0 (size: 0x4, flags: 0x86, type: 0xc)
		Modifier modifier; // 0xe4 (size: 0x10, flags: 0x86, type: 0x11)
		bool invisible; // 0xf4 (size: 0x1, flags: 0x86, type: 0x2)
		UnityEngine::Vector3 currentVelocity; // 0xf8 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 currentPosition; // 0x104 (size: 0xc, flags: 0x1, type: 0x11)
		float traveledDistance; // 0x110 (size: 0x4, flags: 0x1, type: 0xc)
		float traveledTime; // 0x114 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 previousPosition; // 0x118 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 sentPosition; // 0x124 (size: 0xc, flags: 0x1, type: 0x11)
		bool flybyPlayed; // 0x130 (size: 0x1, flags: 0x1, type: 0x2)
		bool wasFacingPlayer; // 0x131 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Plane flybyPlane; // 0x134 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Ray flybyRay; // 0x144 (size: 0x18, flags: 0x1, type: 0x11)
	}; // size = 0x160
}
