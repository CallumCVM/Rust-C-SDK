#pragma once

#include "..\UnityEngine\GameObject.h"

namespace Facepunch
{
	template <typename T0>
	class GameObjectPool : public ObjectPool`1 // 0x18
	{
	public:
		UnityEngine::GameObject* poolRoot; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
