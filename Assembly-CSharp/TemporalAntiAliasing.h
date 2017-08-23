#pragma once

#include "..\TAA\TemporalFrustumJitter\Pattern.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\TAA\TemporalFrustumJitter.h"

namespace TAA
{
	class TemporalAntiAliasing : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* m_Shader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_Material; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* m_Camera; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* m_History; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		TAA::TemporalFrustumJitter* frustumJitter; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		TAA::TemporalFrustumJitter::Pattern jitterPattern; // 0x40 (size: 0x4, flags: 0x6, type: 0x11)
		float patternScale; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		int haltonSequenceLength; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		float sharpeningAmount; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float sharpenFilterWidth; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float staticBlurAmount; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float motionBlurAmount; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float motionAmplificationAmount; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Matrix4x4 m_PreviousViewProjectionMatrix; // 0x60 (size: 0x40, flags: 0x1, type: 0x11)
		int m_SampleIndex; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xa8
}
