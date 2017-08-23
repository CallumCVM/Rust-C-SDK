#pragma once

#include "..\UnityStandardAssets\ImageEffects\Bloom\TweakMode.h"
#include "..\UnityStandardAssets\ImageEffects\Bloom\BloomScreenBlendMode.h"
#include "..\UnityStandardAssets\ImageEffects\Bloom\HDRBloomMode.h"
#include "..\UnityStandardAssets\ImageEffects\Bloom\BloomQuality.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityStandardAssets\ImageEffects\Bloom\LensFlareStyle.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class Bloom : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Texture2D* lensFlareVignetteMask; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* lensFlareShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* lensFlareMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* screenBlendShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* screenBlend; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* blurAndFlaresShader; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* blurAndFlaresMaterial; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* brightPassFilterShader; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* brightPassFilterMaterial; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::Bloom::TweakMode tweakMode; // 0x68 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::Bloom::BloomScreenBlendMode screenBlendMode; // 0x6c (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::Bloom::HDRBloomMode hdr; // 0x70 (size: 0x4, flags: 0x6, type: 0x11)
		bool doHdr; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
		float sepBlurSpread; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		UnityStandardAssets::ImageEffects::Bloom::BloomQuality quality; // 0x7c (size: 0x4, flags: 0x6, type: 0x11)
		float bloomIntensity; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		float bloomThreshold; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color bloomThresholdColor; // 0x88 (size: 0x10, flags: 0x6, type: 0x11)
		int bloomBlurIterations; // 0x98 (size: 0x4, flags: 0x6, type: 0x8)
		int hollywoodFlareBlurIterations; // 0x9c (size: 0x4, flags: 0x6, type: 0x8)
		float flareRotation; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
		UnityStandardAssets::ImageEffects::Bloom::LensFlareStyle lensflareMode; // 0xa4 (size: 0x4, flags: 0x6, type: 0x11)
		float hollyStretchWidth; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		float lensflareIntensity; // 0xac (size: 0x4, flags: 0x6, type: 0xc)
		float lensflareThreshold; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		float lensFlareSaturation; // 0xb4 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color flareColorA; // 0xb8 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color flareColorB; // 0xc8 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color flareColorC; // 0xd8 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color flareColorD; // 0xe8 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0xf8
}
