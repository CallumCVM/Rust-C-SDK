#pragma once

#include "..\UnityEngine\AnimationCurve.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityStandardAssets\ImageEffects\ColorCorrectionCurves\ColorCorrectionMode.h"
#include "..\UnityEngine\Shader.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ColorCorrectionCurves : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::AnimationCurve* redChannel; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* greenChannel; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* blueChannel; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* zCurve; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* depthRedChannel; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* depthGreenChannel; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* depthBlueChannel; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* ccMaterial; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* ccDepthMaterial; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* selectiveCcMaterial; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* rgbChannelTex; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* rgbDepthChannelTex; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* zCurveTex; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* colorCorrectionCurvesShader; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* simpleColorCorrectionCurvesShader; // 0x90 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* colorCorrectionSelectiveShader; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		bool useDepthCorrection; // 0xa0 (size: 0x1, flags: 0x6, type: 0x2)
		float saturation; // 0xa4 (size: 0x4, flags: 0x6, type: 0xc)
		bool selectiveCc; // 0xa8 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Color selectiveFromColor; // 0xac (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color selectiveToColor; // 0xbc (size: 0x10, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::ColorCorrectionCurves::ColorCorrectionMode mode; // 0xcc (size: 0x4, flags: 0x6, type: 0x11)
		bool updateTextures; // 0xd0 (size: 0x1, flags: 0x6, type: 0x2)
		bool updateTexturesOnStartup; // 0xd1 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xd8
}
