#pragma once

#include "..\System\Collections\Generic\Queue<System\Collections\Generic\LinkedListNode<System\Collections\Generic\KeyValuePair<Key,Value>>>.h"
#include "..\System\Collections\Generic\LinkedList<System\Collections\Generic\KeyValuePair<Key,Value>>.h"
#include "..\System\Collections\Generic\Dictionary<Key,System\Collections\Generic\LinkedListNode<System\Collections\Generic\KeyValuePair<Key,Value>>>.h"

namespace rust 
{
template <typename T0, typename T1>
	class MruDictionary`2 : public Object // 0x0
	{
	public:
		System::Collections::Generic::Queue<System::Collections::Generic::LinkedListNode<System::Collections::Generic::KeyValuePair<Key,Value>>> recycled; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::LinkedList<System::Collections::Generic::KeyValuePair<Key,Value>> list; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Dictionary<Key,System::Collections::Generic::LinkedListNode<System::Collections::Generic::KeyValuePair<Key,Value>>> dict; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		int capacity; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
