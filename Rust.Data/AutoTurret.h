#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\List.h"

namespace ProtoBuf
{
	class AutoTurret : public Object // 0x0
	{
	public:
		UnityEngine::List<ProtoBuf.PlayerNameID>* users; // 0x10 (size: 0x8, flags: 0x86, type: 0x15)
		UnityEngine::Vector3 aimPos; // 0x18 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 aimDir; // 0x24 (size: 0xc, flags: 0x86, type: 0x11)
		unsigned int targetID; // 0x30 (size: 0x4, flags: 0x86, type: 0x9)
		bool ShouldPool; // 0x34 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x35 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
