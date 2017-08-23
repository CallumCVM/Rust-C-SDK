#pragma once

#include "..\UnityStandardAssets\ImageEffects\SunShafts\SunShaftsResolution.h"
#include "..\UnityStandardAssets\ImageEffects\SunShafts\ShaftsScreenBlendMode.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class SunShafts : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Transform* sunTransform; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* sunShaftsShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* sunShaftsMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* simpleClearShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* simpleClearMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::SunShafts::SunShaftsResolution resolution; // 0x48 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::SunShafts::ShaftsScreenBlendMode screenBlendMode; // 0x4c (size: 0x4, flags: 0x6, type: 0x11)
		int radialBlurIterations; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Color sunColor; // 0x54 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color sunThreshold; // 0x64 (size: 0x10, flags: 0x6, type: 0x11)
		float sunShaftBlurRadius; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float sunShaftIntensity; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		float maxRadius; // 0x7c (size: 0x4, flags: 0x6, type: 0xc)
		bool useDepthTexture; // 0x80 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x88
}
