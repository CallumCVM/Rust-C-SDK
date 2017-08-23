#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class AnimationEventForward : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* targetObject; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
