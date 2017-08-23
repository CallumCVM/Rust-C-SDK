#pragma once

#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class MeshGroupCull : public LODComponent // 0x28
	{
	public:
		UnityEngine::Renderer* meshRenderers; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		float Distance; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		int curlod; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		bool force; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
