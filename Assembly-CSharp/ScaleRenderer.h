#pragma once

#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class ScaleRenderer : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Renderer* myRenderer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool useRandomScale; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		float scaleMin; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float scaleMax; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float lastScale; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		bool hasInitialValues; // 0x30 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x38
}
