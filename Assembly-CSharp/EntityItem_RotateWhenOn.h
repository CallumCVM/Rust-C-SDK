#pragma once

#include "..\EntityItem_RotateWhenOn\State.h"
#include "..\BaseEntity\Flags.h"
#include "Sound.h"

namespace rust 
{
	class EntityItem_RotateWhenOn : public EntityComponent`1 // 0x20
	{
	public:
		EntityItem_RotateWhenOn::State* on; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		EntityItem_RotateWhenOn::State* off; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* movementLoop; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool currentlyOn; // 0x38 (size: 0x1, flags: 0x3, type: 0x2)
		bool stateInitialized; // 0x39 (size: 0x1, flags: 0x3, type: 0x2)
		BaseEntity::Flags targetFlag; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
