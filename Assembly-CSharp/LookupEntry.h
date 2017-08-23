#pragma once

#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class LookupEntry : public ValueType // 0x0
	{
	public:
		UnityEngine::Renderer* renderer; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x18
}
