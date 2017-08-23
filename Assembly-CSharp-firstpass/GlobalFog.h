#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class GlobalFog : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* fogShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* fogMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool distanceFog; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool useRadialDistance; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		bool heightFog; // 0x32 (size: 0x1, flags: 0x6, type: 0x2)
		float height; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		float heightDensity; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float startDistance; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
