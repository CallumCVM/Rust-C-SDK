#pragma once

#include "..\UnityStandardAssets\ImageEffects\Tonemapping\TonemapperType.h"
#include "..\UnityStandardAssets\ImageEffects\Tonemapping\AdaptiveTexSize.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\RenderTextureFormat.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class Tonemapping : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::AnimationCurve* remapCurve; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* curveTex; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* tonemapper; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* tonemapMaterial; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* rt; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::Tonemapping::TonemapperType type; // 0x48 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::Tonemapping::AdaptiveTexSize adaptiveTextureSize; // 0x4c (size: 0x4, flags: 0x6, type: 0x11)
		float exposureAdjustment; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float middleGrey; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float white; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float adaptionSpeed; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		bool validRenderTextureFormat; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::RenderTextureFormat rtFormat; // 0x64 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
