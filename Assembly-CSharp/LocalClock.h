#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class LocalClock : public Object // 0x0
	{
	public:
		UnityEngine::List<LocalClock.TimedEvent>* events; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x18
}
