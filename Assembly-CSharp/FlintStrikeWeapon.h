#pragma once

#include "RecoilProperties.h"

namespace rust 
{
	class FlintStrikeWeapon : public BaseProjectile // 0x288
	{
	public:
		RecoilProperties* strikeRecoil; // 0x288 (size: 0x8, flags: 0x6, type: 0x12)
		bool _didSparkThisFrame; // 0x290 (size: 0x1, flags: 0x1, type: 0x2)
		bool _isStriking; // 0x291 (size: 0x1, flags: 0x1, type: 0x2)
		float successFraction; // 0x294 (size: 0x4, flags: 0x6, type: 0xc)
		int strikes; // 0x298 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x2a0
}
