#pragma once

#include "..\UnityEngine\AudioSpeakerMode.h"

namespace UnityEngine
{
	class AudioConfiguration : public ValueType // 0x0
	{
	public:
		UnityEngine::AudioSpeakerMode speakerMode; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		int dspBufferSize; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int sampleRate; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int numRealVoices; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int numVirtualVoices; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
