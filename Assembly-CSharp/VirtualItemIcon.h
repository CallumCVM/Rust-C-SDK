#pragma once

#include "ItemDefinition.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\CanvasGroup.h"

namespace rust 
{
	class VirtualItemIcon : public MonoBehaviour // 0x18
	{
	public:
		ItemDefinition* itemDef; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* iconImage; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* amountText; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* iconContents; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* conditionObject; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* conditionFill; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* maxConditionFill; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* cornerIcon; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		int itemAmount; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x60
}
