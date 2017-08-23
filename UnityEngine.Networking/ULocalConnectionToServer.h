#pragma once

#include "..\UnityEngine\Networking\NetworkServer.h"

namespace UnityEngine
{
	namespace Networking
{
	class ULocalConnectionToServer : public NetworkConnection // 0x80
	{
	public:
		UnityEngine::Networking::NetworkServer* m_LocalServer; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x88
}
