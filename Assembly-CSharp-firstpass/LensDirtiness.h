#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\RenderTextureFormat.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class LensDirtiness : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* Shader_Dirtiness; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* Material_Dirtiness; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* RTT_BloomThreshold; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* RTT_1; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* RTT_2; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* RTT_3; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* RTT_4; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* RTT_Bloom_1; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* RTT_Bloom_2; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* DirtinessTexture; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RenderTextureFormat RTT_Format; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		int ScreenX; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int ScreenY; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		bool ShowScreenControls; // 0x74 (size: 0x1, flags: 0x6, type: 0x2)
		bool SceneTintsBloom; // 0x75 (size: 0x1, flags: 0x6, type: 0x2)
		float gain; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		float threshold; // 0x7c (size: 0x4, flags: 0x6, type: 0xc)
		float BloomSize; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		float Dirtiness; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color BloomColor; // 0x88 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x98
}
