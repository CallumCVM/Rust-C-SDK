#pragma once

#include "..\UnityEngine\ParticleSystem.h"
#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class LODComponentParticleSystem : public LODComponent // 0x28
	{
	public:
		UnityEngine::ParticleSystem* particleSystem; // 0x28 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::Renderer* particleSystemRenderer; // 0x30 (size: 0x8, flags: 0x4, type: 0x12)
		float maxEmission; // 0x38 (size: 0x4, flags: 0x4, type: 0xc)
		int curlod; // 0x3c (size: 0x4, flags: 0x4, type: 0x8)
		bool force; // 0x40 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x48
}
