#pragma once

#include "..\System\Collections\BitArray.h"

namespace rust 
{
	class BitArrayEnumerator : public Object // 0x0
	{
	public:
		System::Collections::BitArray* _bitArray; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool _current; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		int _index; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int _version; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
