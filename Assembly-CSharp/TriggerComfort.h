#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class TriggerComfort : public TriggerBase // 0x30
	{
	public:
		UnityEngine::List<BasePlayer>* _players; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		float triggerSize; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float baseComfort; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float minComfortRange; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
