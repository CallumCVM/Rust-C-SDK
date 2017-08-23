#pragma once

#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class CausticsAnimation : public Object // 0x0
	{
	public:
		UnityEngine::Texture2D* framesShallow; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Texture2D* framesDeep; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		float frameRate; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
