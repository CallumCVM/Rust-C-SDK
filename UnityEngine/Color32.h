#pragma once

namespace UnityEngine
{
	class Color32 : public ValueType // 0x0
	{
	public:
		unsigned char r; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char g; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char b; // 0x12 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char a; // 0x13 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x18
}
