#pragma once

#include "..\UnityStandardAssets\ImageEffects\ScreenSpaceAmbientOcclusion\SSAOSamples.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Texture2D.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ScreenSpaceAmbientOcclusion : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* m_SSAOShader; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_SSAOMaterial; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* m_RandomTexture; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		float m_Radius; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		UnityStandardAssets::ImageEffects::ScreenSpaceAmbientOcclusion::SSAOSamples m_SampleCount; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
		float m_OcclusionIntensity; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		int m_Blur; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		int m_Downsampling; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		float m_OcclusionAttenuation; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float m_MinZ; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		bool m_Supported; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
