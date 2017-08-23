#pragma once

namespace ProtoBuf
{
	class ParentInfo : public Object // 0x0
	{
	public:
		unsigned int uid; // 0x10 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int bone; // 0x14 (size: 0x4, flags: 0x86, type: 0x9)
		bool ShouldPool; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
