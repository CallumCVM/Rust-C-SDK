#pragma once

namespace UnityEngine
{
	class RangeInt : public ValueType // 0x0
	{
	public:
		int start; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int length; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
