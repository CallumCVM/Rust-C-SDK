#pragma once

#include "..\SteamNative\Platform\Interface.h"
#include "..\Facepunch\Steamworks\BaseSteamworks.h"

namespace SteamNative
{
	class SteamHTMLSurface : public Object // 0x0
	{
	public:
		SteamNative::Platform::Interface* platform; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Facepunch::Steamworks::BaseSteamworks* steamworks; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x20
}
