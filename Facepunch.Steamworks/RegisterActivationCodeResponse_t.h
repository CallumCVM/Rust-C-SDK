#pragma once

#include "..\SteamNative\RegisterActivationCodeResult.h"

namespace SteamNative
{
	class RegisterActivationCodeResponse_t : public ValueType // 0x0
	{
	public:
		SteamNative::RegisterActivationCodeResult Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int PackageRegistered; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
