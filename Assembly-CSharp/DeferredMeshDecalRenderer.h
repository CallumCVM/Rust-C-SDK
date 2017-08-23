#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Rendering\CameraEvent.h"
#include "..\UnityEngine\Rendering\CommandBuffer.h"
#include "..\UnityEngine\Rendering\RenderTargetIdentifier.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class DeferredMeshDecalRenderer : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* targetCamera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::CommandBuffer* commandBuffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::RenderTargetIdentifier* targets; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Material* multiCopyMat; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::CameraEvent commandBufferEvent; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		bool useMRTBlendingFallback; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
