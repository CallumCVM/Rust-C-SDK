#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"

namespace Rust
{
	namespace UI
{
	class LoadingBar : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* Canvas; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* Label; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* SubLabel; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* ProgressImage; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
