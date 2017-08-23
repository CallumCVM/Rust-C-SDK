#pragma once

#include "..\System\Collections\Generic\IEnumerator<System\Collections\Generic\KeyValuePair<TEnumeratorKey,TEnumeratorValue>>.h"

namespace rust 
{
template <typename T0, typename T1>
	class DictionaryEnumerator`2 : public ValueType // 0x0
	{
	public:
		System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<TEnumeratorKey,TEnumeratorValue>> _e; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x18
}
