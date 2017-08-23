#pragma once

#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\GameObject.h"
#include "Item.h"

namespace rust 
{
	class ResearchTablePanel : public LootPanel // 0x20
	{
	public:
		UnityEngine::UI::Button* researchButton; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* timerText; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemDescNoItem; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemDescTooBroken; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemDescNotResearchable; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemDescTooMany; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* itemTakeBlueprint; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* successChanceText; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		Item* _researchItem; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Color gotColor; // 0x68 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color notGotColor; // 0x78 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color chanceColor; // 0x88 (size: 0x10, flags: 0x6, type: 0x11)
		bool wasResearching; // 0x98 (size: 0x1, flags: 0x86, type: 0x2)
	}; // size = 0xa0
}
