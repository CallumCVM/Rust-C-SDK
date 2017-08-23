#pragma once

#include "TFace.h"
#include "TVertex.h"

namespace MIConvexHull
{
	template <typename T0, typename T1>
	class ConvexFace`2 : public Object // 0x0
	{
	public:
		TFace* <Adjacency>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		TVertex* <Vertices>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		double* <Normal>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
