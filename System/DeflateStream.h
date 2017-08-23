#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\IO\Compression\CompressionMode.h"
#include "..\System\IO\Compression\DeflateStream\UnmanagedReadOrWrite.h"
#include "..\System\Runtime\InteropServices\GCHandle.h"

namespace System
{
	namespace IO
{
{
		namespace Compression
{
	class DeflateStream : public Stream // 0x18
	{
	public:
		System::IO::Stream* base_stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Compression::DeflateStream::UnmanagedReadOrWrite* feeder; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* io_buffer; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::IO::Compression::CompressionMode mode; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		bool leaveOpen; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x35 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 z_stream; // 0x38 (size: 0x8, flags: 0x1, type: 0x18)
		System::Runtime::InteropServices::GCHandle data; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
