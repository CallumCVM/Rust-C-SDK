#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\LayerMask.h"

namespace rust 
{
	class GroundWatch : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Vector3 groundPosition; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::LayerMask layers; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
		float radius; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
