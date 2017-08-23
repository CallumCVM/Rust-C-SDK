#pragma once

#include "..\UnityEngine\Vector3.h"
#include "RendererGrid.h"
#include "ListDictionary<RendererKey,RendererGroup>.h"

namespace rust 
{
	class RendererCell : public Object // 0x0
	{
	public:
		RendererGrid* grid; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		ListDictionary<RendererKey,RendererGroup> batches; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Vector3 position; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		bool interrupt; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
