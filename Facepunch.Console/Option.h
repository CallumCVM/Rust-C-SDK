#pragma once

#include "..\Network\Connection.h"

namespace rust 
{
	class Option : public ValueType // 0x0
	{
	public:
		bool <IsServer>k__BackingField; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsClient>k__BackingField; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		bool <ForwardtoServerOnMissing>k__BackingField; // 0x12 (size: 0x1, flags: 0x1, type: 0x2)
		bool <PrintOutput>k__BackingField; // 0x13 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsUnrestricted>k__BackingField; // 0x14 (size: 0x1, flags: 0x1, type: 0x2)
		bool <FromRcon>k__BackingField; // 0x15 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsFromServer>k__BackingField; // 0x16 (size: 0x1, flags: 0x1, type: 0x2)
		Network::Connection* <Connection>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
