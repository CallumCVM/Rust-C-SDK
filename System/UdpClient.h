#pragma once

#include "..\System\Net\Sockets\Socket.h"
#include "..\System\Net\Sockets\AddressFamily.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class UdpClient : public Object // 0x0
	{
	public:
		System::Net::Sockets::Socket* socket; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* recvbuffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		bool disposed; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool active; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::Sockets::AddressFamily family; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
