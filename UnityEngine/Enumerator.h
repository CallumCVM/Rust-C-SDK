#pragma once

#include "..\UnityEngine\Collections\NativeArray<T>.h"

namespace rust 
{
	class Enumerator : public ValueType // 0x0
	{
	public:
		UnityEngine::Collections::NativeArray<T> array; // 0x10 (size: 0x18, flags: 0x1, type: 0x15)
		int index; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
