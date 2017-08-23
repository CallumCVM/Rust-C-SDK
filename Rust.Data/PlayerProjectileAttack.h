#pragma once

#include "..\ProtoBuf\PlayerAttack.h"
#include "..\UnityEngine\Vector3.h"

namespace ProtoBuf
{
	class PlayerProjectileAttack : public Object // 0x0
	{
	public:
		ProtoBuf::PlayerAttack* playerAttack; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::Vector3 hitVelocity; // 0x18 (size: 0xc, flags: 0x86, type: 0x11)
		float hitDistance; // 0x24 (size: 0x4, flags: 0x86, type: 0xc)
		bool ShouldPool; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
