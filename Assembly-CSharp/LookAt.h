#pragma once

#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class LookAt : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* target; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
