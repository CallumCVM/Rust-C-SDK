#pragma once

#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\LineRenderer.h"

namespace rust 
{
	class FlashlightBeam : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::LineRenderer* beamRenderer; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector2 scrollDir; // 0x20 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 localEndPoint; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
