#pragma once

#include "..\System\Collections\Generic\KeyValuePair<TKey,TValue>.h"
#include "..\System\Collections\Generic\IComparer<TKey>.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0, typename T1>
	class SortedList`2 : public Object // 0x0
	{
	public:
		System::Collections::Generic::KeyValuePair<TKey,TValue>* table; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Generic::IComparer<TKey> comparer; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		int inUse; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int modificationCount; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int defaultCapacity; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
