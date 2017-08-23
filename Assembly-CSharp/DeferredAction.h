#pragma once

#include "..\UnityEngine\Object.h"
#include "..\System\Action.h"
#include "ActionPriority.h"

namespace rust 
{
	class DeferredAction : public Object // 0x0
	{
	public:
		UnityEngine::Object* sender; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* action; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		ActionPriority priority; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		bool <Idle>k__BackingField; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
