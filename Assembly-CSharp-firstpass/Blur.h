#pragma once

#include "..\UnityEngine\Shader.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class Blur : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* blurShader; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int iterations; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		float blurSpread; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
