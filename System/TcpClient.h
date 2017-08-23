#pragma once

#include "..\System\Net\Sockets\NetworkStream.h"
#include "..\System\Net\Sockets\Socket.h"
#include "..\System\Net\Sockets\TcpClient\Properties.h"
#include "..\System\Net\Sockets\LingerOption.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class TcpClient : public Object // 0x0
	{
	public:
		System::Net::Sockets::NetworkStream* stream; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::Socket* client; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::LingerOption* linger_state; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool active; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::Sockets::TcpClient::Properties values; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		int recv_timeout; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int send_timeout; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int recv_buffer_size; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int send_buffer_size; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		bool no_delay; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
