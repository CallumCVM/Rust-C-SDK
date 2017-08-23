#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class LifeScale : public BaseMonoBehaviour // 0x18
	{
	public:
		bool initialized; // 0x18 (size: 0x1, flags: 0x81, type: 0x2)
		UnityEngine::Vector3 initialScale; // 0x1c (size: 0xc, flags: 0x81, type: 0x11)
		UnityEngine::Vector3 finalScale; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 targetLerpScale; // 0x34 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
