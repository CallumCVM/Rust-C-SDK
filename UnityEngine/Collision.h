#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Collider.h"
#include "..\UnityEngine\ContactPoint.h"

namespace UnityEngine
{
	class Collision : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 m_Impulse; // 0x10 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 m_RelativeVelocity; // 0x1c (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Rigidbody* m_Rigidbody; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Collider* m_Collider; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::ContactPoint* m_Contacts; // 0x38 (size: 0x8, flags: 0x3, type: 0x1d)
	}; // size = 0x40
}
