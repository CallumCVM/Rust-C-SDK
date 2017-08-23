#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\Int16.h"
#include "..\System\UInt16.h"
#include "..\Mono\Audio\AudioFormat.h"

namespace Mono
{
	namespace Audio
{
	class WavData : public AudioData // 0x18
	{
	public:
		System::IO::Stream* stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Int16 channels; // 0x20 (size: 0x2, flags: 0x1, type: 0x6)
		System::UInt16 frame_divider; // 0x22 (size: 0x2, flags: 0x1, type: 0x7)
		int sample_rate; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int data_len; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		Mono::Audio::AudioFormat format; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
