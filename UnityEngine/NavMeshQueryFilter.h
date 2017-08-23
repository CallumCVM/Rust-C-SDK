#pragma once

namespace UnityEngine
{
	namespace AI
{
	class NavMeshQueryFilter : public ValueType // 0x0
	{
	public:
		int m_AreaMask; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_AgentTypeID; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		float* m_AreaCost; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
