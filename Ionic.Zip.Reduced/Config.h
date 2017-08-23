#pragma once

#include "..\Ionic\Zlib\DeflateFlavor.h"

namespace rust 
{
	class Config : public Object // 0x0
	{
	public:
		int GoodLength; // 0x10 (size: 0x4, flags: 0x3, type: 0x8)
		int MaxLazy; // 0x14 (size: 0x4, flags: 0x3, type: 0x8)
		int NiceLength; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
		int MaxChainLength; // 0x1c (size: 0x4, flags: 0x3, type: 0x8)
		Ionic::Zlib::DeflateFlavor Flavor; // 0x20 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x28
}
