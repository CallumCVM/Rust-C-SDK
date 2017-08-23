#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\Types\NetworkID.h"
#include "..\UnityEngine\Networking\Types\NetworkAccessToken.h"
#include "..\UnityEngine\Networking\Types\NodeID.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class MatchInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <address>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Networking::Types::NetworkAccessToken* <accessToken>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int <port>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int <domain>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Networking::Types::NetworkID <networkId>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Networking::Types::NodeID <nodeId>k__BackingField; // 0x30 (size: 0x2, flags: 0x1, type: 0x11)
		bool <usingRelay>k__BackingField; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
