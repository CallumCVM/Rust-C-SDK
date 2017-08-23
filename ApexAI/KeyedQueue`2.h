#pragma once

#include "..\System\Collections\Generic\HashSet<TKey>.h"
#include "..\Apex\DataStructures\SimpleQueue<T>.h"
#include "..\System\Func<T,TKey>.h"

namespace Apex
{
	namespace DataStructures
{
		template <typename T0, typename T1>
	class KeyedQueue`2 : public Object // 0x0
	{
	public:
		System::Collections::Generic::HashSet<TKey> _hashset; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Apex::DataStructures::SimpleQueue<T> _queue; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Func<T,TKey> _keyProvider; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		bool _strictSet; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
