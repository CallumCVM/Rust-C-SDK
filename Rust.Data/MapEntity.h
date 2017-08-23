#pragma once

#include "..\UnityEngine\List.h"

namespace ProtoBuf
{
	class MapEntity : public Object // 0x0
	{
	public:
		UnityEngine::List<unsigned int>* fogImages; // 0x10 (size: 0x8, flags: 0x86, type: 0x15)
		UnityEngine::List<unsigned int>* paintImages; // 0x18 (size: 0x8, flags: 0x86, type: 0x15)
		bool ShouldPool; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
