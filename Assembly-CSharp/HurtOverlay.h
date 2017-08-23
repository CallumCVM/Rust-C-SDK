#pragma once

#include "ScreenOverlayEx.h"
#include "..\UnityStandardAssets\ImageEffects\VignetteAndChromaticAberration.h"
#include "CC_Grayscale.h"

namespace rust 
{
	class HurtOverlay : public ImageEffectLayer // 0x28
	{
	public:
		ScreenOverlayEx* bloodOverlay; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityStandardAssets::ImageEffects::VignetteAndChromaticAberration* vignetting; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		CC_Grayscale* grayScale; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float smoothCurrent; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float smoothVelocity; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
