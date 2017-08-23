#pragma once

namespace rust 
{
	class TriggerTemperature : public TriggerBase // 0x30
	{
	public:
		float Temperature; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float triggerSize; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
