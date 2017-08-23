#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Image.h"

namespace rust 
{
	class LanguageSelection : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* languagePopup; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* buttonContainer; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* flagImage; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
