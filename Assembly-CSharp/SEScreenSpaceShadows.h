#pragma once

#include "..\UnityEngine\Rendering\CommandBuffer.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Light.h"
#include "..\UnityEngine\Material.h"
#include "..\System\Object.h"
#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class SEScreenSpaceShadows : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Rendering::CommandBuffer* blendShadowsCommandBuffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::CommandBuffer* renderShadowsCommandBuffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* attachedCamera; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Light* sun; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object initChecker; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::Texture2D* noBlendTex; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool sunInitialized; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		int temporalJitterCounter; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		float blendStrength; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float accumulation; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float lengthFade; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float range; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float zThickness; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		int samples; // 0x6c (size: 0x4, flags: 0x6, type: 0x8)
		float nearSampleQuality; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		float traceBias; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		bool stochasticSampling; // 0x78 (size: 0x1, flags: 0x6, type: 0x2)
		bool leverageTemporalAA; // 0x79 (size: 0x1, flags: 0x6, type: 0x2)
		bool bilateralBlur; // 0x7a (size: 0x1, flags: 0x6, type: 0x2)
		int blurPasses; // 0x7c (size: 0x4, flags: 0x6, type: 0x8)
		float blurDepthTolerance; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		bool previousBilateralBlurSetting; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
		int previousBlurPassesSetting; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x90
}
