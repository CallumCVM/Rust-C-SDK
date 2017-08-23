#pragma once

#include "..\UnityEngine\Matrix4x4.h"

namespace rust 
{
	class SubMeshInstance : public ValueType // 0x0
	{
	public:
		int meshInstanceID; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int vertexOffset; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int gameObjectInstanceID; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int subMeshIndex; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Matrix4x4 transform; // 0x20 (size: 0x40, flags: 0x6, type: 0x11)
	}; // size = 0x60
}
