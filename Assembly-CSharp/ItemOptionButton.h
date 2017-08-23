#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"
#include "Item.h"
#include "..\GameMenu\Option.h"

namespace rust 
{
	class ItemOptionButton : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* name; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* icon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Item* item; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		GameMenu::Option option; // 0x30 (size: 0x58, flags: 0x3, type: 0x11)
	}; // size = 0x88
}
