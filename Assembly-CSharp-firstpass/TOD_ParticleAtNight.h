#pragma once

namespace rust 
{
	class TOD_ParticleAtNight : public TOD_Particle // 0x20
	{
	public:
		float fadeTime; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float lerpTime; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		float maxEmission; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
