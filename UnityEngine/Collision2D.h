#pragma once

#include "..\UnityEngine\ContactPoint2D.h"
#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	class Collision2D : public Object // 0x0
	{
	public:
		int m_Collider; // 0x10 (size: 0x4, flags: 0x3, type: 0x8)
		int m_OtherCollider; // 0x14 (size: 0x4, flags: 0x3, type: 0x8)
		int m_Rigidbody; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
		int m_OtherRigidbody; // 0x1c (size: 0x4, flags: 0x3, type: 0x8)
		UnityEngine::ContactPoint2D* m_Contacts; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		UnityEngine::Vector2 m_RelativeVelocity; // 0x28 (size: 0x8, flags: 0x3, type: 0x11)
		int m_Enabled; // 0x30 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x38
}
