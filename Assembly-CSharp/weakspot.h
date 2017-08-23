#pragma once

#include "BaseHelicopter.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "GameObjectRef.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class weakspot : public Object // 0x0
	{
	public:
		BaseHelicopter* body; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::UnicodeString** bonenames; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		GameObjectRef* destroyedParticles; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* damagedParticles; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* damagedEffect; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* destroyedEffect; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<BasePlayer>* attackers; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		float maxHealth; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float health; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float healthFractionOnDestroyed; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		bool isDestroyed; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
