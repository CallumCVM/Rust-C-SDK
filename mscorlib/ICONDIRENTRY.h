#pragma once

#include "..\System\Int16.h"

namespace System
{
	namespace Resources
{
	class ICONDIRENTRY : public Object // 0x0
	{
	public:
		unsigned char bWidth; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char bHeight; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char bColorCount; // 0x12 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char bReserved; // 0x13 (size: 0x1, flags: 0x6, type: 0x5)
		System::Int16 wPlanes; // 0x14 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 wBitCount; // 0x16 (size: 0x2, flags: 0x6, type: 0x6)
		int dwBytesInRes; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int dwImageOffset; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		unsigned char* image; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
