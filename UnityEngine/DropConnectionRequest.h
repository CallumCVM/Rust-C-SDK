#pragma once

#include "..\UnityEngine\Networking\Types\NetworkID.h"
#include "..\UnityEngine\Networking\Types\NodeID.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class DropConnectionRequest : public Request // 0x40
	{
	public:
		UnityEngine::Networking::Types::NetworkID <networkId>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Networking::Types::NodeID <nodeId>k__BackingField; // 0x48 (size: 0x2, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
