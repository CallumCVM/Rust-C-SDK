#pragma once

#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "ItemDefinition.h"
#include "AddSellOrderManager.h"

namespace rust 
{
	class ItemSearchEntry : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Button* button; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* text; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* image; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* itemInfo; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		AddSellOrderManager* manager; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
