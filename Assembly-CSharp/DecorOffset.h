#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class DecorOffset : public DecorComponent // 0x98
	{
	public:
		UnityEngine::Vector3 MinOffset; // 0x98 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 MaxOffset; // 0xa4 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0xb0
}
