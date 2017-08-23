#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class ForceOverLifetimeModule : public ValueType // 0x0
	{
	public:
		UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
