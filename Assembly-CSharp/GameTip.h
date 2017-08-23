#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class GameTip : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::CanvasGroup* canvasGroup; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* text; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
