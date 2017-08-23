#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshModifier : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<int>* m_AffectedAgents; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		bool m_OverrideArea; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int m_Area; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_IgnoreFromBuild; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
