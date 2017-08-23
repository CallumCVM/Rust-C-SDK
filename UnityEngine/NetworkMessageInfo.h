#pragma once

#include "..\UnityEngine\NetworkPlayer.h"
#include "..\UnityEngine\NetworkViewID.h"

namespace UnityEngine
{
	class NetworkMessageInfo : public ValueType // 0x0
	{
	public:
		double m_TimeStamp; // 0x10 (size: 0x8, flags: 0x1, type: 0xd)
		UnityEngine::NetworkPlayer m_Sender; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::NetworkViewID m_ViewID; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
