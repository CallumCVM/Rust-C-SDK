#pragma once

#include "..\System\IO\FileAccess.h"
#include "..\System\Net\Sockets\Socket.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class NetworkStream : public Stream // 0x18
	{
	public:
		System::Net::Sockets::Socket* socket; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::FileAccess access; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		bool owns_socket; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		bool readable; // 0x25 (size: 0x1, flags: 0x1, type: 0x2)
		bool writeable; // 0x26 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x27 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
