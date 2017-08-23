#pragma once

#include "..\System\Collections\IEnumerable.h"
#include "..\System\Collections\IEnumerator.h"

namespace rust 
{
	class EnumerableIterator : public XPathNodeIterator // 0x18
	{
	public:
		System::Collections::IEnumerable* source; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEnumerator* e; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int pos; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
