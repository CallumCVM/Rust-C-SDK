#pragma once

#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\System\Action.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class IconSkin : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Image* icon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* text; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* onChanged; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* itemType; // 0x30 (size: 0x8, flags: 0x3, type: 0xe)
		int inventoryId; // 0x38 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x40
}
