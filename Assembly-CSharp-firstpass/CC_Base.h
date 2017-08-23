#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class CC_Base : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* shader; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* _material; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x28
}
