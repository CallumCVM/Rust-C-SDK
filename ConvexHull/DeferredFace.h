#pragma once

#include "..\MIConvexHull\ConvexFaceInternal.h"

namespace MIConvexHull
{
	class DeferredFace : public Object // 0x0
	{
	public:
		MIConvexHull::ConvexFaceInternal* Face; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		MIConvexHull::ConvexFaceInternal* Pivot; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MIConvexHull::ConvexFaceInternal* OldFace; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int FaceIndex; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int PivotIndex; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
