#pragma once

namespace Ionic
{
	namespace Crc
{
	class CRC32 : public Object // 0x0
	{
	public:
		unsigned int* crc32Table; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int dwPolynomial; // 0x18 (size: 0x4, flags: 0x1, type: 0x9)
		__int64 _TotalBytesRead; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		bool reverseBits; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int _register; // 0x2c (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x30
}
