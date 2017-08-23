#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class ItemModBlueprintCraft : public ItemMod // 0x20
	{
	public:
		GameObjectRef* successEffect; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
