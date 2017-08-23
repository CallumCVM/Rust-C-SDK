#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\List.h"

namespace ProtoBuf
{
	class Helicopter : public Object // 0x0
	{
	public:
		UnityEngine::List<float>* weakspothealths; // 0x10 (size: 0x8, flags: 0x86, type: 0x15)
		UnityEngine::Vector3 tiltRot; // 0x18 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 leftGun; // 0x24 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 rightGun; // 0x30 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 spotlightVec; // 0x3c (size: 0xc, flags: 0x86, type: 0x11)
		bool ShouldPool; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
