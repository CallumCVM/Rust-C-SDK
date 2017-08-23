#pragma once

#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Text.h"

namespace rust 
{
	class CraftingNotice : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::RectTransform* rotatingIcon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* itemName; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* craftSeconds; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
