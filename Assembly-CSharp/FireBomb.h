#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class FireBomb : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* fireParticle; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float bombRadius; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float particleDuration; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float emitDuration; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float particleSpawnRadius; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float emitIntervalTime; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		float emitStartTime; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		float nextEmitTime; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
