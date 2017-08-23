#pragma once

#include "..\UnityEngine\Texture.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class Grayscale : public ImageEffectBase // 0x28
	{
	public:
		UnityEngine::Texture* textureRamp; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		float rampOffset; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
