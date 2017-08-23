#pragma once

#include "..\UnityStandardAssets\ImageEffects\DepthOfFieldDeprecated\Dof34QualitySetting.h"
#include "..\UnityStandardAssets\ImageEffects\DepthOfFieldDeprecated\DofResolution.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityStandardAssets\ImageEffects\DepthOfFieldDeprecated\DofBlurriness.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityStandardAssets\ImageEffects\DepthOfFieldDeprecated\BokehDestination.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\RenderTexture.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class DepthOfFieldDeprecated : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Transform* objectFocus; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* dofBlurShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* dofBlurMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* dofShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* dofMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* bokehShader; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* bokehTexture; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* bokehMaterial; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* _camera; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* foregroundTexture; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* mediumRezWorkTexture; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* finalDefocus; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* lowRezWorkTexture; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* bokehSource; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* bokehSource2; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::Dof34QualitySetting quality; // 0x98 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::DofResolution resolution; // 0x9c (size: 0x4, flags: 0x6, type: 0x11)
		bool simpleTweakMode; // 0xa0 (size: 0x1, flags: 0x6, type: 0x2)
		float focalPoint; // 0xa4 (size: 0x4, flags: 0x6, type: 0xc)
		float smoothness; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		float focalZDistance; // 0xac (size: 0x4, flags: 0x6, type: 0xc)
		float focalZStartCurve; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		float focalZEndCurve; // 0xb4 (size: 0x4, flags: 0x6, type: 0xc)
		float focalStartCurve; // 0xb8 (size: 0x4, flags: 0x1, type: 0xc)
		float focalEndCurve; // 0xbc (size: 0x4, flags: 0x1, type: 0xc)
		float focalDistance01; // 0xc0 (size: 0x4, flags: 0x1, type: 0xc)
		float focalSize; // 0xc4 (size: 0x4, flags: 0x6, type: 0xc)
		UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::DofBlurriness bluriness; // 0xc8 (size: 0x4, flags: 0x6, type: 0x11)
		float maxBlurSpread; // 0xcc (size: 0x4, flags: 0x6, type: 0xc)
		float foregroundBlurExtrude; // 0xd0 (size: 0x4, flags: 0x6, type: 0xc)
		bool visualize; // 0xd4 (size: 0x1, flags: 0x6, type: 0x2)
		UnityStandardAssets::ImageEffects::DepthOfFieldDeprecated::BokehDestination bokehDestination; // 0xd8 (size: 0x4, flags: 0x6, type: 0x11)
		float widthOverHeight; // 0xdc (size: 0x4, flags: 0x1, type: 0xc)
		float oneOverBaseSize; // 0xe0 (size: 0x4, flags: 0x1, type: 0xc)
		bool bokeh; // 0xe4 (size: 0x1, flags: 0x6, type: 0x2)
		bool bokehSupport; // 0xe5 (size: 0x1, flags: 0x6, type: 0x2)
		float bokehScale; // 0xe8 (size: 0x4, flags: 0x6, type: 0xc)
		float bokehIntensity; // 0xec (size: 0x4, flags: 0x6, type: 0xc)
		float bokehThresholdContrast; // 0xf0 (size: 0x4, flags: 0x6, type: 0xc)
		float bokehThresholdLuminance; // 0xf4 (size: 0x4, flags: 0x6, type: 0xc)
		int bokehDownsample; // 0xf8 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x100
}
