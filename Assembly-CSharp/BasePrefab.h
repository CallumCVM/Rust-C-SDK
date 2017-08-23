#pragma once

namespace rust 
{
	class BasePrefab : public BaseMonoBehaviour // 0x18
	{
	public:
		unsigned int prefabID; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		bool isClient; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
