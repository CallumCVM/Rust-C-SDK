#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
template <typename T0>
	class SmartList : public Object // 0x0
	{
	public:
		UnityEngine::List<ValueType>* list; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Queue<int> recycled; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
