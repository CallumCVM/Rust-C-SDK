#pragma once

#include "..\System\IO\Stream.h"
#include "..\LZ4\LZ4StreamMode.h"

namespace LZ4
{
	class LZ4Stream : public Stream // 0x18
	{
	public:
		System::IO::Stream* _innerStream; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		unsigned char* _buffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		LZ4::LZ4StreamMode _compressionMode; // 0x28 (size: 0x4, flags: 0x21, type: 0x11)
		bool _highCompression; // 0x2c (size: 0x1, flags: 0x21, type: 0x2)
		bool _interactiveRead; // 0x2d (size: 0x1, flags: 0x21, type: 0x2)
		bool _isolateInnerStream; // 0x2e (size: 0x1, flags: 0x21, type: 0x2)
		int _blockSize; // 0x30 (size: 0x4, flags: 0x21, type: 0x8)
		int _bufferLength; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int _bufferOffset; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
