#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Collections
{
	class ArrayList : public Object // 0x0
	{
	public:
		int _size; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		System::Object* _items; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int _version; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
