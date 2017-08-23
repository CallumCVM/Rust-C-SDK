#pragma once

#include "..\UnityEngine\AnimationClip.h"

namespace UnityEngine
{
	class AnimationClipPair : public Object // 0x0
	{
	public:
		UnityEngine::AnimationClip* originalClip; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationClip* overrideClip; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
