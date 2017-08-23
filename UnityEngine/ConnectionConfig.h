#pragma once

#include "..\System\UInt16.h"
#include "..\UnityEngine\Networking\ConnectionAcksType.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Networking
{
	class ConnectionConfig : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_SSLCertFilePath; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_SSLPrivateKeyFilePath; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_SSLCAFilePath; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<UnityEngine.Networking.ChannelQOS>* m_Channels; // 0x28 (size: 0x8, flags: 0x3, type: 0x15)
		System::UInt16 m_PacketSize; // 0x30 (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 m_FragmentSize; // 0x32 (size: 0x2, flags: 0x1, type: 0x7)
		unsigned int m_ResendTimeout; // 0x34 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_DisconnectTimeout; // 0x38 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_ConnectTimeout; // 0x3c (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_MinUpdateTimeout; // 0x40 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_PingTimeout; // 0x44 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_ReducedPingTimeout; // 0x48 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_AllCostTimeout; // 0x4c (size: 0x4, flags: 0x1, type: 0x9)
		unsigned char m_NetworkDropThreshold; // 0x50 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned char m_OverflowDropThreshold; // 0x51 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned char m_MaxConnectionAttempt; // 0x52 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned int m_AckDelay; // 0x54 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_SendDelay; // 0x58 (size: 0x4, flags: 0x1, type: 0x9)
		System::UInt16 m_MaxCombinedReliableMessageSize; // 0x5c (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 m_MaxCombinedReliableMessageCount; // 0x5e (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 m_MaxSentMessageQueueSize; // 0x60 (size: 0x2, flags: 0x1, type: 0x7)
		UnityEngine::Networking::ConnectionAcksType m_AcksType; // 0x64 (size: 0x4, flags: 0x1, type: 0x11)
		bool m_UsePlatformSpecificProtocols; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int m_InitialBandwidth; // 0x6c (size: 0x4, flags: 0x1, type: 0x9)
		float m_BandwidthPeakFactor; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
		System::UInt16 m_WebSocketReceiveBufferMaxSize; // 0x74 (size: 0x2, flags: 0x1, type: 0x7)
		unsigned int m_UdpSocketReceiveBufferMaxSize; // 0x78 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x80
}
