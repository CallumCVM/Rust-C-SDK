#pragma once

#include "..\Rust\Ai\CoverPointVolume.h"

namespace Rust
{
	namespace Ai
{
	class ManualCoverPoint : public FacepunchBehaviour // 0x18
	{
	public:
		bool* FullCoverDirections; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		bool* PartialCoverDirections; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		float* VisibilityRange; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		Rust::Ai::CoverPointVolume* Volume; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		float Score; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
