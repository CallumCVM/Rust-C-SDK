#pragma once

#include "..\DeferredMeshDecal\MaterialReplacement.h"

namespace rust 
{
	class MaterialLink : public ValueType // 0x0
	{
	public:
		DeferredMeshDecal::MaterialReplacement* replacement; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int submeshIndex; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
