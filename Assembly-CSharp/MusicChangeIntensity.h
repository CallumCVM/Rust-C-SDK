#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class MusicChangeIntensity : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<MusicChangeIntensity.DistanceIntensity>* distanceIntensities; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		float raiseTo; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float tickInterval; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float lastTick; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
