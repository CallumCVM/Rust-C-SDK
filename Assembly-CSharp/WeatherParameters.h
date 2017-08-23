#pragma once

namespace rust 
{
	class WeatherParameters : public Object // 0x0
	{
	public:
		float RainChance; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float FogChance; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float CloudChance; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float StormChance; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
