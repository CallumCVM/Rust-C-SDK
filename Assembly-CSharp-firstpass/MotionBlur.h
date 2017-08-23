#pragma once

#include "..\UnityEngine\RenderTexture.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class MotionBlur : public ImageEffectBase // 0x28
	{
	public:
		UnityEngine::RenderTexture* accumTexture; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float blurAmount; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		bool extraBlur; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
