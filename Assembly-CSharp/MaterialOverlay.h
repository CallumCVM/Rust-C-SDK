#pragma once

#include "..\UnityEngine\Material.h"

namespace rust 
{
	class MaterialOverlay : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* material; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
