#pragma once

#include "..\UnityEngine\List.h"
#include "GameObjectRef.h"

namespace rust 
{
	class DirectionalDamageTrigger : public TriggerBase // 0x30
	{
	public:
		UnityEngine::List<Rust.DamageTypeEntry>* damageType; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* attackEffect; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float repeatRate; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
