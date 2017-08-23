#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\GameObject.h"
#include "..\Translate\Phrase.h"

namespace rust 
{
	class ShopFrontLootPanel : public LootPanel // 0x20
	{
	public:
		UnityEngine::UI::Text* playerLabelA; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* playerLabelB; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* confirmButton; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* confirmHelp; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* denyButton; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* denyHelp; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* waitingText; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* exchangeInProgressImage; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* acceptedPhrase; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* noOnePhrase; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x70
}
