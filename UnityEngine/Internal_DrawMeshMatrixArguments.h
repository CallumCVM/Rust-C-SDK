#pragma once

#include "..\UnityEngine\Matrix4x4.h"

namespace UnityEngine
{
	class Internal_DrawMeshMatrixArguments : public ValueType // 0x0
	{
	public:
		int layer; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int submeshIndex; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Matrix4x4 matrix; // 0x18 (size: 0x40, flags: 0x6, type: 0x11)
		int castShadows; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int receiveShadows; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
		int reflectionProbeAnchorInstanceID; // 0x60 (size: 0x4, flags: 0x6, type: 0x8)
		bool useLightProbes; // 0x64 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x68
}
