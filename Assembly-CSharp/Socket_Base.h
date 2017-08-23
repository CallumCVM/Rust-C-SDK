#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "SocketMod.h"

namespace rust 
{
	class Socket_Base : public PrefabAttribute // 0x98
	{
	public:
		UnityEngine::UnicodeString* socketName; // 0x98 (size: 0x8, flags: 0x6, type: 0xe)
		SocketMod* socketMods; // 0xa0 (size: 0x8, flags: 0x86, type: 0x1d)
		bool male; // 0xa8 (size: 0x1, flags: 0x6, type: 0x2)
		bool female; // 0xa9 (size: 0x1, flags: 0x6, type: 0x2)
		bool dummy; // 0xaa (size: 0x1, flags: 0x6, type: 0x2)
		bool monogamous; // 0xab (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 position; // 0xac (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Quaternion rotation; // 0xb8 (size: 0x10, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 selectSize; // 0xc8 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 selectCenter; // 0xd4 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0xe0
}
