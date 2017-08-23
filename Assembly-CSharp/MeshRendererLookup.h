#pragma once

#include "..\MeshRendererLookup\LookupGroup.h"

namespace rust 
{
	class MeshRendererLookup : public Object // 0x0
	{
	public:
		MeshRendererLookup::LookupGroup* src; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		MeshRendererLookup::LookupGroup* dst; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
