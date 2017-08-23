#pragma once

#include "EnvironmentVolume.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class EnvironmentVolumeTrigger : public MonoBehaviour // 0x18
	{
	public:
		EnvironmentVolume* <volume>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 Center; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 Size; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
