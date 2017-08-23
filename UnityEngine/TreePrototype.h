#pragma once

#include "..\UnityEngine\GameObject.h"

namespace UnityEngine
{
	class TreePrototype : public Object // 0x0
	{
	public:
		UnityEngine::GameObject* m_Prefab; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		float m_BendFactor; // 0x18 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x20
}
