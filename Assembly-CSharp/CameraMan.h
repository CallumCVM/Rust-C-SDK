#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class CameraMan : public SingletonComponent`1 // 0x18
	{
	public:
		bool OnlyControlWhenCursorHidden; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		bool NeedBothMouseButtonsToZoom; // 0x19 (size: 0x1, flags: 0x6, type: 0x2)
		float LookSensitivity; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float MoveSpeed; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		bool startCulling; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Vector3 view; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 velocity; // 0x34 (size: 0xc, flags: 0x1, type: 0x11)
		float zoom; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
