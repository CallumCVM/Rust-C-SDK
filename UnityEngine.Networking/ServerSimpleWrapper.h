#pragma once

#include "..\UnityEngine\Networking\NetworkServer.h"

namespace rust 
{
	class ServerSimpleWrapper : public NetworkServerSimple // 0x60
	{
	public:
		UnityEngine::Networking::NetworkServer* m_Server; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
