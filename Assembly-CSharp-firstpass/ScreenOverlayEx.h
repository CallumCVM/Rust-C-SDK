#pragma once

#include "..\UnityEngine\Texture.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class ScreenOverlayEx : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Texture* texture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture* normals; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* overlayShader; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* overlayMaterial; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		OverlayBlendMode blendMode; // 0x40 (size: 0x4, flags: 0x6, type: 0x11)
		float intensity; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
