#pragma once

#include "..\UnityEngine\UI\Image.h"
#include "Tooltip.h"
#include "..\UnityEngine\UI\Text.h"
#include "ItemBlueprint.h"

namespace rust 
{
	class QuickCraftButton : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Image* icon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Tooltip* tooltip; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* CraftCount; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ItemBlueprint* bp; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int skinId; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int oldCount; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
