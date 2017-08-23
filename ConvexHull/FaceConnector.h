#pragma once

#include "..\MIConvexHull\ConvexFaceInternal.h"
#include "..\MIConvexHull\FaceConnector.h"

namespace MIConvexHull
{
	class FaceConnector : public Object // 0x0
	{
	public:
		MIConvexHull::ConvexFaceInternal* Face; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int* Vertices; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		MIConvexHull::FaceConnector* Previous; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		MIConvexHull::FaceConnector* Next; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		int EdgeIndex; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int HashCode; // 0x34 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x38
}
