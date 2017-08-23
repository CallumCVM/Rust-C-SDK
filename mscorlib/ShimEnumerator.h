#pragma once

#include "..\System\Collections\Generic\Dictionary\Enumerator<TKey,TValue>.h"

namespace rust 
{
	class ShimEnumerator : public Object // 0x0
	{
	public:
		System::Collections::Generic::Dictionary::Enumerator<TKey,TValue> host_enumerator; // 0x10 (size: 0x20, flags: 0x1, type: 0x15)
	}; // size = 0x30
}
