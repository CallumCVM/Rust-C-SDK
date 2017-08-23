#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\Stream.h"
#include "..\System\Object.h"
#include "..\System\IO\MemoryStream.h"
#include "..\Mono\Audio\AudioDevice.h"
#include "..\Mono\Audio\AudioData.h"
#include "..\Mono\Audio\Win32SoundPlayer.h"
#include "..\System\ComponentModel\AsyncCompletedEventHandler.h"
#include "..\System\EventHandler.h"

namespace System
{
	namespace Media
{
	class SoundPlayer : public Component // 0x30
	{
	public:
		UnityEngine::UnicodeString* sound_location; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::Stream* audiostream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object tag; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System::IO::MemoryStream* mstream; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Audio::AudioDevice* adev; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Audio::AudioData* adata; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Audio::Win32SoundPlayer* win32_player; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::AsyncCompletedEventHandler* LoadCompleted; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* SoundLocationChanged; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* StreamChanged; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		bool load_completed; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		int load_timeout; // 0x84 (size: 0x4, flags: 0x1, type: 0x8)
		bool stopped; // 0x88 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x90
}
