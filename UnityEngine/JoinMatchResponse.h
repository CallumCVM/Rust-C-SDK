#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\Types\NetworkID.h"
#include "..\UnityEngine\Networking\Types\NodeID.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class JoinMatchResponse : public BasicResponse // 0x20
	{
	public:
		UnityEngine::UnicodeString* <address>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <accessTokenString>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		int <port>k__BackingField; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int <domain>k__BackingField; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Networking::Types::NetworkID <networkId>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Networking::Types::NodeID <nodeId>k__BackingField; // 0x40 (size: 0x2, flags: 0x1, type: 0x11)
		bool <usingRelay>k__BackingField; // 0x42 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
