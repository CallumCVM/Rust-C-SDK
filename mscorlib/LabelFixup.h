#pragma once

namespace rust 
{
	class LabelFixup : public ValueType // 0x0
	{
	public:
		int offset; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int pos; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int label_idx; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
