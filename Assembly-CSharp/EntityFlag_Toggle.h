#pragma once

#include "..\BaseEntity\Flags.h"
#include "..\UnityEngine\Events\UnityEvent.h"

namespace rust 
{
	class EntityFlag_Toggle : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::Events::UnityEvent* onFlagEnabled; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Events::UnityEvent* onFlagDisabled; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool runClientside; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool runServerside; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		BaseEntity::Flags flag; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
		bool hasRunOnce; // 0x38 (size: 0x1, flags: 0x3, type: 0x2)
		bool lastHasFlag; // 0x39 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x40
}
