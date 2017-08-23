#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Networking
{
	class ConnectionArray : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Networking.NetworkConnection>* m_LocalConnections; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Networking.NetworkConnection>* m_Connections; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
