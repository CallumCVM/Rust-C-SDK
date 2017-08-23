#pragma once

#include "SkinSet.h"

namespace rust 
{
	class SkinSetCollection : public ScriptableObject // 0x18
	{
	public:
		SkinSet* Skins; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
