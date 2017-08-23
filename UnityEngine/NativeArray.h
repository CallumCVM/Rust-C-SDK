#pragma once

#include "..\UnityEngine\Collections\Allocator.h"

namespace UnityEngine
{
	namespace Collections
{
		template <typename T0>
	class NativeArray : public ValueType // 0x0
	{
	public:
		__int64 m_Buffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		int m_Length; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Stride; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Collections::Allocator m_AllocatorLabel; // 0x20 (size: 0x4, flags: 0x21, type: 0x11)
	}; // size = 0x28
}
