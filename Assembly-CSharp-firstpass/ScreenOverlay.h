#pragma once

#include "..\UnityStandardAssets\ImageEffects\ScreenOverlay\OverlayBlendMode.h"
#include "..\UnityEngine\Texture.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ScreenOverlay : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Texture* texture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* overlayShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* overlayMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::ScreenOverlay::OverlayBlendMode blendMode; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		float intensity; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
