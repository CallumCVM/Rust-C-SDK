#pragma once

#include "..\UnityStandardAssets\ImageEffects\TiltShift\TiltShiftMode.h"
#include "..\UnityStandardAssets\ImageEffects\TiltShift\TiltShiftQuality.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class TiltShift : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* tiltShiftShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* tiltShiftMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::TiltShift::TiltShiftMode mode; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::TiltShift::TiltShiftQuality quality; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
		float blurArea; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float maxBlurSize; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		int downsample; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x48
}
