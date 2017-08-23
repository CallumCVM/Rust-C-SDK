#pragma once

#include "..\UnityEngine\AudioSource.h"
#include "..\MusicTheme\PositionedClip.h"

namespace rust 
{
	class ClipPlaybackData : public Object // 0x0
	{
	public:
		UnityEngine::AudioSource* source; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		MusicTheme::PositionedClip* positionedClip; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool isActive; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool fadingIn; // 0x21 (size: 0x1, flags: 0x6, type: 0x2)
		bool fadingOut; // 0x22 (size: 0x1, flags: 0x6, type: 0x2)
		double fadeStarted; // 0x28 (size: 0x8, flags: 0x6, type: 0xd)
		bool needsSync; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
