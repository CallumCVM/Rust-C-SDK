#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
template <typename T0>
	class PooledList : public Object // 0x0
	{
	public:
		UnityEngine::List<T>* data; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x18
}
