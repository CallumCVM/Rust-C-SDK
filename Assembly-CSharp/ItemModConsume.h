#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "ItemAmountRandom.h"

namespace rust 
{
	class ItemModConsume : public ItemMod // 0x20
	{
	public:
		GameObjectRef* consumeEffect; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* eatGesture; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		ItemAmountRandom* product; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x38
}
