#pragma once

#include "ScreenOverlayEx.h"
#include "CC_Frost.h"
#include "LensDirtiness.h"

namespace rust 
{
	class ColdOverlay : public ImageEffectLayer // 0x28
	{
	public:
		ScreenOverlayEx* screenOverlay; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		CC_Frost* frost; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		LensDirtiness* lensDirtyness; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		bool isPlaying; // 0x40 (size: 0x1, flags: 0x3, type: 0x2)
		float smoothCurrent; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
		float smoothVelocity; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x50
}
