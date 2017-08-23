#pragma once

#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\RectTransform.h"

namespace rust 
{
	class Crosshair : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* anim; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::RectTransform* rectTransform; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
