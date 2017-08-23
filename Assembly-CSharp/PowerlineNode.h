#pragma once

#include "..\UnityEngine\Material.h"

namespace rust 
{
	class PowerlineNode : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* WireMaterial; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float MaxDistance; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
