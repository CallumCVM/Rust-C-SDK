#pragma once

#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\TweakUIDropdown\NameValue.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\ConsoleSystem\Command.h"

namespace rust 
{
	class TweakUIDropdown : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Button* Left; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* Right; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* Current; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* BackgroundImage; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		TweakUIDropdown::NameValue* nameValues; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* convarName; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		ConsoleSystem::Command* conVar; // 0x48 (size: 0x8, flags: 0x3, type: 0x12)
		bool assignImageColor; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
		int currentValue; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x58
}
