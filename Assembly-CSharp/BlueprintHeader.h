#pragma once

#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class BlueprintHeader : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* categoryName; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* unlockCount; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
