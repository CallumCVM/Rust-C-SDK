#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"

namespace rust 
{
	class UIVoiceIcon : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* nameText; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* avatar; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
