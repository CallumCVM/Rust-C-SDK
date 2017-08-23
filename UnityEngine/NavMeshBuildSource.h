#pragma once

#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\AI\NavMeshBuildSourceShape.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshBuildSource : public ValueType // 0x0
	{
	public:
		UnityEngine::Matrix4x4 m_Transform; // 0x10 (size: 0x40, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Size; // 0x50 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::AI::NavMeshBuildSourceShape m_Shape; // 0x5c (size: 0x4, flags: 0x1, type: 0x11)
		int m_Area; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int m_InstanceID; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ComponentID; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
