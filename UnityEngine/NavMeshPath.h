#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshPath : public Object // 0x0
	{
	public:
		__int64 m_Ptr; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
		UnityEngine::Vector3* m_corners; // 0x18 (size: 0x8, flags: 0x3, type: 0x1d)
	}; // size = 0x20
}
