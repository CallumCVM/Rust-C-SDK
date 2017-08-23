#pragma once

#include "..\HeldEntity\HolsterInfo\HolsterSlot.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class offsetInfo : public Object // 0x0
	{
	public:
		HeldEntity::HolsterInfo::HolsterSlot type; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 offset; // 0x14 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 rotationOffset; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		int priority; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
