#pragma once

#include "..\System\Net\Sockets\Socket.h"
#include "..\System\Net\EndPoint.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class TcpListener : public Object // 0x0
	{
	public:
		System::Net::Sockets::Socket* server; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::EndPoint* savedEP; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool active; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
