#pragma once

#include "..\UnityEngine\Object.h"

namespace rust 
{
	class TimedRemoval : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Object* objectToDestroy; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float removeDelay; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
