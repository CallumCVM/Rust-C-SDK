#pragma once

#include "..\UnityEngine\Animator.h"

namespace rust 
{
	class VitalInfo : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* animator; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Vital VitalType; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool show; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
