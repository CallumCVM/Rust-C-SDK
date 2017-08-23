#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class ContactPoint : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Point; // 0x10 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 m_Normal; // 0x1c (size: 0xc, flags: 0x3, type: 0x11)
		int m_ThisColliderInstanceID; // 0x28 (size: 0x4, flags: 0x3, type: 0x8)
		int m_OtherColliderInstanceID; // 0x2c (size: 0x4, flags: 0x3, type: 0x8)
		float m_Separation; // 0x30 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x38
}
