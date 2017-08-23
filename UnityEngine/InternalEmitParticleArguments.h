#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Color.h"

namespace UnityEngine
{
	class InternalEmitParticleArguments : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 pos; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 velocity; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
		float size; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float energy; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color color; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		float rotation; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float angularVelocity; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
