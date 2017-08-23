#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class ItemModConsumable : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<ItemModConsumable.ConsumableEffect>* effects; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		int amountToConsume; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
