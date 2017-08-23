#pragma once

#include "..\UnityEngine\UI\Toggle.h"
#include "..\UnityEngine\UI\Text.h"
#include "LayerSelect.h"

namespace rust 
{
	class ToggleLayer : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Toggle* toggleControl; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* textControl; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		LayerSelect layer; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
