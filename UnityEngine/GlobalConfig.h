#pragma once

#include "..\UnityEngine\Networking\ReactorModel.h"
#include "..\System\UInt16.h"

namespace UnityEngine
{
	namespace Networking
{
	class GlobalConfig : public Object // 0x0
	{
	public:
		unsigned int m_ThreadAwakeTimeout; // 0x10 (size: 0x4, flags: 0x1, type: 0x9)
		UnityEngine::Networking::ReactorModel m_ReactorModel; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
		System::UInt16 m_ReactorMaximumReceivedMessages; // 0x18 (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 m_ReactorMaximumSentMessages; // 0x1a (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 m_MaxPacketSize; // 0x1c (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 m_MaxHosts; // 0x1e (size: 0x2, flags: 0x1, type: 0x7)
		unsigned char m_ThreadPoolSize; // 0x20 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned int m_MinTimerTimeout; // 0x24 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_MaxTimerTimeout; // 0x28 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_MinNetSimulatorTimeout; // 0x2c (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int m_MaxNetSimulatorTimeout; // 0x30 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x38
}
