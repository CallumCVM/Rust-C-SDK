#pragma once

#include "..\UnityEngine\Renderer.h"

namespace rust 
{
	class TOD_Render : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Renderer* rendererComponent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
