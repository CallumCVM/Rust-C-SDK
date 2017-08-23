#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "ItemCategory.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\AudioClip.h"

namespace rust 
{
	class BlueprintCategoryButton : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* amountLabel; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* BackgroundHighlight; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* clickSound; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* hoverSound; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		ItemCategory Category; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		int CurrentAmount; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		bool Selected; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
