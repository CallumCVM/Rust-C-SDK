#pragma once

#include "InfrastructureType.h"

namespace rust 
{
	class TerrainPathConnect : public MonoBehaviour // 0x18
	{
	public:
		InfrastructureType Type; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
