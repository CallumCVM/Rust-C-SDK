#pragma once

#include "..\UnityEngine\Networking\LocalClient.h"

namespace UnityEngine
{
	namespace Networking
{
	class ULocalConnectionToClient : public NetworkConnection // 0x80
	{
	public:
		UnityEngine::Networking::LocalClient* m_LocalClient; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x88
}
