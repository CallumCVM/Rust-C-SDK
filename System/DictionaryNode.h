#pragma once

#include "..\System\Object.h"
#include "..\System\Collections\Specialized\ListDictionary\DictionaryNode.h"

namespace rust 
{
	class DictionaryNode : public Object // 0x0
	{
	public:
		System::Object key; // 0x10 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object value; // 0x18 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Collections::Specialized::ListDictionary::DictionaryNode* next; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
