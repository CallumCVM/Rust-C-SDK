#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class Fisheye : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* fishEyeShader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* fisheyeMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float strengthX; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float strengthY; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
