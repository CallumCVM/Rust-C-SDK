#pragma once

#include "..\PrefabAttribute\AttributeCollection.h"

namespace rust 
{
	class Library : public Object // 0x0
	{
	public:
		PrefabAttribute::AttributeCollection* all; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<unsigned int,PrefabAttribute.AttributeCollection> prefabs; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
