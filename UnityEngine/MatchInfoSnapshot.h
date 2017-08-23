#pragma once

#include "..\UnityEngine\Networking\Types\NetworkID.h"
#include "..\UnityEngine\Networking\Types\NodeID.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class MatchInfoSnapshot : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <name>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,__int64> <matchAttributes>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Networking.Match.MatchInfoSnapshot.MatchInfoDirectConnectSnapshot>* <directConnectInfos>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Networking::Types::NetworkID <networkId>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Networking::Types::NodeID <hostNodeId>k__BackingField; // 0x30 (size: 0x2, flags: 0x1, type: 0x11)
		int <averageEloScore>k__BackingField; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int <maxSize>k__BackingField; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int <currentSize>k__BackingField; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		bool <isPrivate>k__BackingField; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
