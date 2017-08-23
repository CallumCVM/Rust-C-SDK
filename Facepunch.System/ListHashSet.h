#pragma once

#include "BufferList<T>.h"

namespace rust 
{
template <typename T0>
	class ListHashSet : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<T,int> val2idx; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<int,T> idx2val; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		BufferList<T> vals; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
