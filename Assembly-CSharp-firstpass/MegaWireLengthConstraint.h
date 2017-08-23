#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MegaWireLengthConstraint : public MegaWireConstraint // 0x20
	{
	public:
		int p1; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int p2; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		float length; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 moveVector; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
