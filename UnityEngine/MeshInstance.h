#pragma once

#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector4.h"

namespace rust 
{
	class MeshInstance : public ValueType // 0x0
	{
	public:
		int meshInstanceID; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int rendererInstanceID; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int additionalVertexStreamsMeshInstanceID; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Matrix4x4 transform; // 0x1c (size: 0x40, flags: 0x6, type: 0x11)
		UnityEngine::Vector4 lightmapScaleOffset; // 0x5c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector4 realtimeLightmapScaleOffset; // 0x6c (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x80
}
