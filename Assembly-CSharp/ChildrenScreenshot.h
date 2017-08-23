#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ChildrenScreenshot : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* folder; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Vector3 offsetAngle; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		int width; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int height; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		float fieldOfView; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
