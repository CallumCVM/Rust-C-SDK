#pragma once

#include "..\GPU\ForceLevelCountRequest.h"
#include "TextureCacheState.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TerrainTexturing : public TerrainExtension // 0x30
	{
	public:
		GPU::ForceLevelCountRequest* atlasDiffuseLevelsRequest; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		GPU::ForceLevelCountRequest* atlasNormalLevelsRequest; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* diffuseBasePyramid; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* normalBasePyramid; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* compressedDiffuseBasePyramid; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* compressedNormalBasePyramid; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* copyBlockCompressMat; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.RenderTexture>* temporaryRTs; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<GPU.CopyRegionRequest>* temporaryReqs; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::RenderTexture* coarseHeightSlopeMap; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString*[,] layerShaderPropNames; // 0x80 (size: 0x8, flags: 0x1, type: 0x14)
		bool debugFoliageDisplacement; // 0x88 (size: 0x1, flags: 0x6, type: 0x2)
		bool initialized; // 0x89 (size: 0x1, flags: 0x1, type: 0x2)
		TextureCacheState pyramidCacheState; // 0x8c (size: 0x4, flags: 0x1, type: 0x11)
		int basePyramidSize; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		int basePyramidMipCount; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
		TextureCacheState coarseHeightSlopeCacheState; // 0x98 (size: 0x4, flags: 0x1, type: 0x11)
		int prevCoarseHeightDownscale; // 0x9c (size: 0x4, flags: 0x1, type: 0x8)
		bool prevDebugFoliageDisplacement; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
		bool triggerUpdateGlobalParams; // 0xa1 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa8
}
