#pragma once

#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class ScreenRotate : public BaseScreenShake // 0x20
	{
	public:
		UnityEngine::AnimationCurve* Pitch; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* Yaw; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* Roll; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* ViewmodelEffect; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		bool useViewModelEffect; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
