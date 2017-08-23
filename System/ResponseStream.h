#pragma once

#include "..\System\Net\HttpListenerResponse.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
	class ResponseStream : public Stream // 0x18
	{
	public:
		System::Net::HttpListenerResponse* response; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool ignore_errors; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		bool trailer_sent; // 0x2a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
