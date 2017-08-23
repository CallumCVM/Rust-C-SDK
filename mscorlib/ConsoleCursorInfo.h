#pragma once

namespace System
{
	class ConsoleCursorInfo : public ValueType // 0x0
	{
	public:
		int Size; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		bool Visible; // 0x14 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x18
}
