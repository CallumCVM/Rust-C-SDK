#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\Transform.h"
#include "BaseEntity.h"

namespace rust 
{
	class ParticleEmitFromParentObject : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* bonename; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Transform* bone; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		BaseEntity* entity; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Bounds bounds; // 0x30 (size: 0x18, flags: 0x1, type: 0x11)
		float lastBoundsUpdate; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x50
}
