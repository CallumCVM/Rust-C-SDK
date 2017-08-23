#pragma once

#include "..\UnityEngine\UI\Slider.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class ItemSplitter : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Slider* slider; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* textValue; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* splitAmountText; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		float oldAmount; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
