#pragma once

namespace SteamNative
{
	class ControllerDigitalActionData_t : public ValueType // 0x0
	{
	public:
		bool BState; // 0x10 (size: 0x1, flags: 0x1006, type: 0x2)
		bool BActive; // 0x11 (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x18
}
