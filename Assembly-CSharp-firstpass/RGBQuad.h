#pragma once

namespace rust 
{
	class RGBQuad : public ValueType // 0x0
	{
	public:
		unsigned char rgbBlue; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned int uintValue; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned char rgbGreen; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char rgbRed; // 0x12 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char rgbReserved; // 0x13 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x18
}
