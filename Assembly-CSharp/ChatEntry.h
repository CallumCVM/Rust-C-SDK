#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\Texture.h"

namespace rust 
{
	class ChatEntry : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* text; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* avatar; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture* defaultTexture; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float lifeStarted; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		unsigned __int64 steamid; // 0x40 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x48
}
