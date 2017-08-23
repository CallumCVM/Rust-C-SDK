#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkBroadcastResult : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* serverAddress; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned char* broadcastData; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
