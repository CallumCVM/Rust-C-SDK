#pragma once

#include "..\UnityEngine\MeshFilter.h"
#include "..\UnityEngine\MeshRenderer.h"

namespace rust 
{
	class Gib : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::MeshFilter* meshFilter; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::MeshRenderer* meshRenderer; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
	}; // size = 0x28
}
