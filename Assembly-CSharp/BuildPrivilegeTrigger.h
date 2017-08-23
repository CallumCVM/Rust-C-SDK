#pragma once

#include "BuildingPrivlidge.h"

namespace rust 
{
	class BuildPrivilegeTrigger : public TriggerBase // 0x30
	{
	public:
		BuildingPrivlidge* privlidgeEntity; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
