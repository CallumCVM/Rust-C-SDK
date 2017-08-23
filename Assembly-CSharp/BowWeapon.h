#pragma once

namespace rust 
{
	class BowWeapon : public BaseProjectile // 0x288
	{
	public:
		bool attackReady; // 0x288 (size: 0x1, flags: 0x1, type: 0x2)
		float arrowBack; // 0x28c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x290
}
