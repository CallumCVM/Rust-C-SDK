#pragma once

#include "..\UnityStandardAssets\ImageEffects\BloomOptimized\Resolution.h"
#include "..\UnityStandardAssets\ImageEffects\BloomOptimized\BlurType.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class BloomOptimized : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* fastBloomShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* fastBloomMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float threshold; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float intensity; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float blurSize; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		UnityStandardAssets::ImageEffects::BloomOptimized::Resolution resolution; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		int blurIterations; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		UnityStandardAssets::ImageEffects::BloomOptimized::BlurType blurType; // 0x44 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
