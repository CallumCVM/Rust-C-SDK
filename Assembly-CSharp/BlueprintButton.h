#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\GameObject.h"
#include "ItemBlueprint.h"

namespace rust 
{
	class BlueprintButton : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* name; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* subtitle; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* image; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* button; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* group; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* gotColor; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* notGotColor; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::CanvasGroup* LockedGroup; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* LockedPrice; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* LockedImageBackground; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* LockedLevel; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		ItemBlueprint* blueprint; // 0x70 (size: 0x8, flags: 0x3, type: 0x12)
		float craftableFraction; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color LockedCannotUnlockColor; // 0x7c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color LockedCanUnlockColor; // 0x8c (size: 0x10, flags: 0x6, type: 0x11)
		bool needsRefresh; // 0x9c (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0xa0
}
