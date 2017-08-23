#pragma once

#include "..\UnityEngine\List.h"
#include "GameObjectRef.h"

namespace rust 
{
	class TriggerHurtEx : public TriggerBase // 0x30
	{
	public:
		UnityEngine::List<Rust.DamageTypeEntry>* damageOnEnter; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* effectOnEnter; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damageOnTimer; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* effectOnTimer; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damageOnMove; // 0x50 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* effectOnMove; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.DamageTypeEntry>* damageOnLeave; // 0x60 (size: 0x8, flags: 0x6, type: 0x15)
		GameObjectRef* effectOnLeave; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		float repeatRate; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		HurtType hurtTypeOnEnter; // 0x74 (size: 0x4, flags: 0x6, type: 0x11)
		HurtType hurtTypeOnTimer; // 0x78 (size: 0x4, flags: 0x6, type: 0x11)
		HurtType hurtTypeOnMove; // 0x7c (size: 0x4, flags: 0x6, type: 0x11)
		HurtType hurtTypeOnLeave; // 0x80 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x88
}
