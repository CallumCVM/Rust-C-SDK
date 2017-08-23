#pragma once

#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Vector3.h"
#include "..\BaseEntity\Slot.h"
#include "GameObjectRef.h"

namespace rust 
{
	class Deployable : public PrefabAttribute // 0x98
	{
	public:
		UnityEngine::Mesh* guideMesh; // 0x98 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* placeEffect; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 guideMeshScale; // 0xa8 (size: 0xc, flags: 0x6, type: 0x11)
		bool guideLights; // 0xb4 (size: 0x1, flags: 0x6, type: 0x2)
		bool wantsInstanceData; // 0xb5 (size: 0x1, flags: 0x6, type: 0x2)
		bool copyInventoryFromItem; // 0xb6 (size: 0x1, flags: 0x6, type: 0x2)
		bool setSocketParent; // 0xb7 (size: 0x1, flags: 0x6, type: 0x2)
		bool toSlot; // 0xb8 (size: 0x1, flags: 0x6, type: 0x2)
		BaseEntity::Slot slot; // 0xbc (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0xc0
}
