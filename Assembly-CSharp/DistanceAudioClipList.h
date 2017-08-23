#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class DistanceAudioClipList : public Object // 0x0
	{
	public:
		UnityEngine::List<WeightedAudioClip>* audioClips; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		int distance; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
