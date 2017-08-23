#pragma once

namespace rust 
{
	class ExplosionsParticleSystemScaler : public MonoBehaviour // 0x18
	{
	public:
		float particlesScale; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float oldScale; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
