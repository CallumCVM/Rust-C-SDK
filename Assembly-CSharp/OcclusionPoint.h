#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class OcclusionPoint : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 offset; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		bool isOccluded; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
