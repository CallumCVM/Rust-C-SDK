#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class WorldItem_HideIf : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::Material* overrideMaterial; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* disableGameObjects; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		bool ifOwnedByLocalPlayer; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool ifInFirstPersonMode; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		bool lastHidden; // 0x32 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x38
}
