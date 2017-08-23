#pragma once

#include "..\System\Collections\Generic\IEnumerable<TVertex>.h"
#include "..\System\Collections\Generic\IEnumerable<TFace>.h"

namespace MIConvexHull
{
	template <typename T0, typename T1>
	class ConvexHull`2 : public Object // 0x0
	{
	public:
		System::Collections::Generic::IEnumerable<TVertex> <Points>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IEnumerable<TFace> <Faces>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
