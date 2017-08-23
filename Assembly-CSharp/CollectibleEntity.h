#pragma once

#include "..\Translate\Phrase.h"
#include "ItemAmount.h"
#include "GameObjectRef.h"

namespace rust 
{
	class CollectibleEntity : public BaseEntity // 0x130
	{
	public:
		Translate::Phrase* itemName; // 0x130 (size: 0x8, flags: 0x6, type: 0x12)
		ItemAmount* itemList; // 0x138 (size: 0x8, flags: 0x6, type: 0x1d)
		GameObjectRef* pickupEffect; // 0x140 (size: 0x8, flags: 0x6, type: 0x12)
		float xpScale; // 0x148 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x150
}
