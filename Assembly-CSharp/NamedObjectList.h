#pragma once

#include "..\NamedObjectList\NamedObject.h"

namespace rust 
{
	class NamedObjectList : public ScriptableObject // 0x18
	{
	public:
		NamedObjectList::NamedObject* objects; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
