#pragma once

#include "GameObjectRef.h"
#include "BasePlayer.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class ColdBreath : public BaseMonoBehaviour // 0x18
	{
	public:
		GameObjectRef* effect; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		BasePlayer* player; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* jawBone; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
