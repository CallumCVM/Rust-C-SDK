#pragma once

#include "..\System\Collections\Specialized\ListDictionary.h"
#include "..\System\Collections\Specialized\ListDictionary\DictionaryNode.h"

namespace rust 
{
	class DictionaryNodeEnumerator : public Object // 0x0
	{
	public:
		System::Collections::Specialized::ListDictionary* dict; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::ListDictionary::DictionaryNode* current; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool isAtStart; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int version; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
