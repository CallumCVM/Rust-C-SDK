#pragma once

#include "VirtualItemIcon.h"
#include "ItemDefinition.h"
#include "..\UnityEngine\GameObject.h"
#include "LootPanelVendingMachine.h"
#include "UIIntegerEntry.h"

namespace rust 
{
	class SellOrderEntry : public MonoBehaviour // 0x18
	{
	public:
		VirtualItemIcon* MerchandiseIcon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		VirtualItemIcon* CurrencyIcon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* merchandiseInfo; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		ItemDefinition* currencyInfo; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* buyButton; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* cantaffordNotification; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* outOfStockNotification; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		LootPanelVendingMachine* vendingPanel; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UIIntegerEntry* intEntry; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		int merchandiseSellSize; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int currencyAmountPerItem; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		bool dirty; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		int index; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
