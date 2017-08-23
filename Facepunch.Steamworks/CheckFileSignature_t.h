#pragma once

#include "..\SteamNative\CheckFileSignature.h"

namespace SteamNative
{
	class CheckFileSignature_t : public ValueType // 0x0
	{
	public:
		SteamNative::CheckFileSignature CheckFileSignature; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
