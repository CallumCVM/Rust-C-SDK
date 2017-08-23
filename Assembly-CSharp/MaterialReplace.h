#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class MaterialReplace : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* FindName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Material* Find; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* Replace; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
