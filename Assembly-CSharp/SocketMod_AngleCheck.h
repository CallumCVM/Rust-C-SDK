#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class SocketMod_AngleCheck : public SocketMod // 0xa8
	{
	public:
		bool wantsAngle; // 0xa8 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 worldNormal; // 0xac (size: 0xc, flags: 0x6, type: 0x11)
		float withinDegrees; // 0xb8 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xc0
}
