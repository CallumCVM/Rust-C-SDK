#pragma once

#include "..\UnityEngine\FilterMode.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class ISONoise : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Texture2D* noiseTexture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* noiseShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* noiseMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float monochromeTiling; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::FilterMode filterMode; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
