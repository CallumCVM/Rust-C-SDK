#pragma once

#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\MeshFilter.h"

namespace rust 
{
	class DeployGuide : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::MeshRenderer* meshRenderer; // 0x18 (size: 0x8, flags: 0x81, type: 0x12)
		UnityEngine::MeshFilter* meshFilter; // 0x20 (size: 0x8, flags: 0x81, type: 0x12)
		bool hidden; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool isGoodPlacement; // 0x29 (size: 0x1, flags: 0x86, type: 0x2)
	}; // size = 0x30
}
