#pragma once

#include "SubsurfaceProfile.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\MaterialPropertyBlock.h"
#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class DeferredExtensionMesh : public MonoBehaviour // 0x18
	{
	public:
		SubsurfaceProfile* subsurfaceProfile; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<DeferredExtensionMesh.MaterialLink>* materialLinks; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::MaterialPropertyBlock* _block; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Renderer* _renderer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool isVisible; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
