#pragma once

namespace System
{
	class TimeSpan : public ValueType // 0x0
	{
	public:
		__int64 _ticks; // 0x10 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x18
}
