#pragma once

#include "..\System\Net\FtpWebRequest.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
	class FtpDataStream : public Stream // 0x18
	{
	public:
		System::Net::FtpWebRequest* request; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* networkStream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool disposed; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool isRead; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		int totalRead; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
