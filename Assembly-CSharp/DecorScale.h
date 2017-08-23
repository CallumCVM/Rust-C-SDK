#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class DecorScale : public DecorComponent // 0x98
	{
	public:
		UnityEngine::Vector3 MinScale; // 0x98 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 MaxScale; // 0xa4 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0xb0
}
