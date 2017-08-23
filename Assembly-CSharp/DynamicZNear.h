#pragma once

#include "..\UnityEngine\Camera.h"

namespace rust 
{
	class DynamicZNear : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* cam; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		float minimum; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float maximum; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
