#pragma once

#include "..\UnityEngine\Vector3.h"
#include "ListHashSet<ILOD>.h"

namespace rust 
{
	class LODCell : public Object // 0x0
	{
	public:
		ListHashSet<ILOD> members; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Vector3 Position; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
