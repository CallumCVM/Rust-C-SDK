#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class LayerCullDistance : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* Layer; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		float Distance; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
