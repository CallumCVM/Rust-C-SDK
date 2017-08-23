#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class LerpBetweenPointsBool : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Vector3 offsetPosLocal; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		float speed; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 targetPos; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 initialPos; // 0x34 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
