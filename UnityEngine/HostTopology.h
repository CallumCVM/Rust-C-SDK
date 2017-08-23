#pragma once

#include "..\UnityEngine\Networking\ConnectionConfig.h"
#include "..\UnityEngine\List.h"
#include "..\System\UInt16.h"

namespace UnityEngine
{
	namespace Networking
{
	class HostTopology : public Object // 0x0
	{
	public:
		UnityEngine::Networking::ConnectionConfig* m_DefConfig; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.Networking.ConnectionConfig>* m_SpecialConnections; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		int m_MaxDefConnections; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		System::UInt16 m_ReceivedMessagePoolSize; // 0x24 (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 m_SentMessagePoolSize; // 0x26 (size: 0x2, flags: 0x1, type: 0x7)
		float m_MessagePoolSizeGrowthFactor; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x30
}
