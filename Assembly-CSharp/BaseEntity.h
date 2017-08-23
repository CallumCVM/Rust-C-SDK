#pragma once

#include "Ragdoll.h"
#include "BoneFollower.h"
#include "PositionLerp.h"
#include "..\UnityEngine\List.h"
#include "EntityRef.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "BaseEntity.h"
#include "ItemSkin.h"
#include "OccludeeSphere.h"
#include "..\UnityEngine\Bounds.h"
#include "GameObjectRef.h"
#include "Model.h"
#include "EntityComponentBase.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class BaseEntity : public BaseNetworkable // 0x48
	{
	public:
		Ragdoll* ragdoll; // 0x48 (size: 0x8, flags: 0x4, type: 0x12)
		BoneFollower* boneFollower; // 0x50 (size: 0x8, flags: 0x86, type: 0x12)
		PositionLerp* positionLerp; // 0x58 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<GameMenu.Option>* menuOptions; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<EntityLink>* links; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		EntityRef parentEntity; // 0x70 (size: 0x10, flags: 0x86, type: 0x11)
		BaseEntity* addedToParentEntity; // 0x80 (size: 0x8, flags: 0x3, type: 0x12)
		ItemSkin* itemSkin; // 0x88 (size: 0x8, flags: 0x86, type: 0x12)
		EntityRef* entitySlots; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::List<TriggerBase>* triggers; // 0x98 (size: 0x8, flags: 0x4, type: 0x15)
		OccludeeSphere* localOccludees; // 0xa0 (size: 0x8, flags: 0x4, type: 0x1d)
		GameObjectRef* impactEffect; // 0xa8 (size: 0x8, flags: 0x6, type: 0x12)
		Model* model; // 0xb0 (size: 0x8, flags: 0x6, type: 0x12)
		EntityComponentBase* _components; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _name; // 0xc0 (size: 0x8, flags: 0x84, type: 0xe)
		double lastPositionTime; // 0xc8 (size: 0x8, flags: 0x86, type: 0xd)
		bool wasDisabled; // 0xd0 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int broadcastProtocol; // 0xd4 (size: 0x4, flags: 0x1, type: 0x9)
		bool linkedToNeighbours; // 0xd8 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Vector3 parentLocalPos; // 0xdc (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Quaternion parentLocalRot; // 0xe8 (size: 0x10, flags: 0x86, type: 0x11)
		bool isVisible; // 0xf8 (size: 0x1, flags: 0x4, type: 0x2)
		bool isAnimatorVisible; // 0xf9 (size: 0x1, flags: 0x4, type: 0x2)
		bool isShadowVisible; // 0xfa (size: 0x1, flags: 0x4, type: 0x2)
		UnityEngine::Bounds bounds; // 0xfc (size: 0x18, flags: 0x6, type: 0x11)
		bool enableSaving; // 0x114 (size: 0x1, flags: 0x6, type: 0x2)
		bool syncPosition; // 0x115 (size: 0x1, flags: 0x6, type: 0x2)
		Flags flags; // 0x118 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int parentBone; // 0x11c (size: 0x4, flags: 0x86, type: 0x9)
		unsigned __int64 skinID; // 0x120 (size: 0x8, flags: 0x86, type: 0xb)
		unsigned __int64 <OwnerID>k__BackingField; // 0x128 (size: 0x8, flags: 0x1, type: 0xb)
	}; // size = 0x130
}
