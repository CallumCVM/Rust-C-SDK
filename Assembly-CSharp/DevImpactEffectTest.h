#pragma once

namespace rust 
{
	class DevImpactEffectTest : public MonoBehaviour // 0x18
	{
	public:
		float timeNextFire; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
		int attackType; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
