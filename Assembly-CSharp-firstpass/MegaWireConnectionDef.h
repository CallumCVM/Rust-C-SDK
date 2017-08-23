#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MegaWireConnectionDef : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 inOffset; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 outOffset; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
		float radius; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
