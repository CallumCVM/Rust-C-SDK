#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Shader.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ContrastEnhance : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Material* separableBlurMaterial; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* contrastCompositeMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* separableBlurShader; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* contrastCompositeShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float intensity; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float threshold; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float blurSpread; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x50
}
