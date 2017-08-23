#pragma once

#include "..\Ionic\Zip\ZipCrypto.h"
#include "..\System\IO\Stream.h"
#include "..\Ionic\Zip\CryptoMode.h"

namespace Ionic
{
	namespace Zip
{
	class ZipCipherStream : public Stream // 0x18
	{
	public:
		Ionic::Zip::ZipCrypto* _cipher; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _s; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::CryptoMode _mode; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
