#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class ScaleTransform : public ScaleRenderer // 0x38
	{
	public:
		UnityEngine::Vector3 initialScale; // 0x38 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
