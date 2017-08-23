#pragma once

#include "..\UnityEngine\Texture2D.h"

namespace GPU
{
	class ForceLevelCountRequest : public DeviceRequest // 0x28
	{
	public:
		UnityEngine::Texture2D* dest; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool updated; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
