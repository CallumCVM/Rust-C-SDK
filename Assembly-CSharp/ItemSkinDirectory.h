#pragma once

#include "..\ItemSkinDirectory\Skin.h"

namespace rust 
{
	class ItemSkinDirectory : public ScriptableObject // 0x18
	{
	public:
		ItemSkinDirectory::Skin* skins; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
