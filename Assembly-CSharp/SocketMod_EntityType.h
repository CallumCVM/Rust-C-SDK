#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\QueryTriggerInteraction.h"
#include "BaseEntity.h"

namespace rust 
{
	class SocketMod_EntityType : public SocketMod // 0xa8
	{
	public:
		BaseEntity* searchType; // 0xa8 (size: 0x8, flags: 0x6, type: 0x12)
		float sphereRadius; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask layerMask; // 0xb4 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::QueryTriggerInteraction queryTriggers; // 0xb8 (size: 0x4, flags: 0x6, type: 0x11)
		bool wantsCollide; // 0xbc (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xc0
}
