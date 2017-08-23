#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class DecorTransform : public DecorComponent // 0x98
	{
	public:
		UnityEngine::Vector3 Position; // 0x98 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 Rotation; // 0xa4 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 Scale; // 0xb0 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0xc0
}
