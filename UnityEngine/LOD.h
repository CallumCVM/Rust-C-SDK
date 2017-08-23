#pragma once

#include "..\UnityEngine\Renderer.h"

namespace UnityEngine
{
	class LOD : public ValueType // 0x0
	{
	public:
		float screenRelativeTransitionHeight; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float fadeTransitionWidth; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Renderer* renderers; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
