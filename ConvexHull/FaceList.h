#pragma once

#include "..\MIConvexHull\ConvexFaceInternal.h"

namespace MIConvexHull
{
	class FaceList : public Object // 0x0
	{
	public:
		MIConvexHull::ConvexFaceInternal* first; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		MIConvexHull::ConvexFaceInternal* last; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
