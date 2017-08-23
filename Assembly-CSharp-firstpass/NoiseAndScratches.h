#pragma once

#include "..\UnityEngine\Texture.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class NoiseAndScratches : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Texture* grainTexture; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture* scratchTexture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* shaderRGB; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* shaderYUV; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_MaterialRGB; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_MaterialYUV; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool monochrome; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		bool rgbFallback; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
		float grainIntensityMin; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float grainIntensityMax; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float grainSize; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float scratchIntensityMin; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float scratchIntensityMax; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float scratchFPS; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float scratchJitter; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float scratchTimeLeft; // 0x68 (size: 0x4, flags: 0x1, type: 0xc)
		float scratchX; // 0x6c (size: 0x4, flags: 0x1, type: 0xc)
		float scratchY; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x78
}
