#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class ParticleRandomLifetime : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* mySystem; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float minScale; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float maxScale; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
