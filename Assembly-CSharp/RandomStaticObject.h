#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class RandomStaticObject : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* Candidates; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		float Probability; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
