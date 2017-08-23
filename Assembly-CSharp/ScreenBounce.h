#pragma once

#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ScreenBounce : public BaseScreenShake // 0x20
	{
	public:
		UnityEngine::AnimationCurve* bounceScale; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* bounceSpeed; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* bounceViewmodel; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		float bounceTime; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 bounceVelocity; // 0x3c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
