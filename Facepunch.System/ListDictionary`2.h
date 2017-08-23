#pragma once

#include "BufferList<TKey>.h"
#include "BufferList<TVal>.h"

namespace rust 
{
template <typename T0, typename T1>
	class ListDictionary`2 : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<TKey,int> key2idx; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<int,TKey> idx2key; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		BufferList<TKey> keys; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		BufferList<TVal> vals; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x30
}
