#pragma once

#include "..\UnityEngine\ParticleSystem.h"

namespace rust 
{
	class Sandstorm : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::ParticleSystem* m_psSandStorm; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float m_flSpeed; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float m_flSwirl; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float m_flEmissionRate; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
