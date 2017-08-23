#pragma once

#include "..\System\Collections\Generic\HashSet<T>.h"
#include "..\Apex\DataStructures\DynamicArray<T>.h"

namespace Apex
{
	namespace DataStructures
{
		template <typename T0>
	class IndexableSet : public Object // 0x0
	{
	public:
		System::Collections::Generic::HashSet<T> _hashset; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Apex::DataStructures::DynamicArray<T> _array; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
