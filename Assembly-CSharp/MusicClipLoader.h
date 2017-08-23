#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\Dictionary<UnityEngine\AudioClip,MusicClipLoader\LoadedAudioClip>.h"

namespace rust 
{
	class MusicClipLoader : public Object // 0x0
	{
	public:
		UnityEngine::List<MusicClipLoader.LoadedAudioClip>* loadedClips; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		System::Collections::Generic::Dictionary<UnityEngine::AudioClip,MusicClipLoader::LoadedAudioClip> loadedClipDict; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.AudioClip>* clipsToLoad; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<UnityEngine.AudioClip>* clipsToUnload; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x30
}
