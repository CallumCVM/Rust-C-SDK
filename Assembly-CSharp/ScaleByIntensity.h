#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Light.h"

namespace rust 
{
	class ScaleByIntensity : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Light* intensitySource; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 initialScale; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		float maxIntensity; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
