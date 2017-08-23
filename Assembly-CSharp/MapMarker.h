#pragma once

#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class MapMarker : public BaseEntity // 0x130
	{
	public:
		UnityEngine::GameObject* markerObj; // 0x130 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x138
}
