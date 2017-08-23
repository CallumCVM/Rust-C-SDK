#pragma once

namespace rust 
{
	class EntityRealm : public Object // 0x0
	{
	public:
		ListDictionary<unsigned int,BaseNetworkable> entityList; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
