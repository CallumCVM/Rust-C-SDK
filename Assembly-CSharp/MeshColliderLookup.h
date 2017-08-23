#pragma once

#include "..\MeshColliderLookup\LookupGroup.h"

namespace rust 
{
	class MeshColliderLookup : public Object // 0x0
	{
	public:
		MeshColliderLookup::LookupGroup* src; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		MeshColliderLookup::LookupGroup* dst; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
