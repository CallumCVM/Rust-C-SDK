#pragma once

#include "..\NewsSource\Story.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\UI\VerticalLayoutGroup.h"
#include "..\UnityEngine\UI\Button.h"

namespace rust 
{
	class NewsSource : public MonoBehaviour // 0x18
	{
	public:
		NewsSource::Story* story; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UI::Text* title; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* date; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* text; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* authorName; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* image; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::VerticalLayoutGroup* layoutGroup; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* button; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x58
}
