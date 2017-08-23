#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshModifierVolume : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<int>* m_AffectedAgents; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Vector3 m_Size; // 0x20 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Center; // 0x2c (size: 0xc, flags: 0x1, type: 0x11)
		int m_Area; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
