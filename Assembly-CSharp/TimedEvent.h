#pragma once

namespace rust 
{
	class TimedEvent : public ValueType // 0x0
	{
	public:
		__int64 ticks; // 0x10 (size: 0x8, flags: 0x6, type: 0xa)
		float delta; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float variance; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		System.Action<unsigned int> action; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x28
}
