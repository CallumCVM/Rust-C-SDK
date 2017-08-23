#pragma once

#include "..\Ionic\Zlib\ZlibBaseStream.h"
#include "..\System\IO\Stream.h"

namespace Ionic
{
	namespace Zlib
{
	class DeflateStream : public Stream // 0x18
	{
	public:
		Ionic::Zlib::ZlibBaseStream* _baseStream; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		System::IO::Stream* _innerStream; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		bool _disposed; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
