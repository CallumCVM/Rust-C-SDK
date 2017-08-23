#pragma once

#include "LensDirtiness.h"
#include "..\UnityStandardAssets\ImageEffects\VignetteAndChromaticAberration.h"

namespace rust 
{
	class HotOverlay : public ImageEffectLayer // 0x28
	{
	public:
		LensDirtiness* lensDirtyness; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityStandardAssets::ImageEffects::VignetteAndChromaticAberration* vingette; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		float smoothCurrent; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float smoothVelocity; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x40
}
