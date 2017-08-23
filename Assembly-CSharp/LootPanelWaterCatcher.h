#pragma once

#include "ItemIcon.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Button.h"

namespace rust 
{
	class LootPanelWaterCatcher : public LootPanel // 0x20
	{
	public:
		ItemIcon* sourceItem; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* capacityImage; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* helpCanvas; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* buttonsCanvas; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* fromButton; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* toButton; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* drinkButton; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x58
}
