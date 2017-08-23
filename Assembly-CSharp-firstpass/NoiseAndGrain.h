#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\FilterMode.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class NoiseAndGrain : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Texture2D* noiseTexture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* noiseShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* noiseMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* dx11NoiseShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* dx11NoiseMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		float intensityMultiplier; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float generalIntensity; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float blackIntensity; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float whiteIntensity; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float midGrey; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		bool dx11Grain; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		float softness; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		bool monochrome; // 0x64 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 intensities; // 0x68 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 tiling; // 0x74 (size: 0xc, flags: 0x6, type: 0x11)
		float monochromeTiling; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::FilterMode filterMode; // 0x84 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x88
}
