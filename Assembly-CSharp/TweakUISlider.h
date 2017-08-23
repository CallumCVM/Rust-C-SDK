#pragma once

#include "..\UnityEngine\UI\Slider.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\ConsoleSystem\Command.h"

namespace rust 
{
	class TweakUISlider : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Slider* sliderControl; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* textControl; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* convarName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		ConsoleSystem::Command* conVar; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x38
}
