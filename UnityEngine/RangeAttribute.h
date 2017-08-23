#pragma once

namespace UnityEngine
{
	class RangeAttribute : public PropertyAttribute // 0x18
	{
	public:
		float min; // 0x14 (size: 0x4, flags: 0x26, type: 0xc)
		float max; // 0x18 (size: 0x4, flags: 0x26, type: 0xc)
	}; // size = 0x20
}
