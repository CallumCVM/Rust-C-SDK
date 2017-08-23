#pragma once

#include "..\UnityEngine\ParticleSystem.h"
#include "..\UnityEngine\Gradient.h"
#include "..\UnityEngine\GradientColorKey.h"
#include "..\UnityEngine\GradientAlphaKey.h"

namespace rust 
{
	class Muzzleflash_AlphaRandom : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* muzzleflashParticles; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Gradient* grad; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GradientColorKey* gck; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::GradientAlphaKey* gak; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x38
}
