#pragma once

#include "..\System\Object.h"
#include "..\System\Collections\Generic\LinkedListNode<T>.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0>
	class LinkedList : public Object // 0x0
	{
	public:
		System::Object syncRoot; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Collections::Generic::LinkedListNode<T> first; // 0x18 (size: 0x8, flags: 0x3, type: 0x15)
		System::Runtime::Serialization::SerializationInfo* si; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned int count; // 0x28 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int version; // 0x2c (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x30
}
