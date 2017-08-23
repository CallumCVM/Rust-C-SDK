#pragma once

#include "..\GameMenu\Option.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class Landmine : public BaseTrap // 0x1f0
	{
	public:
		GameMenu::Option __menuOption_Arm_Landmine; // 0x1f0 (size: 0x58, flags: 0x1, type: 0x11)
		GameObjectRef* explosionEffect; // 0x248 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* triggeredEffect; // 0x250 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damageTypes; // 0x258 (size: 0x8, flags: 0x6, type: 0x15)
		float minExplosionRadius; // 0x260 (size: 0x4, flags: 0x6, type: 0xc)
		float explosionRadius; // 0x264 (size: 0x4, flags: 0x6, type: 0xc)
		bool blocked; // 0x268 (size: 0x1, flags: 0x6, type: 0x2)
		unsigned __int64 triggerPlayerID; // 0x270 (size: 0x8, flags: 0x1, type: 0xb)
	}; // size = 0x278
}
