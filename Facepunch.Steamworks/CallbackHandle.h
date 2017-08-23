#pragma once

#include "..\Facepunch\Steamworks\BaseSteamworks.h"
#include "..\SteamNative\SteamAPICall_t.h"
#include "..\System\Runtime\InteropServices\GCHandle.h"

namespace SteamNative
{
	class CallbackHandle : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::BaseSteamworks* steamworks; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamAPICall_t CallResultHandle; // 0x18 (size: 0x8, flags: 0x3, type: 0x11)
		bool CallResult; // 0x20 (size: 0x1, flags: 0x3, type: 0x2)
		System::Runtime::InteropServices::GCHandle FuncA; // 0x24 (size: 0x4, flags: 0x3, type: 0x11)
		System::Runtime::InteropServices::GCHandle FuncB; // 0x28 (size: 0x4, flags: 0x3, type: 0x11)
		System::Runtime::InteropServices::GCHandle FuncC; // 0x2c (size: 0x4, flags: 0x3, type: 0x11)
		__int64 vTablePtr; // 0x30 (size: 0x8, flags: 0x3, type: 0x18)
		System::Runtime::InteropServices::GCHandle PinnedCallback; // 0x38 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x40
}
