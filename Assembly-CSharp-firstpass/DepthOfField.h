#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityStandardAssets\ImageEffects\DepthOfField\BlurType.h"
#include "..\UnityStandardAssets\ImageEffects\DepthOfField\BlurSampleCount.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\ComputeBuffer.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class DepthOfField : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Transform* focalTransform; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* dofHdrShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* dofHdrMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* dx11BokehShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* dx11bokehMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* dx11BokehTexture; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ComputeBuffer* cbDrawArgs; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::ComputeBuffer* cbPoints; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		bool visualizeFocus; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		float focalLength; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float focalSize; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		float aperture; // 0x6c (size: 0x4, flags: 0x6, type: 0xc)
		float maxBlurSize; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		bool highResolution; // 0x74 (size: 0x1, flags: 0x6, type: 0x2)
		UnityStandardAssets::ImageEffects::DepthOfField::BlurType blurType; // 0x78 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::DepthOfField::BlurSampleCount blurSampleCount; // 0x7c (size: 0x4, flags: 0x6, type: 0x11)
		bool nearBlur; // 0x80 (size: 0x1, flags: 0x6, type: 0x2)
		float foregroundOverlap; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		float dx11BokehThreshold; // 0x88 (size: 0x4, flags: 0x6, type: 0xc)
		float dx11SpawnHeuristic; // 0x8c (size: 0x4, flags: 0x6, type: 0xc)
		float dx11BokehScale; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		float dx11BokehIntensity; // 0x94 (size: 0x4, flags: 0x6, type: 0xc)
		float focalDistance01; // 0x98 (size: 0x4, flags: 0x1, type: 0xc)
		float internalBlurWidth; // 0x9c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0xa0
}
