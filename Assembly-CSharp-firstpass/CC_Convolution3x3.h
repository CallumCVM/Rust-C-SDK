#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class CC_Convolution3x3 : public CC_Base // 0x28
	{
	public:
		UnityEngine::Vector3 kernelTop; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 kernelMiddle; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 kernelBottom; // 0x40 (size: 0xc, flags: 0x6, type: 0x11)
		float divisor; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float amount; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x58
}
