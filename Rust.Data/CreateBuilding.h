#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Ray.h"

namespace ProtoBuf
{
	class CreateBuilding : public Object // 0x0
	{
	public:
		unsigned int entity; // 0x10 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int socket; // 0x14 (size: 0x4, flags: 0x86, type: 0x9)
		bool onterrain; // 0x18 (size: 0x1, flags: 0x86, type: 0x2)
		UnityEngine::Vector3 position; // 0x1c (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 normal; // 0x28 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Ray ray; // 0x34 (size: 0x18, flags: 0x86, type: 0x11)
		unsigned int blockID; // 0x4c (size: 0x4, flags: 0x86, type: 0x9)
		UnityEngine::Vector3 rotation; // 0x50 (size: 0xc, flags: 0x86, type: 0x11)
		bool ShouldPool; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x5d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
