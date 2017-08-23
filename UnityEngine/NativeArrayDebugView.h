#pragma once

#include "..\UnityEngine\Collections\NativeArray<T>.h"

namespace UnityEngine
{
	namespace Collections
{
		template <typename T0>
	class NativeArrayDebugView : public Object // 0x0
	{
	public:
		UnityEngine::Collections::NativeArray<T> array; // 0x10 (size: 0x18, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
