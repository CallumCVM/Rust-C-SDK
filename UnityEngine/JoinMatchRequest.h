#pragma once

#include "..\UnityEngine\Networking\Types\NetworkID.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class JoinMatchRequest : public Request // 0x40
	{
	public:
		UnityEngine::UnicodeString* <publicAddress>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <privateAddress>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <password>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Networking::Types::NetworkID <networkId>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x11)
		int <eloScore>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x68
}
