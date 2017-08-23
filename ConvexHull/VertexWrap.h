#pragma once

#include "..\MIConvexHull\IVertex.h"

namespace MIConvexHull
{
	class VertexWrap : public Object // 0x0
	{
	public:
		MIConvexHull::IVertex* Vertex; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		double* PositionData; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		int Index; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		bool Marked; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
