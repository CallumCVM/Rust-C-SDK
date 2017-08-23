#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Texture.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class VisualizeTexelDensity : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::Camera* mainCamera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* texelDensityCamera; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* texelDensityRT; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture* texelDensityGradTex; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* texelDensityOverlayMat; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int screenWidth; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		int screenHeight; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
