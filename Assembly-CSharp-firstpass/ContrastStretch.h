#pragma once

#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ContrastStretch : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::RenderTexture* adaptRenderTex; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Shader* shaderLum; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_materialLum; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shaderReduce; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_materialReduce; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shaderAdapt; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_materialAdapt; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shaderApply; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_materialApply; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		float adaptationSpeed; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float limitMinimum; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float limitMaximum; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		int curAdaptIndex; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
