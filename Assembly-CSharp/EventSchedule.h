#pragma once

namespace rust 
{
	class EventSchedule : public BaseMonoBehaviour // 0x18
	{
	public:
		float minimumHoursBetween; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float maxmumHoursBetween; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
