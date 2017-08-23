#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class Branding : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* versionText; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* devBranchExtra; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
