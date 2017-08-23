#pragma once

#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class DeferredMeshDecal : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Renderer* renderer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<DeferredMeshDecal.MaterialLink>* materialLinks; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		bool isVisible; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
