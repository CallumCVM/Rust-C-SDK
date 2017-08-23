#pragma once

#include "..\ProtoBuf\Entity.h"
#include "..\Network\Connection.h"

namespace rust 
{
	class SaveInfo : public Object // 0x0
	{
	public:
		ProtoBuf::Entity* msg; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Connection* forConnection; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool forDisk; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
