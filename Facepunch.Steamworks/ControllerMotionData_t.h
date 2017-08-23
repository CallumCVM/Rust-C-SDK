#pragma once

namespace SteamNative
{
	class ControllerMotionData_t : public ValueType // 0x0
	{
	public:
		float RotQuatX; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float RotQuatY; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float RotQuatZ; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float RotQuatW; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float PosAccelX; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float PosAccelY; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float PosAccelZ; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		float RotVelX; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		float RotVelY; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float RotVelZ; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}