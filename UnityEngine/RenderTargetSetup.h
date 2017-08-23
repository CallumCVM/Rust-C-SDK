#pragma once

#include "..\UnityEngine\RenderBuffer.h"
#include "..\UnityEngine\CubemapFace.h"
#include "..\UnityEngine\Rendering\RenderBufferLoadAction.h"
#include "..\UnityEngine\Rendering\RenderBufferStoreAction.h"

namespace UnityEngine
{
	class RenderTargetSetup : public ValueType // 0x0
	{
	public:
		UnityEngine::RenderBuffer* color; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::RenderBuffer depth; // 0x18 (size: 0x10, flags: 0x6, type: 0x11)
		int mipLevel; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::CubemapFace cubemapFace; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		int depthSlice; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Rendering::RenderBufferLoadAction* colorLoad; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Rendering::RenderBufferStoreAction* colorStore; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Rendering::RenderBufferLoadAction depthLoad; // 0x48 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Rendering::RenderBufferStoreAction depthStore; // 0x4c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
