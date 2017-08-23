#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\MaterialPropertyBlock.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class RenderState : public ValueType // 0x0
	{
	public:
		UnityEngine::Camera* camera; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int layer; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		bool simulation; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool displacement; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
		int reflections; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		bool caustics; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		int visibilityMask; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::List<WaterCullingVolume>* cullingVolumes; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x40
}
