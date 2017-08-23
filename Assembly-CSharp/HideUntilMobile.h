#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class HideUntilMobile : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::GameObject* visuals; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3 startPos; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
