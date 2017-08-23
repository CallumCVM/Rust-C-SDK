#pragma once

#include "GameObjectRef.h"
#include "ItemAmount.h"

namespace rust 
{
	class ItemModSwap : public ItemMod // 0x20
	{
	public:
		GameObjectRef* actionEffect; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		ItemAmount* becomeItem; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		bool sendPlayerPickupNotification; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool sendPlayerDropNotification; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		float xpScale; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
