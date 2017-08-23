#pragma once

#include "..\System\Collections\Specialized\ListDictionary.h"

namespace rust 
{
	class DictionaryNodeCollection : public Object // 0x0
	{
	public:
		System::Collections::Specialized::ListDictionary* dict; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool isKeyList; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
