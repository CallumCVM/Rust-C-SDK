#pragma once

#include "..\UnityEngine\Material.h"

namespace rust 
{
	class FoliageKey : public ValueType // 0x0
	{
	public:
		UnityEngine::Material* material; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x18
}
