#pragma once

#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class CurvesSettings : public ValueType // 0x0
	{
	public:
		UnityEngine::AnimationCurve* master; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* red; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* green; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* blue; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
