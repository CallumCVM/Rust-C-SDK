#pragma once

#include "..\UnityEngine\Networking\NetworkConnection.h"
#include "..\UnityEngine\Networking\ChannelPacket.h"
#include "..\System\Collections\Generic\Queue<UnityEngine\Networking\ChannelPacket>.h"
#include "..\UnityEngine\Networking\NetBuffer.h"

namespace UnityEngine
{
	namespace Networking
{
	class ChannelBuffer : public Object // 0x0
	{
	public:
		UnityEngine::Networking::NetworkConnection* m_Connection; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::ChannelPacket m_CurrentPacket; // 0x18 (size: 0x18, flags: 0x1, type: 0x11)
		System::Collections::Generic::Queue<UnityEngine::Networking::ChannelPacket> m_PendingPackets; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::NetBuffer* fragmentBuffer; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		float m_LastFlushTime; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		unsigned char m_ChannelId; // 0x44 (size: 0x1, flags: 0x1, type: 0x5)
		int m_MaxPacketSize; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_IsReliable; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
		bool m_AllowFragmentation; // 0x4d (size: 0x1, flags: 0x1, type: 0x2)
		bool m_IsBroken; // 0x4e (size: 0x1, flags: 0x1, type: 0x2)
		int m_MaxPendingPacketCount; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		float maxDelay; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float m_LastBufferedMessageCountTimer; // 0x58 (size: 0x4, flags: 0x1, type: 0xc)
		int <numMsgsOut>k__BackingField; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int <numBufferedMsgsOut>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int <numBytesOut>k__BackingField; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int <numMsgsIn>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int <numBytesIn>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int <numBufferedPerSecond>k__BackingField; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int <lastBufferedPerSecond>k__BackingField; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_Disposed; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		bool readingFragment; // 0x79 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
