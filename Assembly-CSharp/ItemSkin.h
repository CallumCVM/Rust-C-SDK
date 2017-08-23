#pragma once

#include "Skinnable.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class ItemSkin : public SteamInventoryItem // 0x58
	{
	public:
		Skinnable* Skinnable; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* Materials; // 0x60 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x68
}
