#pragma once

#include "GameObjectRef.h"

namespace rust 
{
	class CameraTool : public HeldEntity // 0x180
	{
	public:
		GameObjectRef* screenshotEffect; // 0x180 (size: 0x8, flags: 0x6, type: 0x12)
		float cameraFOV; // 0x188 (size: 0x4, flags: 0x86, type: 0xc)
		float focalDistance; // 0x18c (size: 0x4, flags: 0x86, type: 0xc)
		float focalDistanceSmooth; // 0x190 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x198
}
