#pragma once

#include "..\UnityEngine\Networking\NetworkProximityChecker\CheckMethod.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkProximityChecker : public NetworkBehaviour // 0x30
	{
	public:
		int visRange; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		float visUpdateInterval; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Networking::NetworkProximityChecker::CheckMethod checkMethod; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		bool forceHidden; // 0x3c (size: 0x1, flags: 0x6, type: 0x2)
		float m_VisUpdateTime; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
