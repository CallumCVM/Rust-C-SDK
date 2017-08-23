#pragma once

#include "..\UnityStandardAssets\ImageEffects\BlurOptimized\BlurType.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class BlurOptimized : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* blurShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* blurMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int downsample; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		float blurSize; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		int blurIterations; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		UnityStandardAssets::ImageEffects::BlurOptimized::BlurType blurType; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
