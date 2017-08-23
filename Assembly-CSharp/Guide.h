#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\Construction\Target.h"
#include "Construction.h"

namespace rust 
{
	class Guide : public Object // 0x0
	{
	public:
		UnityEngine::GameObject* guideObject; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Construction::Target lastPlacement; // 0x18 (size: 0x70, flags: 0x6, type: 0x11)
		Construction* component; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x90
}
