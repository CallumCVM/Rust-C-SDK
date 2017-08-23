#pragma once

#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector4.h"

namespace UnityEngine
{
	class CombineInstance : public ValueType // 0x0
	{
	public:
		int m_MeshInstanceID; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_SubMeshIndex; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Matrix4x4 m_Transform; // 0x18 (size: 0x40, flags: 0x1, type: 0x11)
		UnityEngine::Vector4 m_LightmapScaleOffset; // 0x58 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector4 m_RealtimeLightmapScaleOffset; // 0x68 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x78
}
