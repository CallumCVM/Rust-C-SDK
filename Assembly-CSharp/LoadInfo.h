#pragma once

#include "..\ProtoBuf\Entity.h"

namespace rust 
{
	class LoadInfo : public Object // 0x0
	{
	public:
		ProtoBuf::Entity* msg; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		bool fromDisk; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
