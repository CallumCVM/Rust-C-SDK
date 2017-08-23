#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class ViewmodelAttachment : public EntityComponent`1 // 0x20
	{
	public:
		GameObjectRef* modelObject; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* targetBone; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::GameObject* spawnedGameObject; // 0x30 (size: 0x8, flags: 0x86, type: 0x12)
		bool hideViewModelIronSights; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
