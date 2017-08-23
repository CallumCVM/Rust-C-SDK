#pragma once

#include "..\UnityEngine\CanvasRenderer.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\AudioSource.h"

namespace rust 
{
	class LoadingScreen : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::CanvasRenderer* panel; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* title; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* subtitle; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* skipButton; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioSource* music; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
