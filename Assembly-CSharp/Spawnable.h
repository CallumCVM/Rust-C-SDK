#pragma once

#include "SpawnPopulation.h"

namespace rust 
{
	class Spawnable : public MonoBehaviour // 0x18
	{
	public:
		SpawnPopulation* Population; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
