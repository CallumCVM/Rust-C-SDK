#pragma once

#include "BaseEntity.h"
#include "Socket_Base.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class EntityLink : public Object // 0x0
	{
	public:
		BaseEntity* owner; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Socket_Base* socket; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<EntityLink>* connections; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		Gender gender; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		int capacity; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
