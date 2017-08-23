#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class TOD_Shadows : public TOD_ImageEffect // 0x28
	{
	public:
		UnityEngine::Shader* ShadowShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* CloudTexture; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* shadowMaterial; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		float Cutoff; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float Fade; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float Intensity; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x50
}
