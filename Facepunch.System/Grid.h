#pragma once

#include "..\Spatial\Grid\Node<T,T>[,].h"
#include "..\System\Collections\Generic\Dictionary<T,Spatial\Grid\Node<T,T>>.h"

namespace Spatial
{
	template <typename T0>
	class Grid : public Object // 0x0
	{
	public:
		Spatial::Grid::Node<T,T>[,] Nodes; // 0x10 (size: 0x8, flags: 0x1, type: 0x14)
		System::Collections::Generic::Dictionary<T,Spatial::Grid::Node<T,T>> Lookup; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		int <CellCount>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int <CellSize>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		float CenterX; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float CenterY; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
