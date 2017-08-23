#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ViewmodelEditor : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::Vector3 view; // 0x18 (size: 0xc, flags: 0x1, type: 0x11)
		bool meleeHit; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
