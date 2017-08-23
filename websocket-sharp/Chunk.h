#pragma once

namespace WebSocketSharp
{
	namespace Net
{
	class Chunk : public Object // 0x0
	{
	public:
		unsigned char* _data; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _offset; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
