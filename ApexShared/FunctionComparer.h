#pragma once

#include "..\System\Comparison<T>.h"

namespace Apex
{
	namespace DataStructures
{
		template <typename T0>
	class FunctionComparer : public Object // 0x0
	{
	public:
		System::Comparison<T> _comparer; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
