#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\ParticleSystem.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\LayerMask.h"

namespace rust 
{
	class FireBall : public BaseEntity // 0x130
	{
	public:
		UnityEngine::ParticleSystem* movementSystems; // 0x130 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::ParticleSystem* restingSystems; // 0x138 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* spreadSubEntityString; // 0x140 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Vector3 lastPos; // 0x148 (size: 0xc, flags: 0x1, type: 0x11)
		float lifeTimeMin; // 0x154 (size: 0x4, flags: 0x6, type: 0xc)
		float lifeTimeMax; // 0x158 (size: 0x4, flags: 0x6, type: 0xc)
		bool wasResting; // 0x15c (size: 0x1, flags: 0x81, type: 0x2)
		float generation; // 0x160 (size: 0x4, flags: 0x86, type: 0xc)
		float tickRate; // 0x164 (size: 0x4, flags: 0x6, type: 0xc)
		float damagePerSecond; // 0x168 (size: 0x4, flags: 0x6, type: 0xc)
		float radius; // 0x16c (size: 0x4, flags: 0x6, type: 0xc)
		float deathTime; // 0x170 (size: 0x4, flags: 0x1, type: 0xc)
		int waterToExtinguish; // 0x174 (size: 0x4, flags: 0x6, type: 0x8)
		int wetness; // 0x178 (size: 0x4, flags: 0x1, type: 0x8)
		bool canMerge; // 0x17c (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::LayerMask AttackLayers; // 0x180 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x188
}
