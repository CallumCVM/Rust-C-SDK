#pragma once

#include "..\UnityStandardAssets\ImageEffects\AAMode.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class Antialiasing : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* ssaaShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* ssaa; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* dlaaShader; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* dlaa; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* nfaaShader; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* nfaa; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shaderFXAAPreset2; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* materialFXAAPreset2; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shaderFXAAPreset3; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* materialFXAAPreset3; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shaderFXAAII; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* materialFXAAII; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shaderFXAAIII; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* materialFXAAIII; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::AAMode mode; // 0x90 (size: 0x4, flags: 0x6, type: 0x11)
		bool showGeneratedNormals; // 0x94 (size: 0x1, flags: 0x6, type: 0x2)
		float offsetScale; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float blurRadius; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		float edgeThresholdMin; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
		float edgeThreshold; // 0xa4 (size: 0x4, flags: 0x6, type: 0xc)
		float edgeSharpness; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		bool dlaaSharp; // 0xac (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xb0
}
