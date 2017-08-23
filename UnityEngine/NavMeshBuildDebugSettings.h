#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshBuildDebugSettings : public ValueType // 0x0
	{
	public:
		int m_ShowInputGeom; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ShowVoxels; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ShowRegions; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ShowRawContours; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int m_ShowContours; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ShowPolyMesh; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int m_ShowPolyMeshDetail; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int m_UseFocus; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector3 m_FocusPoint; // 0x30 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
