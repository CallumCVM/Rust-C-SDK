#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class BoundingSphere : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 position; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		float radius; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
