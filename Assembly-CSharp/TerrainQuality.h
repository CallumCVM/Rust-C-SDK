#pragma once

#include "..\ConsoleSystem\Command.h"

namespace rust 
{
	class TerrainQuality : public TerrainExtension // 0x30
	{
	public:
		ConsoleSystem::Command* terrain_quality; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		ConsoleSystem::Command* graphics_shaderlod; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		float HeightMapError; // 0x40 (size: 0x4, flags: 0x3, type: 0xc)
		float BaseMapDistance; // 0x44 (size: 0x4, flags: 0x3, type: 0xc)
		int TerrainShaderLod; // 0x48 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x50
}
