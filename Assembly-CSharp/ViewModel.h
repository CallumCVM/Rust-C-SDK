#pragma once

#include "GameObjectRef.h"
#include "HeldEntity.h"
#include "BaseViewModel.h"

namespace rust 
{
	class ViewModel : public MonoBehaviour // 0x18
	{
	public:
		GameObjectRef* viewModelPrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		HeldEntity* targetEntity; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
		BaseViewModel* instance; // 0x28 (size: 0x8, flags: 0x86, type: 0x12)
	}; // size = 0x30
}
