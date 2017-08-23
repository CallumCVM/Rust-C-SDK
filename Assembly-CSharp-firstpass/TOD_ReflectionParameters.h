#pragma once

#include "TOD_ReflectionType.h"
#include "..\UnityEngine\Rendering\ReflectionProbeClearFlags.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\Rendering\ReflectionProbeTimeSlicingMode.h"

namespace rust 
{
	class TOD_ReflectionParameters : public Object // 0x0
	{
	public:
		TOD_ReflectionType Mode; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Rendering::ReflectionProbeClearFlags ClearFlags; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::LayerMask CullingMask; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Rendering::ReflectionProbeTimeSlicingMode TimeSlicing; // 0x1c (size: 0x4, flags: 0x6, type: 0x11)
		int Resolution; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		float UpdateInterval; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
