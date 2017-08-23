#pragma once

#include "..\UnityEngine\AnimationCurve.h"

namespace rust 
{
	class TOD_LightAtTime : public TOD_Light // 0x20
	{
	public:
		UnityEngine::AnimationCurve* Intensity; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
