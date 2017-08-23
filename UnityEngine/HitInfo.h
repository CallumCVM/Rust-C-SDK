#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Camera.h"

namespace rust 
{
	class HitInfo : public ValueType // 0x0
	{
	public:
		UnityEngine::GameObject* target; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Camera* camera; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
