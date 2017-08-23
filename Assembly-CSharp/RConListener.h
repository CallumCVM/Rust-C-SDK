#pragma once

#include "..\System\Net\Sockets\TcpListener.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class RConListener : public Object // 0x0
	{
	public:
		System::Net::Sockets::TcpListener* server; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<Facepunch.RCon.RConClient>* clients; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
