#pragma once

#include "..\UnityEngine\Collider.h"

namespace rust 
{
	class RealmedCollider : public BasePrefab // 0x20
	{
	public:
		UnityEngine::Collider* ServerCollider; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Collider* ClientCollider; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
