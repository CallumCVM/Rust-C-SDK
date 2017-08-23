#pragma once

#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ScreenSpaceAmbientObscurance : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Texture2D* rand; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* aoShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* aoMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float intensity; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float radius; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		int blurIterations; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		float blurFilterDistance; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		int downsample; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x50
}
