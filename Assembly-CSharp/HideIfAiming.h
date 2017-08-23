#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class HideIfAiming : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* systems; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
