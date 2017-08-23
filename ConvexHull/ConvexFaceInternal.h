#pragma once

#include "..\MIConvexHull\ConvexFaceInternal.h"
#include "..\MIConvexHull\VertexBuffer.h"
#include "..\MIConvexHull\VertexWrap.h"

namespace MIConvexHull
{
	class ConvexFaceInternal : public Object // 0x0
	{
	public:
		MIConvexHull::ConvexFaceInternal* AdjacentFaces; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		MIConvexHull::VertexBuffer* VerticesBeyond; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MIConvexHull::VertexWrap* FurthestVertex; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		MIConvexHull::VertexWrap* Vertices; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		double* Normal; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		MIConvexHull::ConvexFaceInternal* Previous; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		MIConvexHull::ConvexFaceInternal* Next; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		bool IsNormalFlipped; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		double Offset; // 0x50 (size: 0x8, flags: 0x6, type: 0xd)
		int Tag; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		bool InList; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x60
}
