#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\Terrain.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Material.h"
#include "CommandBufferManager.h"

namespace rust 
{
	class LargeScaleOcclusion : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::Terrain* terrain; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* lsoCamObj; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* lsoCam; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* cam; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* heightRT; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* randomTex; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Color* randomData; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Material* computeMat; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* blurMat; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		CommandBufferManager* commandBufferManager; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		float TexelsPerMeter; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask CullingMask; // 0x6c (size: 0x4, flags: 0x6, type: 0x11)
		bool DebugOcclusion; // 0x70 (size: 0x1, flags: 0x6, type: 0x2)
		bool DebugHeightMap; // 0x71 (size: 0x1, flags: 0x6, type: 0x2)
		float DebugHeightMapSize; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float Intensity; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		float KernelRadius; // 0x7c (size: 0x4, flags: 0x6, type: 0xc)
		float PowerExponent; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		float Bias; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		bool BlurEnabled; // 0x88 (size: 0x1, flags: 0x6, type: 0x2)
		int BlurPasses; // 0x8c (size: 0x4, flags: 0x6, type: 0x8)
		float BlurDepthThreshold; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		bool ready; // 0x94 (size: 0x1, flags: 0x1, type: 0x2)
		int resolution; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xa0
}
