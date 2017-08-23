#pragma once

#include "GameObjectRef.h"
#include "BaseEntity.h"
#include "ResourceDispenser.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class BaseCorpse : public BaseCombatEntity // 0x1e8
	{
	public:
		GameObjectRef* prefabRagdoll; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x12)
		BaseEntity* parentEnt; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		ResourceDispenser* resourceDispenser; // 0x1f8 (size: 0x8, flags: 0x83, type: 0x12)
		UnityEngine::GameObject* ragdollObject; // 0x200 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x208
}
