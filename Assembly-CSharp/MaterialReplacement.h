#pragma once

#include "..\UnityEngine\Material.h"

namespace rust 
{
	class MaterialReplacement : public Object // 0x0
	{
	public:
		UnityEngine::Material* reference; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int refCount; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
