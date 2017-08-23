#pragma once

#include "..\UnityEngine\Texture.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ColorCorrectionRamp : public ImageEffectBase // 0x28
	{
	public:
		UnityEngine::Texture* textureRamp; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
