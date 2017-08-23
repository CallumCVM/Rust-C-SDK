#pragma once

#include "..\UnityEngine\List.h"
#include "..\BuildingGrade\Enum.h"
#include "ConstructionSkin.h"
#include "DeferredAction.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\MeshCollider.h"
#include "Construction.h"

namespace rust 
{
	class BuildingBlock : public StabilityEntity // 0x200
	{
	public:
		UnityEngine::List<UnityEngine.GameObject>* handles; // 0x200 (size: 0x8, flags: 0x3, type: 0x15)
		ConstructionSkin* currentSkin; // 0x208 (size: 0x8, flags: 0x4, type: 0x12)
		DeferredAction* skinChange; // 0x210 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshRenderer* placeholderRenderer; // 0x218 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshCollider* placeholderCollider; // 0x220 (size: 0x8, flags: 0x1, type: 0x12)
		Construction* blockDefinition; // 0x228 (size: 0x8, flags: 0x86, type: 0x12)
		BuildingGrade::Enum grade; // 0x230 (size: 0x4, flags: 0x6, type: 0x11)
		BuildingGrade::Enum lastSkinGrade; // 0x234 (size: 0x4, flags: 0x4, type: 0x11)
		unsigned int buildingID; // 0x238 (size: 0x4, flags: 0x86, type: 0x9)
	}; // size = 0x240
}
