#pragma once

#include "..\System\Object.h"
#include "..\System\Text\RegularExpressions\MRUList\Node.h"

namespace rust 
{
	class Node : public Object // 0x0
	{
	public:
		System::Object value; // 0x10 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Text::RegularExpressions::MRUList::Node* previous; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Text::RegularExpressions::MRUList::Node* next; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
