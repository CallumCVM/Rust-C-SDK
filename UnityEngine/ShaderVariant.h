#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Rendering\PassType.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ShaderVariant : public ValueType // 0x0
	{
	public:
		UnityEngine::Shader* shader; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rendering::PassType passType; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString** keywords; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
