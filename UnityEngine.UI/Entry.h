#pragma once

#include "..\UnityEngine\EventSystems\EventTriggerType.h"
#include "..\UnityEngine\EventSystems\EventTrigger\TriggerEvent.h"

namespace rust 
{
	class Entry : public Object // 0x0
	{
	public:
		UnityEngine::EventSystems::EventTrigger::TriggerEvent* callback; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::EventSystems::EventTriggerType eventID; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
