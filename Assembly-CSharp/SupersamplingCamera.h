#pragma once

#include "..\UnityEngine\Camera.h"

namespace rust 
{
	class SupersamplingCamera : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Camera* sceneCamera; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
