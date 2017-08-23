#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\Color.h"
#include "BaseEntity.h"
#include "..\UnityEngine\Animator.h"

namespace rust 
{
	class LookatHealth : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* container; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* textHealth; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* textStability; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* healthBar; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* healthBarBG; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* previousLookingAt; // 0x40 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Animator* anim; // 0x48 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Color barBGColorNormal; // 0x50 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color barBGColorUnstable; // 0x60 (size: 0x10, flags: 0x6, type: 0x11)
		float idealWidth; // 0x70 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x78
}
