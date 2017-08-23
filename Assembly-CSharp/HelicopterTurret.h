#pragma once

#include "PatrolHelicopterAI.h"
#include "..\UnityEngine\Transform.h"
#include "BaseCombatEntity.h"

namespace rust 
{
	class HelicopterTurret : public MonoBehaviour // 0x18
	{
	public:
		PatrolHelicopterAI* _heliAI; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* gun_yaw; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* gun_pitch; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* muzzleTransform; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		BaseCombatEntity* _target; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float lastBurstTime; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float lastFireTime; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
		float lastSeenTargetTime; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		bool targetVisible; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
		float fireRate; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float burstLength; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float timeBetweenBursts; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float maxTargetRange; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float loseTargetAfter; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		bool left; // 0x64 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x68
}
