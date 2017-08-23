#pragma once

namespace rust 
{
	class TerrainCheckGenerator : public MonoBehaviour // 0x18
	{
	public:
		float PlacementRadius; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float PlacementPadding; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float PlacementFade; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float PlacementDistance; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float CheckExtentsMin; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float CheckExtentsMax; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
