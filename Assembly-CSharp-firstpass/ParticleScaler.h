#pragma once

namespace rust 
{
	class ParticleScaler : public MonoBehaviour // 0x18
	{
	public:
		float particleScale; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		bool alsoScaleGameobject; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
		float prevScale; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x28
}
