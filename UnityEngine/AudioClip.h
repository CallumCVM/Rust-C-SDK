#pragma once

#include "..\UnityEngine\AudioClip\PCMReaderCallback.h"
#include "..\UnityEngine\AudioClip\PCMSetPositionCallback.h"

namespace UnityEngine
{
	class AudioClip : public Object // 0x18
	{
	public:
		UnityEngine::AudioClip::PCMReaderCallback* m_PCMReaderCallback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AudioClip::PCMSetPositionCallback* m_PCMSetPositionCallback; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
