#pragma once

#include "..\UnityEngine\Collider.h"

namespace rust 
{
	class IgnoreCollision : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Collider* collider; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
