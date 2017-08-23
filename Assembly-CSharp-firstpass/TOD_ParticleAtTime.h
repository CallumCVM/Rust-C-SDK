#pragma once

#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class TOD_ParticleAtTime : public TOD_Particle // 0x20
	{
	public:
		UnityEngine::AnimationCurve* Emission; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
