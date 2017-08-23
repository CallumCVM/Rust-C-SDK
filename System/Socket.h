#pragma once

#include "..\System\Collections\Queue.h"
#include "..\System\Net\Sockets\AddressFamily.h"
#include "..\System\Net\Sockets\SocketType.h"
#include "..\System\Net\Sockets\ProtocolType.h"
#include "..\System\Threading\Thread.h"
#include "..\System\Net\EndPoint.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class Socket : public Object // 0x0
	{
	public:
		System::Collections::Queue* readQ; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Queue* writeQ; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::Thread* blocking_thread; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::EndPoint* seed_endpoint; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		bool islistening; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool useoverlappedIO; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		int MinListenPort; // 0x34 (size: 0x4, flags: 0x21, type: 0x8)
		int MaxListenPort; // 0x38 (size: 0x4, flags: 0x21, type: 0x8)
		int linger_timeout; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		__int64 socket; // 0x40 (size: 0x8, flags: 0x1, type: 0x18)
		System::Net::Sockets::AddressFamily address_family; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		System::Net::Sockets::SocketType socket_type; // 0x4c (size: 0x4, flags: 0x1, type: 0x11)
		System::Net::Sockets::ProtocolType protocol_type; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
		bool blocking; // 0x54 (size: 0x1, flags: 0x3, type: 0x2)
		bool isbound; // 0x55 (size: 0x1, flags: 0x1, type: 0x2)
		int max_bind_count; // 0x58 (size: 0x4, flags: 0x21, type: 0x8)
		bool connected; // 0x5c (size: 0x1, flags: 0x1, type: 0x2)
		bool closed; // 0x5d (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x5e (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x60
}
