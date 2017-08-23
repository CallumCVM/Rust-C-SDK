#pragma once

#include "InputMessage.h"
#include "..\UnityEngine\Vector3.h"
#include "ModelState.h"

namespace rust 
{
	class PlayerTick : public Object // 0x0
	{
	public:
		InputMessage* inputState; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		ModelState* modelState; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::Vector3 position; // 0x20 (size: 0xc, flags: 0x86, type: 0x11)
		unsigned int activeItem; // 0x2c (size: 0x4, flags: 0x86, type: 0x9)
		UnityEngine::Vector3 eyePos; // 0x30 (size: 0xc, flags: 0x86, type: 0x11)
		bool ShouldPool; // 0x3c (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x3d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
