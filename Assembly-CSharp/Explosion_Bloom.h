#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\RenderTexture.h"

namespace rust 
{
	class Explosion_Bloom : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* m_Shader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_Material; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* m_blurBuffer1; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::RenderTexture* m_blurBuffer2; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		Settings settings; // 0x38 (size: 0x14, flags: 0x6, type: 0x11)
		int m_Threshold; // 0x4c (size: 0x4, flags: 0x1, type: 0x8)
		int m_Curve; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int m_PrefilterOffs; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		int m_SampleScale; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Intensity; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int m_BaseTex; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
