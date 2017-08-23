#pragma once

#include "..\MaterialConfig\ShaderParametersFloat.h"
#include "..\MaterialConfig\ShaderParametersColor.h"
#include "..\MaterialConfig\ShaderParametersTexture.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\MaterialPropertyBlock.h"

namespace rust 
{
	class MaterialConfig : public ScriptableObject // 0x18
	{
	public:
		MaterialConfig::ShaderParametersFloat* Floats; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		MaterialConfig::ShaderParametersColor* Colors; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		MaterialConfig::ShaderParametersTexture* Textures; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** ScaleUV; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::MaterialPropertyBlock* properties; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
