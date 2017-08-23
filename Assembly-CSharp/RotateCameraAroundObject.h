#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class RotateCameraAroundObject : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* m_goObjectToRotateAround; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float m_flRotateSpeed; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
