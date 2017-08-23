#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MegaWireSection : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 p; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 p1; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
		float length; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float seglength; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
