#pragma once

#include "..\Facepunch\Network\Raknet\Native\RaknetStats\<valueOverLastSecond>e__FixedBuffer.h"
#include "..\Facepunch\Network\Raknet\Native\RaknetStats\<runningTotal>e__FixedBuffer.h"
#include "..\Facepunch\Network\Raknet\Native\RaknetStats\<messageInSendBuffer>e__FixedBuffer.h"
#include "..\Facepunch\Network\Raknet\Native\RaknetStats\<bytesInSendBuffer>e__FixedBuffer.h"

namespace rust 
{
	class RaknetStats : public ValueType // 0x0
	{
	public:
		Facepunch::Network::Raknet::Native::RaknetStats::<valueOverLastSecond>e__FixedBuffer valueOverLastSecond; // 0x10 (size: 0x38, flags: 0x6, type: 0x11)
		Facepunch::Network::Raknet::Native::RaknetStats::<runningTotal>e__FixedBuffer runningTotal; // 0x48 (size: 0x38, flags: 0x6, type: 0x11)
		unsigned __int64 connectionStartTime; // 0x80 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned char isLimitedByCongestionControl; // 0x88 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned __int64 BPSLimitByCongestionControl; // 0x90 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned char isLimitedByOutgoingBandwidthLimit; // 0x98 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned __int64 BPSLimitByOutgoingBandwidthLimit; // 0xa0 (size: 0x8, flags: 0x6, type: 0xb)
		Facepunch::Network::Raknet::Native::RaknetStats::<messageInSendBuffer>e__FixedBuffer messageInSendBuffer; // 0xa8 (size: 0x10, flags: 0x6, type: 0x11)
		Facepunch::Network::Raknet::Native::RaknetStats::<bytesInSendBuffer>e__FixedBuffer bytesInSendBuffer; // 0xb8 (size: 0x20, flags: 0x6, type: 0x11)
		unsigned int messagesInResendBuffer; // 0xd8 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned __int64 bytesInResendBuffer; // 0xe0 (size: 0x8, flags: 0x6, type: 0xb)
		float packetlossLastSecond; // 0xe8 (size: 0x4, flags: 0x6, type: 0xc)
		float packetlossTotal; // 0xec (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xf0
}
