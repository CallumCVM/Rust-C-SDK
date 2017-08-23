#pragma once

namespace System
{
	namespace Net
{
	class SocketAddress : public Object // 0x0
	{
	public:
		unsigned char* data; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x18
}
