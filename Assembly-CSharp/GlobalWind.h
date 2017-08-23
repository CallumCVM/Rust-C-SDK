#pragma once

#include "..\UnityEngine\WindZone.h"

namespace rust 
{
	class GlobalWind : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::WindZone* windZone; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
