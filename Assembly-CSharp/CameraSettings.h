#pragma once

#include "..\UnityEngine\Camera.h"

namespace rust 
{
	class CameraSettings : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* cam; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
