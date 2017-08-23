#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class FXAA : public FXAAPostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* shader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* mat; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
