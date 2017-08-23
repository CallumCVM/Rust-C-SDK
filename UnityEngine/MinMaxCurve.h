#pragma once

#include "..\UnityEngine\ParticleSystemCurveMode.h"
#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class MinMaxCurve : public ValueType // 0x0
	{
	public:
		UnityEngine::ParticleSystemCurveMode m_Mode; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		float m_CurveMultiplier; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::AnimationCurve* m_CurveMin; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AnimationCurve* m_CurveMax; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		float m_ConstantMin; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float m_ConstantMax; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
