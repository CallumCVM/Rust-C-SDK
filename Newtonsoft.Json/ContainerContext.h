#pragma once

#include "..\Newtonsoft\Json\Bson\BsonType.h"

namespace rust 
{
	class ContainerContext : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Bson::BsonType Type; // 0x10 (size: 0x1, flags: 0x26, type: 0x11)
		int Length; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int Position; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
