#pragma once

#include "..\System\Object.h"
#include "..\SimpleJson\Reflection\ReflectionUtils\ThreadSafeDictionaryValueFactory<TKey,TValue>.h"
#include "..\System\Collections\Generic\Dictionary<TKey,TValue>.h"

namespace rust 
{
template <typename T0, typename T1>
	class ThreadSafeDictionary`2 : public Object // 0x0
	{
	public:
		System::Object _lock; // 0x10 (size: 0x8, flags: 0x21, type: 0x1c)
		SimpleJson::Reflection::ReflectionUtils::ThreadSafeDictionaryValueFactory<TKey,TValue> _valueFactory; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		System::Collections::Generic::Dictionary<TKey,TValue> _dictionary; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
