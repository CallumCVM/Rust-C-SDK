#pragma once

#include "..\UnityEngine\TrailRenderer.h"

namespace rust 
{
	class ScaleTrailRenderer : public ScaleRenderer // 0x38
	{
	public:
		UnityEngine::TrailRenderer* trailRenderer; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		float startWidth; // 0x40 (size: 0x4, flags: 0x81, type: 0xc)
		float endWidth; // 0x44 (size: 0x4, flags: 0x81, type: 0xc)
		float duration; // 0x48 (size: 0x4, flags: 0x81, type: 0xc)
	}; // size = 0x50
}
