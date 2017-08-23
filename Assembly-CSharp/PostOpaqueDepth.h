#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\RenderTexture.h"
#include "CommandBufferManager.h"

namespace rust 
{
	class PostOpaqueDepth : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::Material* copyDepthMat; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* cameraDepth; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RenderTexture* postOpaqueDepth; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		CommandBufferManager* commandBufferManager; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
