#pragma once

#include "..\UnityEngine\Light.h"

namespace rust 
{
	class SunSettings : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Light* light; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
