#pragma once

#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class ExplosionsScaleCurves : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::AnimationCurve* ScaleCurveX; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* ScaleCurveY; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* ScaleCurveZ; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* t; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 GraphTimeMultiplier; // 0x38 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 GraphScaleMultiplier; // 0x44 (size: 0xc, flags: 0x6, type: 0x11)
		float startTime; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
		float evalX; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
		float evalY; // 0x58 (size: 0x4, flags: 0x1, type: 0xc)
		float evalZ; // 0x5c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x60
}
