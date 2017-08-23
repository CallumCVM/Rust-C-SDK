#pragma once

#include "RendererBatch.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class ConstructionSkin : public BasePrefab // 0x20
	{
	public:
		RendererBatch* rendererBatches; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::List<UnityEngine.GameObject>* conditionals; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x30
}
