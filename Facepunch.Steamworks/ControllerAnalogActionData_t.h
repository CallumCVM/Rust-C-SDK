#pragma once

#include "..\SteamNative\ControllerSourceMode.h"

namespace SteamNative
{
	class ControllerAnalogActionData_t : public ValueType // 0x0
	{
	public:
		SteamNative::ControllerSourceMode EMode; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		float X; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float Y; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		bool BActive; // 0x1c (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x20
}
