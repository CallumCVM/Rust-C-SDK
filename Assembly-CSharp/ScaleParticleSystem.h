#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class ScaleParticleSystem : public ScaleRenderer // 0x38
	{
	public:
		UnityEngine::ParticleSystem* pSystem; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		bool scaleGravity; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		float startSize; // 0x44 (size: 0x4, flags: 0x81, type: 0xc)
		float startLifeTime; // 0x48 (size: 0x4, flags: 0x81, type: 0xc)
		float startSpeed; // 0x4c (size: 0x4, flags: 0x81, type: 0xc)
		float startGravity; // 0x50 (size: 0x4, flags: 0x81, type: 0xc)
	}; // size = 0x58
}
