#pragma once

#include "MaterialConfig.h"

namespace rust 
{
	class MaterialSetup : public MonoBehaviour // 0x18
	{
	public:
		MaterialConfig* config; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool destroy; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
