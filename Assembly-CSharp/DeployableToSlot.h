#pragma once

#include "..\BaseEntity\Slot.h"

namespace rust 
{
	class DeployableToSlot : public MonoBehaviour // 0x18
	{
	public:
		BaseEntity::Slot slot; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
