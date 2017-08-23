#pragma once

namespace System
{
	class RuntimeArgumentHandle : public ValueType // 0x0
	{
	public:
		__int64 args; // 0x10 (size: 0x8, flags: 0x3, type: 0x18)
	}; // size = 0x18
}
