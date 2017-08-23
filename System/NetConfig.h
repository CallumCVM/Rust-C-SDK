#pragma once

namespace System
{
	namespace Net
{
	class NetConfig : public Object // 0x0
	{
	public:
		bool ipv6Enabled; // 0x10 (size: 0x1, flags: 0x3, type: 0x2)
		int MaxResponseHeadersLength; // 0x14 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x18
}
