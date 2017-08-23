#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\Queue<ValueType>.h"

namespace rust 
{
template <typename T0>
	class HashedPool : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<unsigned __int64,ValueType> dict; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<ValueType>* pool; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<ValueType>* list; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Queue<ValueType> recycled; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		int granularity; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
