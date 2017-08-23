#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class MuzzleFlash_Flamelet : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* flameletParticle; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
