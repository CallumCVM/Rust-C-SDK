#pragma once

namespace rust 
{
	class GrenadeWeapon : public ThrownWeapon // 0x200
	{
	public:
		bool drop; // 0x200 (size: 0x1, flags: 0x81, type: 0x2)
		float armStartTime; // 0x204 (size: 0x4, flags: 0x81, type: 0xc)
	}; // size = 0x208
}
