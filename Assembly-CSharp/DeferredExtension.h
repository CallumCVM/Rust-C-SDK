#pragma once

#include "ExtendGBufferParams.h"
#include "SubsurfaceScatteringParams.h"
#include "..\UnityEngine\Camera.h"
#include "CommandBufferManager.h"
#include "..\UnityEngine\Rendering\CameraEvent.h"
#include "..\UnityEngine\Material.h"
#include "..\TAA\TemporalAntiAliasing.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Rendering\RenderTargetIdentifier.h"

namespace rust 
{
	class DeferredExtension : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* _targetCamera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		CommandBufferManager* commandBufferManager; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* postSubsurfaceMat; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		TAA::TemporalAntiAliasing* temporalAA; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* gbufferTexture4; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* gbufferTexture5; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::RenderTargetIdentifier* targets; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		ExtendGBufferParams extendGBuffer; // 0x50 (size: 0x1, flags: 0x6, type: 0x11)
		SubsurfaceScatteringParams subsurfaceScattering; // 0x54 (size: 0x10, flags: 0x6, type: 0x11)
		float depthScale; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		bool debug; // 0x68 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Rendering::CameraEvent extendGBufferCBEvent; // 0x6c (size: 0x4, flags: 0x1, type: 0x11)
		int extendGBufferCBOrderId; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Rendering::CameraEvent postSubsurfaceCBEvent; // 0x74 (size: 0x4, flags: 0x1, type: 0x11)
		int postSubsurfaceCBOrderId; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int frameIndexMod8; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		int temporalAASampleIndex; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		int gbufferWidth; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		int gbufferHeight; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x90
}
