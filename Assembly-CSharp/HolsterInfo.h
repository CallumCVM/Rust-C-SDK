#pragma once

#include "..\HeldEntity\HolsterInfo\HolsterSlot.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class HolsterInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* holsterBone; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		HeldEntity::HolsterInfo::HolsterSlot slot; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		bool displayWhenHolstered; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 holsterOffset; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 holsterRotationOffset; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
