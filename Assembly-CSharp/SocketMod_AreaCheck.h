#pragma once

#include "..\UnityEngine\LayerMask.h"

namespace rust 
{
	class SocketMod_AreaCheck : public SocketMod // 0xa8
	{
	public:
		bool wantsInside; // 0xa8 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::LayerMask layerMask; // 0xac (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0xb0
}
