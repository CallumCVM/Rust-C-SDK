#pragma once

#include "..\UnityEngine\Collider.h"

namespace rust 
{
	class DontBecomeSolidWithPlayerInside : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Collider* colliders; // 0x18 (size: 0x8, flags: 0x3, type: 0x1d)
	}; // size = 0x20
}
