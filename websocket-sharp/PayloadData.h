#pragma once

namespace WebSocketSharp
{
	class PayloadData : public Object // 0x0
	{
	public:
		unsigned char* _data; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		__int64 _extDataLength; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 _length; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x28
}
