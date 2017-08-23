#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Collections
{
	class Stack : public Object // 0x0
	{
	public:
		System::Object* contents; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int current; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int count; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int capacity; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int modCount; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
