#pragma once

#include "..\UnityEngine\Networking\Types\NetworkID.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace Match
{
	class SetMatchAttributesRequest : public Request // 0x40
	{
	public:
		UnityEngine::Networking::Types::NetworkID <networkId>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x11)
		bool <isListed>k__BackingField; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
