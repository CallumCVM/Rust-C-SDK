#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class Socket_Free : public Socket_Base // 0xe0
	{
	public:
		UnityEngine::Vector3 idealPlacementNormal; // 0xe0 (size: 0xc, flags: 0x6, type: 0x11)
		bool useTargetNormal; // 0xec (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xf0
}
