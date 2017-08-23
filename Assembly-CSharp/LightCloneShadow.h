#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Light.h"
#include "..\UnityEngine\Rendering\CommandBuffer.h"

namespace rust 
{
	class LightCloneShadow : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* shaderPropNameMap; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::RenderTexture* map; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* shaderPropNameMask; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::RenderTexture* mask; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Light* light; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::CommandBuffer* mapCB; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rendering::CommandBuffer* maskCB; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool cloneShadowMap; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
		int cloneShadowMapDownscale; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		bool cloneShadowMask; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		int cloneShadowMaskDownscale; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
		int screenWidth; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int screenHeight; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
