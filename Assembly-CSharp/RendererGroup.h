#pragma once

#include "ListHashSet<RendererBatch>.h"
#include "..\UnityEngine\List.h"
#include "RendererGrid.h"
#include "RendererCell.h"
#include "RendererKey.h"

namespace rust 
{
	class RendererGroup : public Object // 0x0
	{
	public:
		ListHashSet<RendererBatch> Renderers; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<RendererBatch>* TempRenderers; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MeshRendererBatch>* Batches; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MeshRendererBatch>* TempBatches; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MeshRendererInstance>* TempInstances; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		RendererGrid* grid; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		RendererCell* cell; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		RendererKey key; // 0x48 (size: 0x10, flags: 0x1, type: 0x11)
		bool Invalidated; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool NeedsRefresh; // 0x59 (size: 0x1, flags: 0x6, type: 0x2)
		bool Processing; // 0x5a (size: 0x1, flags: 0x6, type: 0x2)
		bool Preserving; // 0x5b (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x60
}
