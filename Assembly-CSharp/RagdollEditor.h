#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Rigidbody.h"

namespace rust 
{
	class RagdollEditor : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::Rigidbody* grabbedRigid; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 view; // 0x20 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 grabPos; // 0x2c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 grabOffset; // 0x38 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
