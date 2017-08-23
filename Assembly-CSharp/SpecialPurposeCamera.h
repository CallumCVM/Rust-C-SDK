#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Rendering\CommandBuffer.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\ListHashSet<SpecialPurposeCamera\RenderEntry>.h"
#include "InstancingContainer.h"
#include "..\UnityEngine\Rendering\CameraEvent.h"

namespace rust 
{
	class SpecialPurposeCamera : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Camera* camera; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RenderTexture* texture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rendering::CommandBuffer* commands; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ListHashSet<SpecialPurposeCamera::RenderEntry> dynamicEntries; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		InstancingContainer* dynamicBuffer; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		ListHashSet<SpecialPurposeCamera::RenderEntry> staticEntries; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		InstancingContainer* staticBuffer; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool dirty; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 position; // 0x54 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x60 (size: 0x10, flags: 0x3, type: 0x11)
		float orthographicSize; // 0x70 (size: 0x4, flags: 0x3, type: 0xc)
		float nearClipPlane; // 0x74 (size: 0x4, flags: 0x3, type: 0xc)
		float farClipPlane; // 0x78 (size: 0x4, flags: 0x3, type: 0xc)
		bool created; // 0x7c (size: 0x1, flags: 0x3, type: 0x2)
		UnityEngine::Rendering::CameraEvent cameraEvent; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x88
}
