#pragma once

#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\TextureFormat.h"

namespace GPU
{
	class CreateTextureRequest : public DeviceRequest // 0x28
	{
	public:
		UnityEngine::Texture2D* texture; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int width; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int height; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		bool mips; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::TextureFormat format; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		bool linear; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
