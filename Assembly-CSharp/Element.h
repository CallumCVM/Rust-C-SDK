#pragma once

#include "ByteQuadtree.h"

namespace rust 
{
	class Element : public ValueType // 0x0
	{
	public:
		ByteQuadtree* source; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int x; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int y; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int level; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
