#pragma once

#include "..\UnityEngine\CharacterController.h"
#include "..\UnityEngine\Collider.h"
#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class ControllerColliderHit : public Object // 0x0
	{
	public:
		UnityEngine::CharacterController* m_Controller; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Collider* m_Collider; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::Vector3 m_Point; // 0x20 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 m_Normal; // 0x2c (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 m_MoveDirection; // 0x38 (size: 0xc, flags: 0x3, type: 0x11)
		float m_MoveLength; // 0x44 (size: 0x4, flags: 0x3, type: 0xc)
		int m_Push; // 0x48 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x50
}
