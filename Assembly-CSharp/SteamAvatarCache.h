#pragma once

#include "..\UnityEngine\Texture2D.h"
#include "..\Facepunch\Steamworks\Image.h"

namespace rust 
{
	class SteamAvatarCache : public Object // 0x0
	{
	public:
		UnityEngine::Texture2D* texture; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::Image* image; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned __int64 steamid; // 0x20 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x28
}
