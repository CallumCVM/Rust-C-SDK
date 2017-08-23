#pragma once

#include "..\UnityEngine\Vector3.h"
#include "TOD_Sky.h"

namespace rust 
{
	class TOD_Animation : public MonoBehaviour // 0x18
	{
	public:
		TOD_Sky* sky; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		float CameraMovement; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float WindDegrees; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float WindSpeed; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 <CloudUV>k__BackingField; // 0x2c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
