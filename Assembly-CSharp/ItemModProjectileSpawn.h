#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class ItemModProjectileSpawn : public ItemModProjectile // 0x50
	{
	public:
		GameObjectRef* createOnImpact; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		float createOnImpactChance; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float spreadAngle; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float spreadVelocityMin; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float spreadVelocityMax; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x68
}
