#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Rust
{
	namespace Ai
{
	class ScanForPositions : public BaseAction // 0x18
	{
	public:
		UnityEngine::UnicodeString* AreaName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		float SamplingRange; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		int SampleRings; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		bool CalculatePath; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		float CalculatePathInnerCirclePercentageThreshold; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		bool ScanAllAreas; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool SampleTerrainHeight; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
