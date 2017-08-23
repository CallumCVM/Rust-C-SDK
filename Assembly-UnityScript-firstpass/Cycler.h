#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class Cycler : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* childObject; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* currObjAlive; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int changeObj; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
