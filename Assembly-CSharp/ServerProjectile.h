#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ServerProjectile : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::Vector3 initialVelocity; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		float drag; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float gravityModifier; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float speed; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float scanRange; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 _currentVelocity; // 0x3c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
