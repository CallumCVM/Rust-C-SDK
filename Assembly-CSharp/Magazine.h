#pragma once

#include "..\BaseProjectile\Magazine\Definition.h"
#include "ItemDefinition.h"

namespace rust 
{
	class Magazine : public Object // 0x0
	{
	public:
		ItemDefinition* ammoType; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		BaseProjectile::Magazine::Definition definition; // 0x18 (size: 0x8, flags: 0x6, type: 0x11)
		int capacity; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int contents; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
