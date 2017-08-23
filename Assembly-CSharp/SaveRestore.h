#pragma once

namespace rust 
{
	class SaveRestore : public SingletonComponent`1 // 0x18
	{
	public:
		bool timedSave; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		int timedSavePause; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
