#pragma once

#include "..\UnityEngine\GameObject.h"
#include "LifeInfographic.h"
#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\GraphicRaycaster.h"
#include "NeedsCursor.h"

namespace rust 
{
	class UIDeathScreen : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* sleepingBagIconPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* sleepingBagContainer; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		LifeInfographic* previousLifeInfographic; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Animator* screenAnimator; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0x38 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UI::GraphicRaycaster* graphicRaycaster; // 0x40 (size: 0x8, flags: 0x4, type: 0x12)
		NeedsCursor* needsCursor; // 0x48 (size: 0x8, flags: 0x4, type: 0x12)
		bool fadeIn; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x58
}
