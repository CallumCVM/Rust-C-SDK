#pragma once

#include "..\MIConvexHull\VertexWrap.h"

namespace MIConvexHull
{
	class VertexBuffer : public Object // 0x0
	{
	public:
		MIConvexHull::VertexWrap* items; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int count; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int capacity; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
