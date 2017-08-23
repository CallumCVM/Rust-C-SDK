#pragma once

#include "..\Facepunch\Network\Raknet\Peer.h"
#include "..\System\Diagnostics\Stopwatch.h"
#include "..\System\IO\FileStream.h"
#include "..\System\IO\BinaryWriter.h"
#include "..\System\IO\BinaryReader.h"

namespace Facepunch
{
	namespace Network
{
{
		namespace Raknet
{
	class Client : public Client // 0x70
	{
	public:
		Facepunch::Network::Raknet::Peer* peer; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Stopwatch* cycleTimer; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::FileStream* recordStream; // 0x80 (size: 0x8, flags: 0x4, type: 0x12)
		System::IO::BinaryWriter* recordWriter; // 0x88 (size: 0x8, flags: 0x4, type: 0x12)
		System::Diagnostics::Stopwatch* recordTime; // 0x90 (size: 0x8, flags: 0x4, type: 0x12)
		System::IO::FileStream* playbackStream; // 0x98 (size: 0x8, flags: 0x4, type: 0x12)
		System::IO::BinaryReader* playbackReader; // 0xa0 (size: 0x8, flags: 0x4, type: 0x12)
		System::Diagnostics::Stopwatch* playbackTimer; // 0xa8 (size: 0x8, flags: 0x4, type: 0x12)
		__int64 playbackTime; // 0xb0 (size: 0x8, flags: 0x4, type: 0xa)
		__int64 lastPlayedPacketTime; // 0xb8 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0xc0
}
