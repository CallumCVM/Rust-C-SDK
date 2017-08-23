#pragma once

#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class MaterialReplacement : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Material* Default; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Material* Override; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Renderer* Renderer; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		bool initialized; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
