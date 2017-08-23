#pragma once

#include "..\UnityEngine\Camera.h"
#include "OcclusionCulling.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\ShadowQuality.h"
#include "..\System\Action.h"

namespace rust 
{
	class OcclusionCamera : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* camera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		OcclusionCulling* owner; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* referenceCamera; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* downscaleMat; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* blitCopyMat; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* hiZLevels; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::RenderTexture* hiZTexture; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnPreCullCall; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* OnPostRenderCall; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		int width; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int height; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::ShadowQuality savedShadows; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
