#pragma once

namespace rust 
{
	class WaterVisibilityTrigger : public EnvironmentVolumeTrigger // 0x38
	{
	public:
		__int64 enteredTick; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x40
}
