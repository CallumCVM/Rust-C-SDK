#pragma once

#include "..\Rust\DamageTypeEntry.h"

namespace rust 
{
	class ItemModProjectileRadialDamage : public ItemModProjectileMod // 0x18
	{
	public:
		Rust::DamageTypeEntry* damage; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float radius; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
