#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\RectTransform.h"
#include "..\UnityEngine\Color.h"
#include "..\AchievementGroup\AchievementItem.h"

namespace rust 
{
	class AchievementTodo : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* text; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RectTransform* checkIcon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RectTransform* checkBox; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		AchievementGroup::AchievementItem* Item; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Color AliveColor; // 0x38 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color DeadColor; // 0x48 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color HighlightColor; // 0x58 (size: 0x10, flags: 0x6, type: 0x11)
		bool State; // 0x68 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x70
}
