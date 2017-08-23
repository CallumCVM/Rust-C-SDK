#pragma once

#include "BaseTrap.h"

namespace rust 
{
	class BaseTrapTrigger : public TriggerBase // 0x30
	{
	public:
		BaseTrap* _trap; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
