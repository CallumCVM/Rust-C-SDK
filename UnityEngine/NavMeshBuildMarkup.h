#pragma once

namespace UnityEngine
{
	namespace AI
{
	class NavMeshBuildMarkup : public ValueType // 0x0
	{
	public:
		int m_OverrideArea; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Area; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int m_IgnoreFromBuild; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int m_InstanceID; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
