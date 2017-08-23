#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Rendering\StencilOp.h"
#include "..\UnityEngine\Rendering\CompareFunction.h"
#include "..\UnityEngine\Rendering\ColorWriteMask.h"

namespace rust 
{
	class MatEntry : public Object // 0x0
	{
	public:
		UnityEngine::Material* baseMat; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* customMat; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int count; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int stencilId; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Rendering::StencilOp operation; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Rendering::CompareFunction compareFunction; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		int readMask; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int writeMask; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		bool useAlphaClip; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Rendering::ColorWriteMask colorMask; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
