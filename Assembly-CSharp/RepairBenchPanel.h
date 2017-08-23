#pragma once

#include "Item.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\Color.h"
#include "..\Translate\Phrase.h"
#include "..\UnityEngine\GameObject.h"
#include "IconSkinPicker.h"

namespace rust 
{
	class RepairBenchPanel : public LootPanel // 0x20
	{
	public:
		Item* _displayItem; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Text* infoText; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* repairButton; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* phraseEmpty; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* phraseNotRepairable; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* phraseRepairNotNeeded; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* skinsPanel; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* changeSkinDialog; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		IconSkinPicker* picker; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color gotColor; // 0x68 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color notGotColor; // 0x78 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x88
}
