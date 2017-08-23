#pragma once

namespace rust 
{
	class DESCUNION : public ValueType // 0x0
	{
	public:
		__int64 lpvarValue; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		int oInst; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
