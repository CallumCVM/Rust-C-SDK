#pragma once

#include "..\Apex\DataStructures\IDynamicArray<T>.h"

namespace Apex
{
	namespace DataStructures
{
		template <typename T0>
	class SafeDynamicArray : public Object // 0x0
	{
	public:
		Apex::DataStructures::IDynamicArray<T> _array; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
