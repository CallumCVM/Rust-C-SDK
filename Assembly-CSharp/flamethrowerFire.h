#pragma once

#include "..\UnityEngine\ParticleSystem.h"
#include "FlameJet.h"
#include "..\UnityEngine\AudioSource.h"
#include "..\UnityEngine\AudioClip.h"
#include "flamethrowerState.h"

namespace rust 
{
	class flamethrowerFire : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* pilotLightFX; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ParticleSystem* flameFX; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		FlameJet* jet; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioSource* oneShotSound; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioSource* loopSound; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* pilotlightIdle; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* flameLoop; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* flameStart; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		flamethrowerState flameState; // 0x58 (size: 0x4, flags: 0x6, type: 0x11)
		flamethrowerState previousflameState; // 0x5c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
