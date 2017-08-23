#pragma once

#include "..\UnityEngine\AnimationCurve.h"
#include "..\Climate\Float4.h"
#include "..\Climate\Texture2D4.h"

namespace rust 
{
	class ClimateParameters : public Object // 0x0
	{
	public:
		UnityEngine::AnimationCurve* Temperature; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::Float4* AerialDensity; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::Float4* FogDensity; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::Texture2D4* LUT; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
