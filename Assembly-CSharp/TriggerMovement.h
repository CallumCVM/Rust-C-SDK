#pragma once

#include "..\BaseEntity\MovementModify.h"

namespace rust 
{
	class TriggerMovement : public TriggerBase // 0x30
	{
	public:
		BaseEntity::MovementModify movementModify; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
