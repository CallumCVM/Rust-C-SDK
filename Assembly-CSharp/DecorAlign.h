#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class DecorAlign : public DecorComponent // 0x98
	{
	public:
		float NormalAlignment; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float GradientAlignment; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 SlopeOffset; // 0xa0 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 SlopeScale; // 0xac (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0xb8
}
