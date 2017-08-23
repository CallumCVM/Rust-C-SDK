#pragma once

namespace rust 
{
	class UTF7Encoder : public Encoder // 0x20
	{
	public:
		bool allowOptionals; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int leftOver; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		bool isInShifted; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
