#pragma once

#include "..\UnityEngine\Animator.h"
#include "BaseEntity.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"

namespace rust 
{
	class LookatTooltip : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* tooltipAnimator; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* currentlyLookingAt; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* textLabel; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* icon; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		int lastInfoHash; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
