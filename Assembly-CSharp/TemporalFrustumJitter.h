#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Vector2.h"

namespace TAA
{
	class TemporalFrustumJitter : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 focalMotionPos; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 focalMotionDir; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 activeSample; // 0x28 (size: 0x8, flags: 0x1, type: 0x11)
		int activeIndex; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int activeCount; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
