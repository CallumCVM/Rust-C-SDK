#pragma once

#include "BaseEntity.h"
#include "Model.h"

namespace rust 
{
	class BaseCollision : public MonoBehaviour // 0x18
	{
	public:
		BaseEntity* Owner; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Model* model; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
