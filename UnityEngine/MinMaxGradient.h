#pragma once

#include "..\UnityEngine\ParticleSystemGradientMode.h"
#include "..\UnityEngine\Gradient.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class MinMaxGradient : public ValueType // 0x0
	{
	public:
		UnityEngine::ParticleSystemGradientMode m_Mode; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Gradient* m_GradientMin; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Gradient* m_GradientMax; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Color m_ColorMin; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color m_ColorMax; // 0x38 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
