#pragma once

#include "..\UnityEngine\ReflectionProbe.h"

namespace UnityEngine
{
	namespace Rendering
{
	class ReflectionProbeBlendInfo : public ValueType // 0x0
	{
	public:
		UnityEngine::ReflectionProbe* probe; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		float weight; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
