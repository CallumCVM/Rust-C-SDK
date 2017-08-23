#pragma once

#include "..\System\Collections\Generic\IEnumerable<TCell>.h"
#include "..\System\Collections\Generic\IEnumerable<TEdge>.h"

namespace MIConvexHull
{
	template <typename T0, typename T1, typename T2>
	class VoronoiMesh`3 : public Object // 0x0
	{
	public:
		System::Collections::Generic::IEnumerable<TCell> <Vertices>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IEnumerable<TEdge> <Edges>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
