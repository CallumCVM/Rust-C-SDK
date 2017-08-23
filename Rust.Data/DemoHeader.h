#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Vector3.h"

namespace ProtoBuf
{
	class DemoHeader : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* level; // 0x10 (size: 0x8, flags: 0x86, type: 0xe)
		UnityEngine::UnicodeString* checksum; // 0x18 (size: 0x8, flags: 0x86, type: 0xe)
		unsigned int version; // 0x20 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int levelSeed; // 0x24 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int levelSize; // 0x28 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned __int64 localclient; // 0x30 (size: 0x8, flags: 0x86, type: 0xb)
		UnityEngine::Vector3 position; // 0x38 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 rotation; // 0x44 (size: 0xc, flags: 0x86, type: 0x11)
		bool ShouldPool; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x51 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
