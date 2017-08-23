#pragma once

#include "..\UnityEngine\UI\Toggle.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class ToggleTerrainTrees : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Toggle* toggleControl; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* textControl; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
