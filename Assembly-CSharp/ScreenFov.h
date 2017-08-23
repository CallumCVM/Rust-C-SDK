#pragma once

#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class ScreenFov : public BaseScreenShake // 0x20
	{
	public:
		UnityEngine::AnimationCurve* FovAdjustment; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
