#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class TOD_Particle : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* particleComponent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
