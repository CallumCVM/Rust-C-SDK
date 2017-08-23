#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class WeatherEffect : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* emitOnStart; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::ParticleSystem* emitOnStop; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::ParticleSystem* emitOnLoop; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		float* maxEmissionRates; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		float currentIntensity; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
