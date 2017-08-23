#pragma once

namespace rust 
{
	class MeshBatch : public MonoBehaviour // 0x18
	{
	public:
		bool <NeedsRefresh>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		int <Count>k__BackingField; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int <BatchedCount>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int <VertexCount>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
