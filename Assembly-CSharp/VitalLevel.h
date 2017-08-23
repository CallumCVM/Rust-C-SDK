#pragma once

namespace rust 
{
	class VitalLevel : public ValueType // 0x0
	{
	public:
		float <Level>k__BackingField; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float lastUsedTime; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x18
}
