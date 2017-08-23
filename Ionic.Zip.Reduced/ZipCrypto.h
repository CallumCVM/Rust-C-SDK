#pragma once

#include "..\Ionic\Crc\CRC32.h"

namespace Ionic
{
	namespace Zip
{
	class ZipCrypto : public Object // 0x0
	{
	public:
		unsigned int* _Keys; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		Ionic::Crc::CRC32* crc32; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
