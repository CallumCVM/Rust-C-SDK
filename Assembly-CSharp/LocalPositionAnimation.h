#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class LocalPositionAnimation : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::AnimationCurve* movementX; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* movementY; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* movementZ; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 centerPosition; // 0x30 (size: 0xc, flags: 0x6, type: 0x11)
		float scaleX; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float timeScaleX; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float scaleY; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float timeScaleY; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float scaleZ; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float timeScaleZ; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x58
}
