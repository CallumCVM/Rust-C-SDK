#pragma once

#include "..\UnityStandardAssets\ImageEffects\TweakMode34.h"
#include "..\UnityStandardAssets\ImageEffects\BloomScreenBlendMode.h"
#include "..\UnityStandardAssets\ImageEffects\HDRBloomMode.h"
#include "..\UnityStandardAssets\ImageEffects\LensflareStyle34.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class BloomAndFlares : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Texture2D* lensFlareVignetteMask; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* lensFlareShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* lensFlareMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* vignetteShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* vignetteMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* separableBlurShader; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* separableBlurMaterial; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* addBrightStuffOneOneShader; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* addBrightStuffBlendOneOneMaterial; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* screenBlendShader; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* screenBlend; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* hollywoodFlaresShader; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* hollywoodFlaresMaterial; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* brightPassFilterShader; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* brightPassFilterMaterial; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::TweakMode34 tweakMode; // 0x98 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::BloomScreenBlendMode screenBlendMode; // 0x9c (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::HDRBloomMode hdr; // 0xa0 (size: 0x4, flags: 0x6, type: 0x11)
		bool doHdr; // 0xa4 (size: 0x1, flags: 0x1, type: 0x2)
		float sepBlurSpread; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		float useSrcAlphaAsMask; // 0xac (size: 0x4, flags: 0x6, type: 0xc)
		float bloomIntensity; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		float bloomThreshold; // 0xb4 (size: 0x4, flags: 0x6, type: 0xc)
		int bloomBlurIterations; // 0xb8 (size: 0x4, flags: 0x6, type: 0x8)
		bool lensflares; // 0xbc (size: 0x1, flags: 0x6, type: 0x2)
		int hollywoodFlareBlurIterations; // 0xc0 (size: 0x4, flags: 0x6, type: 0x8)
		UnityStandardAssets::ImageEffects::LensflareStyle34 lensflareMode; // 0xc4 (size: 0x4, flags: 0x6, type: 0x11)
		float hollyStretchWidth; // 0xc8 (size: 0x4, flags: 0x6, type: 0xc)
		float lensflareIntensity; // 0xcc (size: 0x4, flags: 0x6, type: 0xc)
		float lensflareThreshold; // 0xd0 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color flareColorA; // 0xd4 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color flareColorB; // 0xe4 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color flareColorC; // 0xf4 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color flareColorD; // 0x104 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x118
}
