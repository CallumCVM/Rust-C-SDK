#pragma once

#include "..\UnityEngine\Texture.h"

namespace rust 
{
	class CC_LookupFilter : public CC_Base // 0x28
	{
	public:
		UnityEngine::Texture* lookupTexture; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
