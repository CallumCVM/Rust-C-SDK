#pragma once

#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class ProcessedTexture : public Object // 0x0
	{
	public:
		UnityEngine::RenderTexture* result; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::Material* material; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
