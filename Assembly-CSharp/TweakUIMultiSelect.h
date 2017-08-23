#pragma once

#include "..\UnityEngine\UI\ToggleGroup.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\ConsoleSystem\Command.h"

namespace rust 
{
	class TweakUIMultiSelect : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::ToggleGroup* toggleGroup; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* convarName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		ConsoleSystem::Command* conVar; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x30
}
