#pragma once

#include "..\OcclusionCulling\DebugSettings.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\ComputeShader.h"
#include "OcclusionCamera.h"
#include "..\UnityEngine\Vector4.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class OcclusionCulling : public MonoBehaviour // 0x18
	{
	public:
		OcclusionCulling::DebugSettings* debugSettings; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ComputeShader* computeShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		OcclusionCamera* occlusionCamera; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector4* frustumPlanes; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** frustumPropNames; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		float* matrixToFloatTemp; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Material* fallbackMat; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::LayerMask occluderMask; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		bool usingFallback; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
