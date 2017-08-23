#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class CreaseShading : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* blurShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* blurMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* depthFetchShader; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* depthFetchMaterial; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* creaseApplyShader; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* creaseApplyMaterial; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		float intensity; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		int softness; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		float spread; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x60
}
