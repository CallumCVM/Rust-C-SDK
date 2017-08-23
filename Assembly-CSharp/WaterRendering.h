#pragma once

#include "SSRControlParams.h"
#include "CausticsAnimation.h"
#include "Water.h"
#include "..\UnityEngine\Renderer.h"
#include "WaterRadialMesh.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Rendering\RenderTargetIdentifier.h"
#include "..\UnityEngine\Camera.h"
#include "CommandBufferManager.h"

namespace rust 
{
	class WaterRendering : public Object // 0x0
	{
	public:
		SSRControlParams* SSRControl; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		CausticsAnimation* CausticsAnimation; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Water* water; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* renderer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		WaterRadialMesh* radialMesh; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		RenderState state; // 0x38 (size: 0x30, flags: 0x1, type: 0x11)
		UnityEngine::Material* backgroundOceanMat; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* backgroundRiverMat; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* backgroundLakeMat; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* reflectionMat; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* underwaterMat; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* multiCopyMat; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* surfaceTex; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* preFogBackgroundTex; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* ssrReflectionTex; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Mesh* overlayMesh; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::RenderTargetIdentifier* targets; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Camera* camera; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		CommandBufferManager* commandBufferManager; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		float MaxDisplacementDistance; // 0xd0 (size: 0x4, flags: 0x6, type: 0xc)
		bool hasValidCausticsAnims; // 0xd4 (size: 0x1, flags: 0x1, type: 0x2)
		bool useMRTBlendingFallback; // 0xd5 (size: 0x1, flags: 0x1, type: 0x2)
		bool initializedMaterials; // 0xd6 (size: 0x1, flags: 0x1, type: 0x2)
		bool initialized; // 0xd7 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xd8
}
