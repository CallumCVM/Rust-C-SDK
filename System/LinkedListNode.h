#pragma once

#include "T.h"
#include "..\System\Collections\Generic\LinkedList<T>.h"
#include "..\System\Collections\Generic\LinkedListNode<T>.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0>
	class LinkedListNode : public Object // 0x0
	{
	public:
		T item; // 0x10 (size: 0x8, flags: 0x1, type: 0x13)
		System::Collections::Generic::LinkedList<T> container; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::LinkedListNode<T> forward; // 0x20 (size: 0x8, flags: 0x3, type: 0x15)
		System::Collections::Generic::LinkedListNode<T> back; // 0x28 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0x30
}
