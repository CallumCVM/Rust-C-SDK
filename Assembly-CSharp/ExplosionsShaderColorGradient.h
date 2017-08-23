#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Gradient.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class ExplosionsShaderColorGradient : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* ShaderProperty; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Gradient* Color; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* matInstance; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int MaterialID; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		float TimeMultiplier; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		bool canUpdate; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		int propertyID; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		float startTime; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Color oldColor; // 0x44 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
