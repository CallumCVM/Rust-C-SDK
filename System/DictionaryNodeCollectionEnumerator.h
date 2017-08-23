#pragma once

#include "..\System\Collections\IDictionaryEnumerator.h"

namespace rust 
{
	class DictionaryNodeCollectionEnumerator : public Object // 0x0
	{
	public:
		System::Collections::IDictionaryEnumerator* inner; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool isKeyList; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
