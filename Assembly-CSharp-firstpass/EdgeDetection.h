#pragma once

#include "..\UnityStandardAssets\ImageEffects\EdgeDetection\EdgeDetectMode.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class EdgeDetection : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* edgeDetectShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* edgeDetectMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::EdgeDetection::EdgeDetectMode mode; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		float sensitivityDepth; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float sensitivityNormals; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float lumThreshold; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float edgeExp; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float sampleDist; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float edgesOnly; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color edgesOnlyBgColor; // 0x4c (size: 0x10, flags: 0x6, type: 0x11)
		UnityStandardAssets::ImageEffects::EdgeDetection::EdgeDetectMode oldMode; // 0x5c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
