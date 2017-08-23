#pragma once

#include "VirtualItemIcon.h"
#include "..\UnityEngine\GameObject.h"
#include "ItemSearchEntry.h"
#include "..\UnityEngine\UI\InputField.h"
#include "VendingPanelAdmin.h"

namespace rust 
{
	class AddSellOrderManager : public MonoBehaviour // 0x18
	{
	public:
		VirtualItemIcon* sellItemIcon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		VirtualItemIcon* currencyItemIcon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemSearchParent; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ItemSearchEntry* itemSearchEntryPrefab; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* sellItemInput; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* sellItemAmount; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* currencyItemInput; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* currencyItemAmount; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		VendingPanelAdmin* adminPanel; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x60
}
