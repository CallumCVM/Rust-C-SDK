#pragma once

#include "TOD_Sky.h"
#include "..\UnityEngine\Camera.h"

namespace rust 
{
	class TOD_ImageEffect : public MonoBehaviour // 0x18
	{
	public:
		TOD_Sky* sky; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Camera* cam; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x28
}
