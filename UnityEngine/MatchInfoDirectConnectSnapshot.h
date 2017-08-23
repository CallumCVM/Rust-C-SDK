#pragma once

#include "..\UnityEngine\Networking\Types\NodeID.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\Types\HostPriority.h"

namespace rust 
{
	class MatchInfoDirectConnectSnapshot : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <publicAddress>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <privateAddress>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Networking::Types::NodeID <nodeId>k__BackingField; // 0x20 (size: 0x2, flags: 0x1, type: 0x11)
		UnityEngine::Networking::Types::HostPriority <hostPriority>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
