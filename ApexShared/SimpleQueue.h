#pragma once

#include "T.h"

namespace Apex
{
	namespace DataStructures
{
		template <typename T0>
	class SimpleQueue : public Object // 0x0
	{
	public:
		T* _array; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _used; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _head; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
