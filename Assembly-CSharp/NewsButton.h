#pragma once

#include "..\NewsSource\Story.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\Vector2.h"

namespace rust 
{
	class NewsButton : public MonoBehaviour // 0x18
	{
	public:
		NewsSource::Story story; // 0x18 (size: 0x30, flags: 0x6, type: 0x11)
		UnityEngine::CanvasGroup* canvasGroup; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* text; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* author; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* image; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		int storyNumber; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		float randomness; // 0x6c (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector2 textureSize; // 0x70 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x78
}
