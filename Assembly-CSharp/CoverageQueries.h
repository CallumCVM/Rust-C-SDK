#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class CoverageQueries : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* camera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* coverageMat; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool debug; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		float depthBias; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
