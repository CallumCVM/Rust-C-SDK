#pragma once

#include "FloatConditions.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\Animator.h"

namespace rust 
{
	class VitalNote : public MonoBehaviour // 0x18
	{
	public:
		FloatConditions* showIf; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* valueText; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Animator* animator; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Vital VitalType; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		float lastValue; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		bool show; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
