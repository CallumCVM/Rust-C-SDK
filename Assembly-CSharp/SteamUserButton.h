#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class SteamUserButton : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* steamName; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* avatar; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color textColorInGame; // 0x28 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color textColorOnline; // 0x38 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color textColorNormal; // 0x48 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x58
}
