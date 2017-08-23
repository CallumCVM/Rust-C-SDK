#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class ItemModSound : public ItemMod // 0x20
	{
	public:
		GameObjectRef* effect; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Type actionType; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
