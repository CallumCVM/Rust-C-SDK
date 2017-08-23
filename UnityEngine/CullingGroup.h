#pragma once

#include "..\UnityEngine\CullingGroup\StateChanged.h"

namespace UnityEngine
{
	class CullingGroup : public Object // 0x0
	{
	public:
		__int64 m_Ptr; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		UnityEngine::CullingGroup::StateChanged* m_OnStateChanged; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
