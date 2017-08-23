#pragma once

#include "..\UnityEngine\Networking\NetBuffer.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkReader : public Object // 0x0
	{
	public:
		UnityEngine::Networking::NetBuffer* m_buf; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
