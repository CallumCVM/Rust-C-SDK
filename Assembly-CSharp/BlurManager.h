#pragma once

#include "..\UnityStandardAssets\ImageEffects\BlurOptimized.h"
#include "..\UnityStandardAssets\ImageEffects\ColorCorrectionCurves.h"

namespace rust 
{
	class BlurManager : public ImageEffectLayer // 0x28
	{
	public:
		UnityStandardAssets::ImageEffects::BlurOptimized* blur; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityStandardAssets::ImageEffects::ColorCorrectionCurves* color; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		float maxBlurScale; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float blurAmount; // 0x3c (size: 0x4, flags: 0x3, type: 0xc)
		float desaturationAmount; // 0x40 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x48
}
