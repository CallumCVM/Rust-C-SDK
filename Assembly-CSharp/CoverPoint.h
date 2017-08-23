#pragma once

#include "..\Rust\Ai\CoverPointVolume.h"
#include "..\UnityEngine\Vector3.h"
#include "BaseEntity.h"

namespace Rust
{
	namespace Ai
{
	class CoverPoint : public Object // 0x0
	{
	public:
		Rust::Ai::CoverPointVolume* <Volume>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool* FullCoverDirections; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		bool* PartialCoverDirections; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		float* VisibilityRange; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		BaseEntity* <ReservedFor>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 LocalPosition; // 0x38 (size: 0xc, flags: 0x6, type: 0x11)
		float <Score>k__BackingField; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
