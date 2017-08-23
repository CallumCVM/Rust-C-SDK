#pragma once

#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\GPU\CreateTextureRequest.h"
#include "..\UnityEngine\Material.h"
#include "..\GPU\CopyRegionRequest.h"

namespace rust 
{
	class BlockCompress : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Texture2D* lena; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RenderTexture* sourceTex; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* sourceTex2; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* destTex; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* destTex2; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		GPU::CreateTextureRequest* nativeDestTex2Request; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* blockCompressMat; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* temp; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		GPU::CopyRegionRequest* copyRequestDest; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		GPU::CopyRegionRequest* copyRequestDest2; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		int width; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int height; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
