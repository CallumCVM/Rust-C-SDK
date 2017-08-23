#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"

namespace rust 
{
	class HudElement : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* ValueText; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UI::Image* FilledImage; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		float LastValue; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
