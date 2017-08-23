#pragma once

#include "..\System\Net\Sockets\Socket.h"
#include "..\System\Object.h"
#include "..\System\AsyncCallback.h"
#include "..\System\Threading\WaitHandle.h"
#include "..\System\Exception.h"
#include "..\System\Net\EndPoint.h"
#include "..\System\Net\Sockets\SocketFlags.h"
#include "..\System\Net\IPAddress.h"
#include "..\System\Net\Sockets\Socket\SocketOperation.h"

namespace rust 
{
	class SocketAsyncResult : public Object // 0x0
	{
	public:
		System::Net::Sockets::Socket* Sock; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		__int64 handle; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		System::Object state; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::AsyncCallback* callback; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::WaitHandle* waithandle; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Exception* delayedException; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::EndPoint* EndPoint; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned char* Buffer; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		int Offset; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		int Size; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		System::Net::Sockets::SocketFlags SockFlags; // 0x58 (size: 0x4, flags: 0x6, type: 0x11)
		System::Net::Sockets::Socket* AcceptSocket; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		System::Net::IPAddress* Addresses; // 0x68 (size: 0x8, flags: 0x6, type: 0x1d)
		int Port; // 0x70 (size: 0x4, flags: 0x6, type: 0x8)
		System.Collections.Generic.IList<System.ArraySegment<unsigned char>> Buffers; // 0x78 (size: 0x8, flags: 0x6, type: 0x15)
		bool ReuseSocket; // 0x80 (size: 0x1, flags: 0x6, type: 0x2)
		System::Net::Sockets::Socket* acc_socket; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		int total; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		bool completed_sync; // 0x94 (size: 0x1, flags: 0x1, type: 0x2)
		bool completed; // 0x95 (size: 0x1, flags: 0x1, type: 0x2)
		bool blocking; // 0x96 (size: 0x1, flags: 0x6, type: 0x2)
		int error; // 0x98 (size: 0x4, flags: 0x3, type: 0x8)
		System::Net::Sockets::Socket::SocketOperation operation; // 0x9c (size: 0x4, flags: 0x1, type: 0x11)
		System::Object ares; // 0xa0 (size: 0x8, flags: 0x6, type: 0x1c)
		int EndCalled; // 0xa8 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0xb0
}
