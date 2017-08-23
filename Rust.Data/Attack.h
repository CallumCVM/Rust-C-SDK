#pragma once

#include "..\UnityEngine\Vector3.h"

namespace ProtoBuf
{
	class Attack : public Object // 0x0
	{
	public:
		UnityEngine::Vector3 pointStart; // 0x10 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 pointEnd; // 0x1c (size: 0xc, flags: 0x86, type: 0x11)
		unsigned int hitID; // 0x28 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int hitBone; // 0x2c (size: 0x4, flags: 0x86, type: 0x9)
		UnityEngine::Vector3 hitNormalLocal; // 0x30 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 hitPositionLocal; // 0x3c (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 hitNormalWorld; // 0x48 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 hitPositionWorld; // 0x54 (size: 0xc, flags: 0x86, type: 0x11)
		unsigned int hitPartID; // 0x60 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int hitMaterialID; // 0x64 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int hitItem; // 0x68 (size: 0x4, flags: 0x86, type: 0x9)
		bool ShouldPool; // 0x6c (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x6d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
