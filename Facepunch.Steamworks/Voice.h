#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\System\Diagnostics\Stopwatch.h"
#include "..\System\DateTime.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Voice : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned char* UncompressBuffer; // 0x18 (size: 0x8, flags: 0x3, type: 0x1d)
		System.Action<__int64,int> OnCompressedData; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		System.Action<__int64,int> OnUncompressedData; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		System::Diagnostics::Stopwatch* UpdateTimer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 ReadCompressedBuffer; // 0x38 (size: 0x8, flags: 0x3, type: 0x18)
		__int64 ReadUncompressedBuffer; // 0x40 (size: 0x8, flags: 0x3, type: 0x18)
		bool _wantsrecording; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime <LastVoiceRecordTime>k__BackingField; // 0x50 (size: 0x10, flags: 0x1, type: 0x11)
		bool IsRecording; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		unsigned int DesiredSampleRate; // 0x64 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x68
}
