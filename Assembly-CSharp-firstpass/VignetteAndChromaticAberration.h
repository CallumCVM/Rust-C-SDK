#pragma once

#include "..\UnityStandardAssets\ImageEffects\VignetteAndChromaticAberration\AberrationMode.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class VignetteAndChromaticAberration : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* vignetteShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* separableBlurShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* chromAberrationShader; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_VignetteMaterial; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_SeparableBlurMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_ChromAberrationMaterial; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::VignetteAndChromaticAberration::AberrationMode mode; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		float intensity; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float chromaticAberration; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float axialAberration; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float blur; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float blurSpread; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float luminanceDependency; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		float blurDistance; // 0x6c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x70
}
