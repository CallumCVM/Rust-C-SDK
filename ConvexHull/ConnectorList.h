#pragma once

#include "..\MIConvexHull\FaceConnector.h"

namespace MIConvexHull
{
	class ConnectorList : public Object // 0x0
	{
	public:
		MIConvexHull::FaceConnector* first; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		MIConvexHull::FaceConnector* last; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
